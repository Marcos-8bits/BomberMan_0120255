// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloquePrototype.h"
#include "BloquePesoLiviano.h"
#include "FactoryMethodBloque.h"
#include "Bloque.generated.h"

class UStaticMeshComponent;

UCLASS()
class BOMBERMAN_012025_API ABloque : public AActor, public IBloquePrototype,public IFactoryMethodBloque
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABloque();

	virtual ABloque* CrearBloque(UWorld* Mundo, FVector Posicion) override;

	virtual AActor* Clonar() const;

	virtual bool EsDestructible() const { return false; }

	// Referencia al flyweight (datos compartidos)
	UPROPERTY()
	UBloquePesoLiviano* Flyweight;

	// Inicializar con flyweight
	void Inicializar(UBloquePesoLiviano* NuevoFlyweight);

protected:
	// Componente de malla est�tica
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	UStaticMeshComponent* MallaBloque;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float FloatSpeed;
	float RotationSpeed;
	bool bPuedeMoverse;
	bool bPuedeRotar;
	bool bPuedeDestruirse;
	bool bPuedeExplotar;
	bool bPuedeProtegerse;

	bool puedeClonarse = true;

	//virtual void Protegerse() = 0;

	//virtual ABloque* CrearBloque(FString tipoBloque)
		//PURE_VIRTUAL(ABloque::CrearBloque, return nullptr;);

};