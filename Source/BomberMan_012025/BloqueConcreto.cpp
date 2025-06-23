// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueConcreto.h"
#include "PauseCommandInvoker.h"
#include <Kismet/GameplayStatics.h>

ABloqueConcreto::ABloqueConcreto()
{
    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Concrete_Tiles.M_Concrete_Tiles'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
    bIsPaused = false;
    OscillationAmplitude = 50.0f;  // Qué tanto se mueve arriba y abajo
    OscillationSpeed = 2.0f;       // Qué tan rápido oscila
}

void ABloqueConcreto::BeginPlay()
{
    Super::BeginPlay();

    StartLocation = GetActorLocation(); // Guardamos la posición inicial

    APauseCommandInvoker* PauseManager = Cast<APauseCommandInvoker>(
        UGameplayStatics::GetActorOfClass(GetWorld(), APauseCommandInvoker::StaticClass())
    );
    if (PauseManager)
    {
        PauseManager->OnGamePaused.AddDynamic(this, &ABloqueConcreto::OnGamePaused);
    }
}
void ABloqueConcreto::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bIsPaused) return;

    // Movimiento de oscilación vertical (Z)
    float Time = GetWorld()->GetTimeSeconds();
    float ZOffset = FMath::Sin(Time * OscillationSpeed) * OscillationAmplitude;

    FVector NewLocation = StartLocation + FVector(0.0f, 0.0f, ZOffset);
    SetActorLocation(NewLocation);
}

void ABloqueConcreto::OnGamePaused(bool bPaused)
{
    bIsPaused = bPaused;
   
}

