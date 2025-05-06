// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorTriggerBox_usingC.h"
#include "DrawDebugHelpers.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1,1.5,FColor::Red, text)
#define printf(text, fstring) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,1.5,FColor::Red, FString::Printf(TEXT(text), fstring))

ADoorTriggerBox_usingC::ADoorTriggerBox_usingC()
{
	OnActorBeginOverlap.AddDynamic(this, &ADoorTriggerBox_usingC::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &ADoorTriggerBox_usingC::OnOverlapEnd);
}

void ADoorTriggerBox_usingC::BeginPlay()
{
	Super::BeginPlay();

	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Purple, true, -1, 0, 5);
}

void ADoorTriggerBox_usingC::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if (OtherActor && (OtherActor != this))
	{
		print("Overlap begin");
		print(TargetActor->GetName());

	}
}
void ADoorTriggerBox_usingC::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if (OtherActor && (OtherActor != this))
	{
		print("Overlap end");

	}
}