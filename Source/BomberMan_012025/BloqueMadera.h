// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloquePrototype.h"
#include "BloqueMadera.generated.h"
/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueMadera : public ABloque //public IBloquePrototype
{
	GENERATED_BODY()

public:	
	ABloqueMadera();

	virtual AActor* Clonar() const;

protected:	
	virtual void BeginPlay() override;

private:

	virtual void Tick(float DeltaTime) override;

};
