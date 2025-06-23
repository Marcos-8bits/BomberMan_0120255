// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025Character.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "PauseCommandInvoker.h"
#include "PauseGameCommand.h"
#include "Kismet/GameplayStatics.h"
#include "ProxyBomba.h"
#include "StrategyEscaparBomba.h"
#include "StrategyPerseguirJugador.h"
#include "IStrategyEnemigo.h"


DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ABomberMan_012025Character

ABomberMan_012025Character::ABomberMan_012025Character()
{

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void ABomberMan_012025Character::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void ABomberMan_012025Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{

	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UE_LOG(LogTemp, Warning, TEXT("SetupPlayerInputComponent ejecutado"));
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABomberMan_012025Character::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABomberMan_012025Character::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}


	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (PlaceBombAction)
		{
			EnhancedInputComponent->BindAction(PlaceBombAction, ETriggerEvent::Triggered, this, &ABomberMan_012025Character::ColocarBomba);
		}
	}
	else
	{
		// Si no usas Enhanced Input, bind directo de tecla:
		PlayerInputComponent->BindAction("PlaceBomb", IE_Pressed, this, &ABomberMan_012025Character::ColocarBomba);
	}


	if (InputComponent)
	{
		InputComponent->BindAction("Pause", IE_Pressed, this, &ABomberMan_012025Character::HandlePauseInput);
	}

	// Spawnear el invocador de comandos
	PauseCommandInvoker = GetWorld()->SpawnActor<APauseCommandInvoker>();

	// Configurar el comando de pausa
	UPauseGameCommand* PauseCommand = NewObject<UPauseGameCommand>();
	PauseCommand->SetPauseManager(PauseCommandInvoker);


	PlayerInputComponent->BindAction("Perseguir", IE_Pressed, this, &ABomberMan_012025Character::CambiarAEstrategiaPerseguir);
	PlayerInputComponent->BindAction("Escapar", IE_Pressed, this, &ABomberMan_012025Character::CambiarAEstrategiaEscapar);


}

void ABomberMan_012025Character::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ABomberMan_012025Character::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void ABomberMan_012025Character::ColocarBomba()
{
	if (!ProxyBombaClase) return;

	FVector Ubicacion = GetActorLocation();
	FVector Direccion = GetActorForwardVector();  // hacia adelante
	float Distancia = 100.f;  // o 200.f si quieres más separación

	FVector PosicionAdelantada = Ubicacion + Direccion * Distancia;

	float GridSize = 100.f;
	float PosX = FMath::GridSnap(PosicionAdelantada.X, GridSize);
	float PosY = FMath::GridSnap(PosicionAdelantada.Y, GridSize);
	float PosZ = Ubicacion.Z;

	FVector PosicionBomba(PosX, PosY, PosZ);

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();

	AProxyBomba* NuevaProxy = GetWorld()->SpawnActor<AProxyBomba>(ProxyBombaClase, PosicionBomba, FRotator::ZeroRotator, SpawnParams);

	if (NuevaProxy)
	{
		NuevaProxy->ConfigurarBomba(ClaseRealDeBomba, FVector2D(PosX, PosY));
		NuevaProxy->ActivarBomba();
	}

}

void ABomberMan_012025Character::HandlePauseInput()
{
	if (PauseCommandInvoker)
	{
		PauseCommandInvoker->TogglePause();
	}
}

void ABomberMan_012025Character::CambiarAEstrategiaPerseguir()
{
	if (!bEstrategiaPerseguirActiva)
	{
		UE_LOG(LogTemp, Warning, TEXT("Activando estrategia perseguir"));
		bEstrategiaEscaparActiva = false;

		UStrategyPerseguirJugador* Estrategia = NewObject<UStrategyPerseguirJugador>(this);
		EstablecerMovimiento(Estrategia);
		AplicarMovimiento();

		bEstrategiaPerseguirActiva = true;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Desactivando estrategia perseguir"));
		EstablecerMovimiento(nullptr);
		bEstrategiaPerseguirActiva = false;

		// Restaurar velocidad original
		GetCharacterMovement()->MaxWalkSpeed = 500.f;
	}
}

void ABomberMan_012025Character::CambiarAEstrategiaEscapar()
{
	if (!bEstrategiaEscaparActiva)
	{
		UE_LOG(LogTemp, Warning, TEXT("Activando estrategia escapar"));
		bEstrategiaPerseguirActiva = false;

		UStrategyEscaparBomba* Estrategia = NewObject<UStrategyEscaparBomba>(this);
		EstablecerMovimiento(Estrategia);
		AplicarMovimiento();

		bEstrategiaEscaparActiva = true;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Desactivando estrategia escapar"));
		EstablecerMovimiento(nullptr);
		bEstrategiaEscaparActiva = false;

		// Restaurar salto original
		GetCharacterMovement()->JumpZVelocity = 700.f;
	}
}
void ABomberMan_012025Character::AplicarMovimiento()
{
	if (MovimientoActual)
	{
		UE_LOG(LogTemp, Warning, TEXT("Aplicando movimiento de estrategia"));
		MovimientoActual->Mover(this);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No hay estrategia activa"));
	}
}

void ABomberMan_012025Character::EstablecerMovimiento(TScriptInterface<IIStrategyEnemigo> NuevaEstrategia)
{
	MovimientoActual = NuevaEstrategia;
}