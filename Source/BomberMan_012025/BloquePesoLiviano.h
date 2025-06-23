// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BloquePesoLiviano.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API UBloquePesoLiviano : public UObject
{
	GENERATED_BODY()

public:
    UStaticMesh* MeshCompartido;
    UMaterialInterface* MaterialCompartido;

    void Inicializar(UStaticMesh* Mesh, UMaterialInterface* Material)
    {
        MeshCompartido = Mesh;
        MaterialCompartido = Material;
    }

    void AplicarA(UStaticMeshComponent* Malla)
    {
        if (MeshCompartido)
        {
            Malla->SetStaticMesh(MeshCompartido);
        }

        if (MaterialCompartido)
        {
            Malla->SetMaterial(0, MaterialCompartido);
        }
    }
	
};
