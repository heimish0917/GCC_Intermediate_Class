// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveLeftRight.h"

// Sets default values
AMoveLeftRight::AMoveLeftRight():IsMoveRight(true), LocX(0) //IsMoveRight�� �⺻��: True, LocX�� �⺻�� 0���� ���� 
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	// Scene : �����ؼ� ���� ����
	// = : ���� ������(�����ʿ� �ִ� ���� ���ʿ� �ִ´�)
	// CreateDefaultSubobject : ���� ����
	// USceneComponent : ������ Ŭ���� ����
	// TEXT("Scene") : �������Ʈ���� ������ �̸� 
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	SetRootComponent(Scene); // Scene�� ��Ʈ�� ����� ���� �ڵ� 
	// ;�� ��ȣ�� �ſ� �߿��ϴ�! 
	StaticMesh->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform); //����ƽ �޽ø� �����ǥ�� �������� Scene�� ���̱�
	StaticMesh->SetRelativeTransform(FTransform::Identity);//����ƽ �޽��� ���� ��ġ, ȸ���� �⺻���� ���� 0�̰� ������ �⺻���� 1�� ���� ����(StaticMesh�� Transform�� Identity �⺻������ ���� )
	//�⺻���� �ƴ� ���ڸ� �ְ� ���� �� ����ϴ� �ڵ�(�Ʒ�)
	// StaticMesh->SetRelativeTransform(FTransform(FRotaor(1.0f, 1.0f, 1.0f), FVector(1.0f, 1.0f, 1.0f), FVector(1.0f, 1.0f, 1.0f)));
	//FTransform, FVector... ���� ���� C++���� ����ϴ� ���� �ƴ� �𸮾󿡼� ���������� �������� �������� 
}

// Called when the game starts or when spawned
void AMoveLeftRight::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoveLeftRight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Tick �̺�Ʈ���� �����ϱ� ������ Tick �̺�Ʈ ��ȣ �ȿ��� �۾��ؾ��Ѵ� 

	if (IsMoveRight)
	{
		//True, Branch�� True ���༱�� ����� �͵��� ���� ���� Ture ��ȣ ���ʿ� ���� ��! 
		LocX = LocX + 1; // LocX += 1; 
		
		StaticMesh->SetRelativeLocation(FVector(LocX, 0, 0));

		if (StaticMesh->GetRelativeLocation().X > 200)
		{
			IsMoveRight = false;
		} 
	}
	else
	{
		//False 
		LocX = LocX - 1; // LocX -= 1; 

		StaticMesh->SetRelativeLocation(FVector(LocX, 0, 0));

		if (StaticMesh->GetRelativeLocation().X < 0)
		{
			IsMoveRight = true;
		}
	}

}

