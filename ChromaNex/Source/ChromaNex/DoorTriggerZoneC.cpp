#include "DoorTriggerZoneC.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/Engine.h"

ADoorTriggerZoneC::ADoorTriggerZoneC()
{
	PrimaryActorTick.bCanEverTick = true;

	// Create and set a visible root component
	USceneComponent* SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	// Create the Trigger Box
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	Box->SetupAttachment(RootComponent);

	// Configure collision
	Box->SetCollisionProfileName(TEXT("Trigger"));
	Box->SetBoxExtent(FVector(100.f, 100.f, 100.f));
	Box->SetHiddenInGame(false); // Show during play
	Box->bVisualizeComponent = true; // Optional for debugging

	// Bind event
	Box->OnComponentBeginOverlap.AddDynamic(this, &ADoorTriggerZoneC::OnBoxBeginOverlap);
}

void ADoorTriggerZoneC::BeginPlay()
{
	Super::BeginPlay();
}

void ADoorTriggerZoneC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADoorTriggerZoneC::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		UE_LOG(LogTemp, Warning, TEXT("Trigger Entered by: %s"), *OtherActor->GetName());
	}
}
