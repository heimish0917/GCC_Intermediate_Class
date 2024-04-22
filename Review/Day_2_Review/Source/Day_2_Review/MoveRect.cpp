// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveRect.h"

// Sets default values
AMoveRect::AMoveRect():LocX(0), LocZ(0), MoveType(EN_MoveType::MoveRight)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	SetRootComponent(Scene); 
	StaticMesh->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform); 
	StaticMesh->SetRelativeTransform(FTransform::Identity);

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

	switch (MoveType)
	{
	case EN_MoveType::MoveRight:
	{
		//Right
		LocX = LocX + 1; //LocX += 1;
		StaticMesh->SetRelativeLocation(FVector(LocX, 0, 0));

		FVector location = StaticMesh->GetRelativeLocation();
		if (location.X > 200)
		{
			MoveType = EN_MoveType::MoveUp;
		}
	}
		break; //break 전까지 각 코드를 입력하면 된다
	case EN_MoveType::MoveUp:
	{
		//Up
		LocZ = LocZ + 1; //LocZ += 1;
		StaticMesh->SetRelativeLocation(FVector(LocX, 0, LocZ));

		FVector location = StaticMesh->GetRelativeLocation();
		if (location.Z > 200)
		{
			MoveType = EN_MoveType::MoveLeft;
		}
	}
		break;
	case EN_MoveType::MoveLeft:
	{
		//Left
		LocX = LocX - 1; //LocX -= 1;
		StaticMesh->SetRelativeLocation(FVector(LocX, 0, LocZ));

		FVector location = StaticMesh->GetRelativeLocation();
		if (location.X < 0)
		{
			MoveType = EN_MoveType::MoveDown;
		}
	}
		break;
	case EN_MoveType::MoveDown:
	{
		//Down
		LocZ = LocZ - 1; //LocZ -= 1;
		StaticMesh->SetRelativeLocation(FVector(LocX, 0, LocZ));

		FVector location = StaticMesh->GetRelativeLocation();
		if (location.Z < 0)
		{
			MoveType = EN_MoveType::MoveRight;
		}
		
	}

		break;
	default:
		break;
	}

}

