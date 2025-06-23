// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BloqueFlyweight.h"
#include "BloquePesoLiviano.h"
#include "FabricaBloquesFl.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API UFabricaBloquesFl : public UObject
{
	GENERATED_BODY()

private:
	UStaticMesh* MeshCube;
	UMaterialInterface* MaterialMadera;
	UMaterialInterface* MaterialAcero;
	UMaterialInterface* MaterialLadrillo;
	UMaterialInterface* MaterialConcreto;

	TMap<FString, UBloquePesoLiviano*> BloquesCompartidos;

public:

	UFabricaBloquesFl();
	UBloquePesoLiviano* ObtenerBloque(FString Tipo);
	
};
