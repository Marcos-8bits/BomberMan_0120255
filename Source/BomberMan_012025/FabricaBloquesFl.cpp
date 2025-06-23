// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBloquesFl.h"


UFabricaBloquesFl::UFabricaBloquesFl()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
    if (MeshAsset.Succeeded())
    {
        MeshCube = MeshAsset.Object;
    }

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaderaMat(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Wood_Oak.M_Wood_Oak'"));
    if (MaderaMat.Succeeded())
    {
        MaterialMadera = MaderaMat.Object;
    }

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> AceroMat(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));
    if (AceroMat.Succeeded())
    {
        MaterialAcero = AceroMat.Object;
    }

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> LadrilloMat(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
    if (LadrilloMat.Succeeded())
    {
        MaterialLadrillo = LadrilloMat.Object;
    }
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> ConcretoMat(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Concrete_Tiles.M_Concrete_Tiles'"));
    if (ConcretoMat.Succeeded())
    {
        MaterialConcreto = ConcretoMat.Object;
    }
}

UBloquePesoLiviano* UFabricaBloquesFl::ObtenerBloque(FString Tipo)
{
    if (BloquesCompartidos.Contains(Tipo))
    {
        return BloquesCompartidos[Tipo];
    }

    UBloquePesoLiviano* Nuevo = NewObject<UBloquePesoLiviano>(this);

    UStaticMesh* Mesh = nullptr;
    UMaterialInterface* Material = nullptr;

    if (Tipo == "Madera")
    {
        Mesh = MeshCube;
        Material = MaterialMadera;
    }
    else if (Tipo == "Acero")
    {
        Mesh = MeshCube;
        Material = MaterialAcero;
    }
    else if (Tipo == "Ladrillo")
    {
        Mesh = MeshCube;
        Material = MaterialLadrillo;
    }
    else if (Tipo == "Concreto")
    {
        Mesh = MeshCube;
        Material = MaterialConcreto;
    }

    Nuevo->Inicializar(Mesh, Material);
    BloquesCompartidos.Add(Tipo, Nuevo);
    return Nuevo;
}
