// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveRect.h"

// Sets default values
AMoveRect::AMoveRect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	SetRootComponent(Scene);// Scene�� Root Component�� �����.

	StaticMesh->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);// StaticMesh�� ��� ��ǥ�� �������� Scene�� ���δ�. 
	StaticMesh->SetRelativeTransform(FTransform::Identity);// StaticMesh�� Transform�� Identity �⺻������ �����Ѵ�.
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
