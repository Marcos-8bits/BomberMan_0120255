#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PauseCommandInvoker.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGamePausedSignature, bool, bIsPaused);

UCLASS()
class BOMBERMAN_012025_API APauseCommandInvoker : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APauseCommandInvoker();

	UFUNCTION(BlueprintCallable, Category = "Pause")
	void TogglePause();

	UPROPERTY(BlueprintAssignable, Category = "Pause")
	FOnGamePausedSignature OnGamePaused;

private:

	bool bIsGamePaused;

};
