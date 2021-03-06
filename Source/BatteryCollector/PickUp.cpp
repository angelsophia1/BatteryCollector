// Fill out your copyright notice in the Description page of Project Settings.
#include "PickUp.h"
#include "BatteryCollector.h"
#include <Runtime/Engine/Classes/Components/StaticMeshComponent.h>


// Sets default values
APickUp::APickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	//All PickUps start active
	bIsActive = true;
	//Create the static mesh component
	PickUpMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickUpMesh"));
	RootComponent = PickUpMesh;
}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//Return active state
bool APickUp::IsActive() 
{
	return bIsActive;
}
//Change active state
void APickUp::SetActive(bool NewPickUpState)
{
	bIsActive = NewPickUpState;
}

