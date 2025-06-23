// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IProxyBomba.h"
#include "Bomba.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABomba : public AActor, public IIProxyBomba
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABomba();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ActivarBomba() override;
	virtual void ActualizarBomba(float DeltaTime) override;
	virtual bool HaExplotado() const override { return bHaExplotado; };
	virtual FVector2D GetPosicion() const override;

private:
	UPROPERTY(EditDefaultsOnly)
	float TiempoParaExplotar = 3.0f;

	float TiempoRestante;
	bool bHaExplotado = false;

	void Explotar();

protected:
	// Componente de malla est?tica
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	UStaticMeshComponent* MallaBloque;


};
