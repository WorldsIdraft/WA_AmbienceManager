#include "WA_AmbienceManagerComponent.h"

// Sets default values for this component's properties
UWA_AmbienceManagerComponent::UWA_AmbienceManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UWA_AmbienceManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	if (GetOwner()->IsA(ACharacter::StaticClass())) {

		//Get Character Reference
		Ref_OwnerCharacter = Cast<ACharacter>(GetOwner());
		int intTimeDelay = UKismetMathLibrary::RandomIntegerInRange(5, 125);
		float delayTimer = UKismetMathLibrary::Conv_IntToFloat(intTimeDelay);
		UKismetSystemLibrary::Delay(this, delayTimer, FLatentActionInfo());
		// Spawn the sound.
		UGameplayStatics::SpawnSound2D(this, biome1IslandCUE);

		}
}


// Called every frame
void UWA_AmbienceManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}

static UAudioComponent* SpawnSound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy)
{
	// Spawn the sound.
	return UGameplayStatics::SpawnSound2D(WorldContextObject, Sound, VolumeMultiplier, PitchMultiplier, StartTime, ConcurrencySettings, bPersistAcrossLevelTransition, bAutoDestroy);
}


void UWA_AmbienceManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UWA_AmbienceManagerComponent, Ref_OwnerCharacter);
}
