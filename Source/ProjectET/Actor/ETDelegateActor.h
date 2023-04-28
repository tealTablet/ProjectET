// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"
#include <GameFramework/Actor.h>
#include "ETDelegateActor.generated.h"

DECLARE_DELEGATE(FOnExampleDelegate)
DECLARE_DELEGATE_OneParam(FOnExampleOnParamDelegate, int32)
//DECLARE_MULTICAST_DELEGATE();
//DECLARE_DYNAMIC_DELEGATE();
//DECLARE_MULTICAST_DELEGATE();

UCLASS()
class PROJECTET_API AETDelegateActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AETDelegateActor() {}


	FOnExampleDelegate OnExample;

	UFUNCTION(BlueprintCallable)
	virtual void HandleExampleEvent() { OnExample.ExecuteIfBound(); }
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) { HandleExampleEvent(); }

	DECLARE_EVENT(AETDelegateActor, FOnExampleEvent);
	DECLARE_EVENT_OneParam(AETDelegateActor, FOnExampleOnParamEvent, int32);

	FOnExampleEvent OnExampleEvent;
	FOnExampleOnParamEvent OnExampleOneParamEvent;
};
