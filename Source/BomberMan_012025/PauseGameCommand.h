// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameCommand.h"
#include "PauseGameCommand.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API UPauseGameCommand : public UObject, public IGameCommand
{
	GENERATED_BODY()

public:
    virtual void Execute() override;
    virtual void Undo() override;

    void SetPauseManager(class APauseCommandInvoker* Manager);

private:
    class APauseCommandInvoker* PauseManager;
	
};
