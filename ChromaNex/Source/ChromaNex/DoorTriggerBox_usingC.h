// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "DoorTriggerBox_usingC.generated.h"

/**
 * 
 */
UCLASS()
class CHROMANEX_API ADoorTriggerBox_usingC : public ATriggerBox
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;

public:
	ADoorTriggerBox_usingC();

	UFUNCTION()
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
	void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
};
