// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include "ProjectET.h"
#include <Components/ActorComponent.h>
#include <ETActorComponent.generated.h>

/** Actor에 포함가능한 재활용가능한 기능
* SceneComponent
* 
* 
*/
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTET_API UETActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UETActorComponent();

	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
