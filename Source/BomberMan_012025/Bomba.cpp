// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"
#include "Bloque.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABomba::ABomba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	//RootComponent = MeshComp;
	RootComponent = MallaBloque;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloque(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	if (ObjetoMallaBloque.Succeeded())
	{
		MallaBloque->SetStaticMesh(ObjetoMallaBloque.Object);

		MallaBloque->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

		MallaBloque->SetCollisionProfileName(TEXT("BlockAll"));
	}
    

}

// Called when the game starts or when spawned
void ABomba::BeginPlay()
{
	Super::BeginPlay();

	TiempoRestante = TiempoParaExplotar;
	
}

// Called every frame
void ABomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ActualizarBomba(DeltaTime);

}

void ABomba::ActivarBomba()
{
    // La bomba real se activa inmediatamente al crearse
}

void ABomba::ActualizarBomba(float DeltaTime)
{
    if (bHaExplotado) return;

    TiempoRestante -= DeltaTime;

    if (TiempoRestante <= 0.0f)
    {
        Explotar();
    }
}

void ABomba::Explotar()
{
    bHaExplotado = true;

    FVector Posicion = GetActorLocation();
    float RadioExplosion = 200.0f; // Puedes ajustar esto según el tamaño de tu laberinto

    // Crear un array para almacenar los actores detectados
    TArray<AActor*> ActoresDetectados;

    // Definir el tipo de actores que queremos detectar
    TSubclassOf<AActor> ClaseBloque = ABloque::StaticClass(); // Asegúrate que todos tus bloques heredan de ABloque

    // Buscar todos los actores en un radio
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClaseBloque, ActoresDetectados);

    for (AActor* Actor : ActoresDetectados)
    {
        if (Actor == nullptr) continue;

        float Distancia = FVector::Dist(Actor->GetActorLocation(), Posicion);

        if (Distancia <= RadioExplosion)
        {
            // Puedes hacer un cast si quieres lógica específica por tipo de bloque
            ABloque* Bloque = Cast<ABloque>(Actor);
            if (Bloque && Bloque->EsDestructible())  // método que tú puedes definir
            {
                Bloque->Destroy();
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("¡BOOM! Bomba real explotó y destruyó bloques"));
    Destroy();
}

FVector2D ABomba::GetPosicion() const
{
    return FVector2D(GetActorLocation());
}

