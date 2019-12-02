// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickUp.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API APickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickUp();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	/*Return the mesh for the PickUp*/
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return PickUpMesh; }
	/*Return whether or not the PickUp is active*/
	UFUNCTION(FUNC_BlueprintPure,Category = "PickUp")
	bool IsActive();
	/*Allows other classes to safely change whether or not PickUp is active*/
	UFUNCTION(CPF_BlueprintCallable,Category = "PickUp")
	void SetActive(bool NewPickUpState);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	/*True when the PickUp can be used,and false when PickUp is deactivated*/
	bool bIsActive;
private:
	/*Static mesh to represent the PickUp in the level.*/
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "PickUp",meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PickUpMesh;

};
