// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"
#include <GameFramework/Pawn.h>
#include <ETPawn.generated.h>

UCLASS()
class PROJECTET_API AETPawn : public APawn
{
	GENERATED_BODY()

public:
	AETPawn();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
