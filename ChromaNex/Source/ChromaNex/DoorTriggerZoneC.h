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

	// Make the TriggerBox visible to Blueprints and the editor
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Trigger")
	class UBoxComponent* Box;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Components") class UBoxComponent* BoxComp;
	UPROPERTY(EditDefaultsOnly, Category = "Components") class UStaticMeshComponent* BaseMesh;

	UFUNCTION()
	void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
