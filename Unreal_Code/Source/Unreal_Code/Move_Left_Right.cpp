// Fill out your copyright notice in the Description page of Project Settings.


#include "Move_Left_Right.h"

// Sets default values
AMove_Left_Right::AMove_Left_Right() // ���� Move_Left_Right�� Ŭ������ �̸� 
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Scene : �����ؼ� ���� ����
	// = : ���� ������(�����ʿ� �ִ� �� ���ʿ� �ִ´�)
	//CreateDefaultSubobject : ���� ����
	// USceneComponent : ������ Ŭ���� ���� 
	// TEXT("Scene") : �������Ʈ���� ������ �̸�
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
}

// Called when the game starts or when spawned
void AMove_Left_Right::BeginPlay()
//AMove_Left_Right�� Beginplay �Լ� 
{
	Super::BeginPlay();
	
}

// Called every frame
void AMove_Left_Right::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

