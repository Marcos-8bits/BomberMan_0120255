// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueConcreto.generated.h"
/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueConcreto : public ABloque
{
	GENERATED_BODY()

public:	

	ABloqueConcreto();


protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnGamePaused(bool bIsPaused);

private:
	bool bIsPaused;

	// Movimiento oscilatorio
	FVector StartLocation;
	float OscillationAmplitude;
	float OscillationSpeed;
	
};
