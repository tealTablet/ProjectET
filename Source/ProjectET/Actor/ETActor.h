// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"
#include <GameFramework/Actor.h>
#include "ETActor.generated.h"

UCLASS()
class PROJECTET_API AETActor : public AActor
{
	GENERATED_BODY()

public:
	AETActor();
	
	virtual void OnConstruction(const FTransform& Transform) override;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual void Destroyed() override;

	
};
