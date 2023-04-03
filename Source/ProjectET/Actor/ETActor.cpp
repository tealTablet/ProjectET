// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/ETActor.h"


AETActor::AETActor()
{
	PrimaryActorTick.bCanEverTick = true;
	PRINT_FUNCTION();
}

void AETActor::OnConstruction(const FTransform& Transform)
{	
	Super::OnConstruction(Transform);
	PRINT_FUNCTION();
}


void AETActor::BeginPlay()
{
	Super::BeginPlay(); 
	PRINT_FUNCTION();
}


void AETActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AETActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	PRINT_FUNCTION();
}


void AETActor::Destroyed()
{
	Super::Destroyed();
	PRINT_FUNCTION();
}

