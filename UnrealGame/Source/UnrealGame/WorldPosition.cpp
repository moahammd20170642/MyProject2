// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPosition.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
  
	Super::BeginPlay();
  int32 x = 0;
  FString log = TEXT("Hello from the other side ");
  FString *ptr = &log;
  
  /*UE_LOG(LogTemp, Error, TEXT("my num is %d") , x);

 
  UE_LOG(LogTemp, Error, TEXT("my num is %s"), *log);

  UE_LOG(LogTemp, Error, TEXT("my num is  %s"), **ptr);*/
// ...
  FString name =GetOwner()->GetName();
  UE_LOG(LogTemp, Error, TEXT("This object name is %S"), *name);
  FVector objectPosition = GetOwner()->GetActorLocation();
   
  FString Vposition = objectPosition.ToString();

  UE_LOG(LogTemp, Error, TEXT("My location is %s "), *Vposition);

}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

