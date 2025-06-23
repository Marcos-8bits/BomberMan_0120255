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
#include "ProxyBomba.h"
#include "FabricaBloquesFl.h"
#include "BloquePesoLiviano.h"
#include "Enemigo.h"


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

	if (!Fabrica)
	{
		Fabrica = NewObject<UFabricaBloquesFl>(this);
	}

	//GenerarLaberintoConFlyweight();  // <- Generación usando patrón Flyweight


	// FACTORY METHOD IMPROVISADO

	UWorld* Mundo = GetWorld();
	if (!Mundo) return;

	// MADERA
	ABloqueMadera* MaderaTemp = Mundo->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass());
	if (MaderaTemp)
	{
		ABloque* BloqueMadera = MaderaTemp->CrearBloque(Mundo, FVector(0.f, 0.f, 0.f));
		MaderaTemp->Destroy();
	}

	// CONCRETO
	ABloqueConcreto* ConcretoTemp = Mundo->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass());
	if (ConcretoTemp)
	{
		ABloque* BloqueConcreto = ConcretoTemp->CrearBloque(Mundo, FVector(200.f, 0.f, 0.f));
		ConcretoTemp->Destroy();
	}

	// LADRILLO
	ABloqueLadrillo* LadrilloTemp = Mundo->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass());
	if (LadrilloTemp)
	{
		ABloque* BloqueLadrillo = LadrilloTemp->CrearBloque(Mundo, FVector(400.f, 0.f, 0.f));
		LadrilloTemp->Destroy();
	}

	// ACERO
	ABloqueAcero* AceroTemp = Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass());
	if (AceroTemp)
	{
		ABloque* BloqueAcero = AceroTemp->CrearBloque(Mundo, FVector(600.f, 0.f, 0.f));
		AceroTemp->Destroy();
	}


}

void ABomberMan_012025GameMode::GenerarLaberintoConPrototype()
{
	UWorld* Mundo = GetWorld();
	if (!Mundo) return;

	const int Mitad = Columnas / 2;
	const int Mitad2 = Filas / 2;

	//esto controla la posiscion del laberinto OJITO CON ESTO
	FVector OrigenLaberinto = FVector(500.f, 500.f, 0.f);

	// -------------------------------------------------
	// 1) Aca esta la primera mitad del laberinto de forma alreatoria
	// -------------------------------------------------
	for (int fila = Mitad2; fila < Filas; ++fila)
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
	// 1) Aca esta la primera mitad del laberinto de forma alreatoria
	// -------------------------------------------------
	for (int fila = 0; fila < Mitad2; ++fila)
	{
		for (int col = 0; col < Columnas; ++col)
		{
			FVector PosMundo = OrigenLaberinto + FVector(col * Offset, fila * Offset, 0.f);

			if (fila == 0 || fila == Filas - 1 || col == Columnas - 1 || col == 0)
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
	for (int fila = Mitad2; fila < Filas; ++fila)
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

void ABomberMan_012025GameMode::GenerarLaberintoConFlyweight()
{
	UWorld* Mundo = GetWorld();
	if (!Mundo || !Fabrica) return;

	FVector OrigenLaberinto = FVector(500.f, 500.f, 0.f);

	for (int fila = 0; fila < Filas; ++fila)
	{
		for (int col = 0; col < Columnas; ++col)
		{
			FVector PosMundo = OrigenLaberinto + FVector(col * Offset, fila * Offset, 0.f);

			// Definir el tipo de bloque
			FString TipoBloque;

			if (fila == 0 || fila == Filas - 1 || col == 0 || col == Columnas - 1)
			{
				TipoBloque = "Acero";  // bordes de acero
			}
			else
			{
				bool EsPasillo = (FMath::RandRange(0, 1) == 0);
				if (EsPasillo)
				{
					continue;  // espacio vacío
				}
				else
				{
					switch (FMath::RandRange(1, 3))
					{
					case 1: TipoBloque = "Madera"; break;
					case 2: TipoBloque = "Concreto"; break;
					case 3: TipoBloque = "Ladrillo"; break;
					}
				}
			}

			// Crear actor de tipo ABloque
			ABloque* Bloque = Mundo->SpawnActor<ABloque>(PosMundo, FRotator::ZeroRotator);

			if (Bloque)
			{
				// Obtener el objeto compartido del tipo
				UBloquePesoLiviano* PesoLiviano = Fabrica->ObtenerBloque(TipoBloque);

				if (PesoLiviano)
				{
					Bloque->Inicializar(PesoLiviano);  // Aplicar mesh y material compartido
				}

				Bloques[fila][col] = Bloque;
				BloquesOriginales.Add(Bloque);
			}
		}
	}
}