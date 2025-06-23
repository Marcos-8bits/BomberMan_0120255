// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BomberMan_012025Character.h"
#include "IStrategyEnemigo.h"
#include "StrategyEscaparBomba.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API UStrategyEscaparBomba : public UObject, public IIStrategyEnemigo
{
	GENERATED_BODY()

public:
	virtual void Mover(ABomberMan_012025Character* Jugador) override;
	
};
