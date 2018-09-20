// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Invader.generated.h"

UCLASS()
class UNREALSPACEINVADERS_API AInvader : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInvader();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Components
	UPROPERTY(EditAnyWhere)
	UStaticMeshComponent* Mesh;

	// Variables
	UPROPERTY(EditAnyWhere)
	UINT scoreWhenKilled = 10.0f;

	// Declare Events
	// DECLARE_EVENT_OneParam(AInvader, Died, UINT)

private:

	
	
};
