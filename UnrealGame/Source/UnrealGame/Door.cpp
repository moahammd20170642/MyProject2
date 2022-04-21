// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"

// Sets default values for this component's properties
UDoor::UDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDoor::BeginPlay()
{
	Super::BeginPlay();
  AActor  * owner = GetOwner();
  FRotator NewRotation = FRotator(0.0f, 90.0f,0.0f);

 FVector myLocation= owner->GetActorLocation();
 FString string = myLocation.ToString();

 UE_LOG(LogTemp, Error, TEXT("my location is : %s "), *string);
  owner->SetActorRotation(NewRotation);
  UE_LOG(LogTemp, Error, TEXT("my location is : %s "), *string);

	// ..
	
}


// Called every frame
void UDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

