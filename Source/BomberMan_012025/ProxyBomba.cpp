// Fill out your copyright notice in the Description page of Project Settings.


#include "ProxyBomba.h"

// Sets default values
AProxyBomba::AProxyBomba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


    // Crear componente visual
    ProxyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProxyMesh"));
    RootComponent = ProxyMesh;

    // Asignar una esfera básica como visual
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (MeshAsset.Succeeded())
    {
        ProxyMesh->SetStaticMesh(MeshAsset.Object);
        ProxyMesh->SetWorldScale3D(FVector(0.7f)); // Escalar si es necesario
        ProxyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }

    // Asignar color dinámico (verde)
    static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Engine/BasicShapes/BasicShapeMaterial"));
    if (MaterialAsset.Succeeded())
    {
        UMaterialInstanceDynamic* MaterialInstance = UMaterialInstanceDynamic::Create(MaterialAsset.Object, this);
        if (MaterialInstance)
        {
            MaterialInstance->SetVectorParameterValue("Color", FLinearColor::Green);
            ProxyMesh->SetMaterial(0, MaterialInstance);
        }
    }

}

// Called when the game starts or when spawned
void AProxyBomba::BeginPlay()
{
	Super::BeginPlay();

	TiempoRestante = TiempoParaActivar;
	
}

// Called every frame
void AProxyBomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ActualizarBomba(DeltaTime);

}
void AProxyBomba::ActivarBomba()
{
    // El proxy decide cuándo activar la bomba real
    TiempoRestante = TiempoParaActivar;
}

void AProxyBomba::ActualizarBomba(float DeltaTime)
{
    if (bHaExplotado) return;

    if (BombaReal)
    {
        // Delegar a la bomba real si existe
        if (BombaReal->HaExplotado())
        {
            bHaExplotado = true;
            Destroy();
        }
        return;
    }

    // Lógica del proxy antes de crear la bomba real
    TiempoRestante -= DeltaTime;

    if (TiempoRestante <= 0.0f)
    {
        CrearBombaReal();
    }
}

bool AProxyBomba::HaExplotado() const
{
    return bHaExplotado;
}

FVector2D AProxyBomba::GetPosicion() const
{
    return BombaReal ? BombaReal->GetPosicion() : PosicionBomba;
}

void AProxyBomba::ConfigurarBomba(TSubclassOf<ABomba> ClaseBomba, FVector2D Posicion)
{
    ClaseBombaReal = ClaseBomba;
    PosicionBomba = Posicion;
    SetActorLocation(FVector(Posicion.X, Posicion.Y, 0));
}

void AProxyBomba::CrearBombaReal()
{
    if (!ClaseBombaReal) return;

    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = GetOwner();
    SpawnParams.Instigator = GetInstigator();

    BombaReal = GetWorld()->SpawnActor<ABomba>(
        ClaseBombaReal,
        FVector(PosicionBomba.X, PosicionBomba.Y, 0),
        FRotator::ZeroRotator,
        SpawnParams
    );

    if (BombaReal)
    {
        BombaReal->ActivarBomba();
    }
}

