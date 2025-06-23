// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyEscaparBomba.h"
#include "BomberMan_012025Character.h"
#include "GameFramework/CharacterMovementComponent.h" // ? NECESARIO


void UStrategyEscaparBomba::Mover(ABomberMan_012025Character* Jugador)
{
    if (!Jugador) return;

    // Salto doble (ejemplo)
    Jugador->GetCharacterMovement()->JumpZVelocity = 1400.f;

    // Puedes hacer que el personaje salte si quieres forzar aquí
    Jugador->Jump();
}