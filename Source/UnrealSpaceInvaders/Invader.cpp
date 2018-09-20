// Fill out your copyright notice in the Description page of Project Settings.

#include "Invader.h"


// Sets default values
AInvader::AInvader()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the Component
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("InvaderMesh");

}

// Called when the game starts or when spawned
void AInvader::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInvader::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

