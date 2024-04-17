// Fill out your copyright notice in the Description page of Project Settings.


#include "Move_Left_Right.h"

// Sets default values
AMove_Left_Right::AMove_Left_Right() // 앞의 Move_Left_Right는 클래스의 이름 
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Scene : 생성해서 넣을 변수
	// = : 대입 연산자(오른쪽에 있는 걸 왼쪽에 넣는다)
	//CreateDefaultSubobject : 생성 도구
	// USceneComponent : 생성할 클래스 지정 
	// TEXT("Scene") : 블루프린트에서 보여질 이름
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
}

// Called when the game starts or when spawned
void AMove_Left_Right::BeginPlay()
//AMove_Left_Right의 Beginplay 함수 
{
	Super::BeginPlay();
	
}

// Called every frame
void AMove_Left_Right::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

