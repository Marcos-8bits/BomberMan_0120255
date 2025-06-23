// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"


UCLASS()
class BOMBERMAN_012025_API AEnemigo : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
