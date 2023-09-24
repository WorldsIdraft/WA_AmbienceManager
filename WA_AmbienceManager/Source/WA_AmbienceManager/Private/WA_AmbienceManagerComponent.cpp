// AssetsBrothers 2023


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

		}
}


// Called every frame
void UWA_AmbienceManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}




void UWA_AmbienceManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UWA_AmbienceManagerComponent, Ref_OwnerCharacter);
}
