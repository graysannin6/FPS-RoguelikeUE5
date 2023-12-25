// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ARGameplayInterface.h"
#include "ARItemChest.generated.h"

UCLASS()
class FPSROGUELIKE_API AARItemChest : public AActor, public IARGameplayInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AARItemChest();
	void Interact_Implementation(APawn* InstigatorPawn);

	UPROPERTY(EditAnywhere)
	float TargetPitch;

protected:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> BaseMesh;

	UPROPERTY(BlueprintReadOnly,VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> LidMesh;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
