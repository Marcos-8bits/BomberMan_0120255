// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueMadera.h"
#include "Math/UnrealMathUtility.h"

ABloqueMadera::ABloqueMadera()
{
    PrimaryActorTick.bCanEverTick = false;

    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Wood_Oak.M_Wood_Oak'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
}

void ABloqueMadera::BeginPlay()
{
	Super::BeginPlay();

}

void ABloqueMadera::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
