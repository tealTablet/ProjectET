// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/ETCharacter.h"
#include "ETAICharacter.generated.h"

class UBehaviorTree;
class UInputComponent;

/**
 * 
 */
UCLASS()
class PROJECTET_API AETAICharacter : public AETCharacter
{
	GENERATED_BODY()
public:
	AETAICharacter();
	UPROPERTY(EditAnywhere, Category = Behavior)
	UBehaviorTree* AIBehaviorTree;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
