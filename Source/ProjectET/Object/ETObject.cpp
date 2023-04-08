// Fill out your copyright notice in the Description page of Project Settings.


#include "ETObject.h"


UETObject::UETObject()
{
	PRINT_FUNCTION();
	//SubObject 멤버객체
	//CreateDefaultSubobject<UETObject>(L"123");//(O) 
	//CreateDefaultSubobject<UETObject>(TEXT("UETObject"));(X) 이미 생성된 오브젝트와 같은 이름으로 생성하면 안된다.
}

void UETObject::PostInitProperties()
{
	Super::PostInitProperties();
	PRINT_FUNCTION();
	//NewObject<UETObject>(GetTransientPackage());
	//NewObject<UETObject>(GetWorld());
	//NewObject<UETObject>(GetWorld()->GetLevel(0));
	//NewObject<UETObject>(this);
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
