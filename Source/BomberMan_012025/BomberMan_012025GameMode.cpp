// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025GameMode.h"
#include "BomberMan_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "BloqueMadera.h"
#include "BloquePrototype.h"
#include "EngineUtils.h"
#include "BloqueConcreto.h"
#include "BloqueAcero.h"
#include "BloqueLadrillo.h"


ABomberMan_012025GameMode::ABomberMan_012025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	for (int f = 0; f < Filas; ++f)
	{
		for (int c = 0; c < Columnas; ++c)
		{
			Bloques[f][c] = nullptr;
		}
	}
}

void ABomberMan_012025GameMode::BeginPlay()
{
	Super::BeginPlay();

	GenerarLaberintoConPrototype();

}

void ABomberMan_012025GameMode::GenerarLaberintoConPrototype()
{
	UWorld* Mundo = GetWorld();
	if (!Mundo) return;

	const int Mitad = Columnas / 2;

	//esto controla la posiscion del laberinto OJITO CON ESTO
	FVector OrigenLaberinto = FVector(500.f, 500.f, 0.f);

	// -------------------------------------------------
	// 1) Aca esta la primera mitad del laberinto de forma alreatoria
	// -------------------------------------------------
	for (int fila = 0; fila < Filas; ++fila)
	{
		for (int col = Mitad; col < Columnas; ++col)
		{
			FVector PosMundo = OrigenLaberinto + FVector(col * Offset, fila * Offset, 0.f);

			if (fila == 0 || fila == Filas - 1 || col == Columnas - 1)
			{
				ABloqueAcero* Acero = Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), PosMundo, FRotator::ZeroRotator);
				Bloques[fila][col] = Acero;
				BloquesOriginales.Add(Acero);
			}
			else
			{
				const bool EsPasillo = (FMath::RandRange(0, 1) == 0);
				if (EsPasillo)
				{
					Bloques[fila][col] = nullptr;
				}
				else
				{
					int TipoInterior = FMath::RandRange(1, 3);
					ABloque* BloqueCreado = nullptr;

					switch (TipoInterior)
					{
					case 1:
						BloqueCreado = Mundo->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), PosMundo, FRotator::ZeroRotator);
						break;
					case 2:
						BloqueCreado = Mundo->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), PosMundo, FRotator::ZeroRotator);
						break;
					case 3:
						BloqueCreado = Mundo->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), PosMundo, FRotator::ZeroRotator);
						break;
					}

					Bloques[fila][col] = BloqueCreado;

					if (BloqueCreado)
					{
						BloquesOriginales.Add(BloqueCreado);
					}
				}
			}
		}
	}

	// -------------------------------------------------
	// 2) aca esta la parte clonada tipo espejo (mirror)
	// -------------------------------------------------
	for (int fila = 0; fila < Filas; ++fila)
	{
		for (int col = Mitad; col < Columnas; ++col)
		{
			ABloque* Original = Bloques[fila][col];
			if (!Original) continue;

			IBloquePrototype* Prototipo = Cast<IBloquePrototype>(Original);
			if (!Prototipo) continue;

			AActor* ActorClon = Prototipo->Clonar();
			ABloque* Clon = Cast<ABloque>(ActorClon);
			if (!Clon) continue;

			int ColEspejo = Columnas - 1 - col;
			FVector PosEspejo = OrigenLaberinto + FVector(ColEspejo * Offset, fila * Offset, 0.f);
			Clon->SetActorLocation(PosEspejo);

			BloquesClonados.Add(Clon);
		}
	}
}
