// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveRect.h"

// Sets default values
AMoveRect::AMoveRect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	SetRootComponent(Scene);// Scene을 Root Component로 만든다.

	StaticMesh->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);// StaticMesh를 상대 좌표계 기준으로 Scene에 붙인다. 
	StaticMesh->SetRelativeTransform(FTransform::Identity);// StaticMesh에 Transform을 Identity 기본값으로 설정한다.
}

// Called when the game starts or when spawned
void AMoveRect::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoveRect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

