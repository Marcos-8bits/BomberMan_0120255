// Fill out your copyright notice in the Description page of Project Settings.


#include "PauseCommandInvoker.h"
#include "Kismet/GameplayStatics.h"

APauseCommandInvoker::APauseCommandInvoker()
{
    bIsGamePaused = false;
}

void APauseCommandInvoker::TogglePause()
{
    bIsGamePaused = !bIsGamePaused;

    // Congelar/descongelar el tiempo del juego
    UGameplayStatics::SetGlobalTimeDilation(GetWorld(), bIsGamePaused ? 0.0f : 1.0f);

    // Notificar a todos los actores interesados
    OnGamePaused.Broadcast(bIsGamePaused);

    UE_LOG(LogTemp, Warning, TEXT("Juego %s"), bIsGamePaused ? TEXT("Pausado") : TEXT("Reanudado"));
}




