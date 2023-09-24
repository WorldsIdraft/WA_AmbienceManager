#pragma once

#include "CoreMinimal.h"
#include "Math/Vector.h"
#include "Engine/World.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/ActorComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "WA_AmbienceManagerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WA_AMBIENCEMANAGER_API UWA_AmbienceManagerComponent : public UActorComponent
{
	GENERATED_BODY()
	
private:

	UPROPERTY()
		ACharacter* Ref_OwnerCharacter;
		

public:

	//#####  ENUMS  #####


	//The Type of environment the player is in.
		enum class EAmbienceType : uint8
		{
			None, //0
			Biome1Island,
			Biome2Island,
			Biome3Island,
			Biome4Island,
			WindRift,
			StormWall,
			SandStorm,
		};

	//#####  Variables  #####

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WA Ambience Music")
		bool IsDebug = false;
	

	//Sound References


	//CUE Reference of the Biome1Island Type Environment
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WA Ambience Music CUE")
		USoundBase* biome1IslandCUE;

	//CUE Reference of the Biome2Island Type Environment
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WA Ambience Music CUE")
		USoundBase* biome2IslandCUE;

	//CUE Reference of the Biome3Island Type Environment
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WA Ambience Music CUE")
		USoundBase* biome3IslandCUE;

	//CUE Reference of the Biome4Island Type Environment
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WA Ambience Music CUE")
		USoundBase* biome4IslandCUE;

	//CUE Reference of the WindRift Type Environment
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WA Ambience Music CUE")
		USoundBase* windRiftCUE;

	//CUE Reference of the StormWall Type Environment
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WA Ambience Music CUE")
		USoundBase* stormWallCUE;
	
	//CUE Reference of the SandStorm Type Environment
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WA Ambience Music CUE")
		USoundBase* sandStormCUE;


public:	
	// Sets default values for this component's properties
	UWA_AmbienceManagerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;
		
};
