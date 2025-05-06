#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoorTriggerZoneC.generated.h"

UCLASS()
class CHROMANEX_API ADoorTriggerZoneC : public AActor
{
	GENERATED_BODY()

public:
	ADoorTriggerZoneC();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;


private:

};
