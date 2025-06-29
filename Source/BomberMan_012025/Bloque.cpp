// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ABloque::ABloque()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	//RootComponent = MeshComp;
	RootComponent = MallaBloque;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloque(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (ObjetoMallaBloque.Succeeded())
	{
		MallaBloque->SetStaticMesh(ObjetoMallaBloque.Object);

		MallaBloque->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

		MallaBloque->SetCollisionProfileName(TEXT("BlockAll"));
	}

	FloatSpeed = 5.0f;
	RotationSpeed = 3.0f;

	bPuedeMoverse = FMath::RandBool();
}

// Called when the game starts or when spawned
void ABloque::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

AActor* ABloque::Clonar() const
{

	if (puedeClonarse)
	{
		UWorld* Mundo = GetWorld();
		if (!Mundo) return nullptr;
		
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = GetOwner();
		SpawnParams.Instigator = GetInstigator();

		// Se usa GetClass() para que Unreal instancie la subclase concreta en tiempo de ejecución
		return Mundo->SpawnActor<AActor>(GetClass(), GetActorLocation(), GetActorRotation(), SpawnParams);
	}
	else
	{
		return nullptr;
	}
	
}

void ABloque::Inicializar(UBloquePesoLiviano* NuevoFlyweight)
{
	Flyweight = NuevoFlyweight;
	if (Flyweight && MallaBloque)
	{
		Flyweight->AplicarA(MallaBloque);
	}
}

ABloque* ABloque::CrearBloque(UWorld* Mundo, FVector Posicion)
{
	if (!Mundo) return nullptr;

	FActorSpawnParameters Params;
	return Mundo->SpawnActor<ABloque>(GetClass(), Posicion, FRotator::ZeroRotator, Params);

}