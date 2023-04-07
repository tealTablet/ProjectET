// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"
#include <Components/ActorComponent.h>
#include <ETActorComponent.generated.h>


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTET_API UETActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UETActorComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
