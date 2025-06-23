// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyPerseguirJugador.h"
#include "BomberMan_012025Character.h"
#include "GameFramework/CharacterMovementComponent.h" // ? NECESARIO

void UStrategyPerseguirJugador::Mover(ABomberMan_012025Character* Jugador)
{
    if (!Jugador) return;

    // Aumenta velocidad al máximo (ejemplo)
    Jugador->GetCharacterMovement()->MaxWalkSpeed = 900.f;
}