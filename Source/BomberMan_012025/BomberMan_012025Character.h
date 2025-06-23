// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "ProxyBomba.h"
#include "IStrategyEnemigo.h"
#include "BomberMan_012025Character.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class ABomberMan_012025Character : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

public:
	ABomberMan_012025Character();
	

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			

protected:

	virtual void NotifyControllerChanged() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

protected:

	// Clase Proxy de la bomba para spawn (configurable desde Blueprint)
	UPROPERTY(EditDefaultsOnly, Category = "Bombas")
	TSubclassOf<AProxyBomba> ProxyBombaClase;

	// Clase real de la bomba (para que el proxy la configure)
	UPROPERTY(EditDefaultsOnly, Category = "Bombas")
	TSubclassOf<ABomba> ClaseRealDeBomba;

	// Función que llamaremos al presionar la tecla para colocar bomba
	void ColocarBomba();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* PlaceBombAction;

protected:
	UFUNCTION()
	void HandlePauseInput();

	UPROPERTY()
	class APauseCommandInvoker* PauseCommandInvoker;


private:
	UPROPERTY()
	TScriptInterface<IIStrategyEnemigo> MovimientoActual;

	void EstablecerMovimiento(TScriptInterface<IIStrategyEnemigo> NuevaEstrategia);
	void AplicarMovimiento();

public:
	void CambiarAEstrategiaPerseguir();
	void CambiarAEstrategiaEscapar();

private:
	UPROPERTY()
	bool bEstrategiaPerseguirActiva = false;

	UPROPERTY()
	bool bEstrategiaEscaparActiva = false;
};

