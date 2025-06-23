#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IProxyBomba.h"
#include "Bomba.h"
#include "ProxyBomba.generated.h"

UCLASS()
class BOMBERMAN_012025_API AProxyBomba : public AActor, public IIProxyBomba
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProxyBomba();

	UStaticMeshComponent* ProxyMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Implementación de IBombaInterface
	virtual void ActivarBomba() override;
	virtual void ActualizarBomba(float DeltaTime) override;
	virtual bool HaExplotado() const override;
	virtual FVector2D GetPosicion() const override;

	UFUNCTION(BlueprintCallable)
	void ConfigurarBomba(TSubclassOf<ABomba> ClaseBombaReal, FVector2D Posicion);

private:
	UPROPERTY()
	ABomba* BombaReal = nullptr;

	bool bHaExplotado = false;
	float TiempoParaActivar = 1.0f; // Tiempo antes de crear la bomba real
	float TiempoRestante;

	TSubclassOf<ABomba> ClaseBombaReal;
	FVector2D PosicionBomba;

	void CrearBombaReal();

};
