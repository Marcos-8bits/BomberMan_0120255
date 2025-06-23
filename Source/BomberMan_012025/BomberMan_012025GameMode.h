// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberMan_012025GameMode.generated.h"
class ABloque;
UCLASS(minimalapi)
class ABomberMan_012025GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan_012025GameMode();

protected:

	virtual void BeginPlay() override;

private:
	// Tamaño fijo del laberinto en “celdas”
	static constexpr int Filas = 20;
	static constexpr int Columnas = 20;

	/**
	 * Guardamos punteros a los bloques que coloquemos en la mitad derecha.
	 * Si en (fila, col) hay pasillo, quedará en nullptr.
	 */
	TArray<ABloque*> BloquesOriginales;
	TArray<ABloque*> BloquesClonados;

	ABloque* Bloques[Filas][Columnas];

	/**
	 * Rellena la mitad derecha [col >= Mitad] con muros/pasillos, spawn-eando
	 * cada bloque que sea “muro” y guardándolo en BloquesDerecha[fila][col].
	 * Luego, usa cada bloque de BloquesDerecha para clonarlo hacia la mitad izquierda.
	 */
	void GenerarLaberintoConPrototype();

	/** Factor de escala: cada celda ? 100 unidades en el mundo */
	static constexpr float Offset = 100.f;


	//void GenerarLaberintoConFlyweight();

	void GenerarLaberintoConFlyweight();

	class UFabricaBloquesFl* Fabrica;

};



