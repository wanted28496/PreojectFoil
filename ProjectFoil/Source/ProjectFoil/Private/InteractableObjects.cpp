// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/InteractableObjects.h"


// Sets default values
AInteractableObjects::AInteractableObjects()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractableObjects::BeginPlay()
{
	Super::BeginPlay();
	
}

int32 AInteractableObjects::aabc_Implementation(int32 InputParameter)
{
	return aabcInternal(InputParameter);
}

int32 AInteractableObjects::aabcInternal(int32 InputParameter)
{
	return 3;
}

void AInteractableObjects::Jgg() {

}

// Called every frame
void AInteractableObjects::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

