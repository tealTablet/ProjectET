// Fill out your copyright notice in the Description page of Project Settings.


#include "ETObject.h"


UETObject::UETObject()
{
	PRINT_FUNCTION();
}

void UETObject::PostInitProperties()
{
	Super::PostInitProperties();
	PRINT_FUNCTION();
}

void UETObject::PostReinitProperties()
{
	Super::PostReinitProperties();
	PRINT_FUNCTION();
}

void UETObject::BeginDestroy()
{
	Super::BeginDestroy();
	PRINT_FUNCTION();
}

void UETObject::FinishDestroy()
{
	Super::FinishDestroy();
	PRINT_FUNCTION();
}
