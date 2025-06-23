// Fill out your copyright notice in the Description page of Project Settings.


#include "PauseGameCommand.h"
#include "PauseCommandInvoker.h"

void UPauseGameCommand::Execute()
{
    if (PauseManager)
    {
        PauseManager->TogglePause();
    }
}

void UPauseGameCommand::Undo()
{
    Execute(); // Reutilizamos Execute para alternar el estado
}

void UPauseGameCommand::SetPauseManager(APauseCommandInvoker* Manager)
{
    PauseManager = Manager;
}

