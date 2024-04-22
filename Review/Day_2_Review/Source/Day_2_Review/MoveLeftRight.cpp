// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveLeftRight.h"

// Sets default values
AMoveLeftRight::AMoveLeftRight():IsMoveRight(true), LocX(0) //IsMoveRight의 기본값: True, LocX의 기본값 0으로 설정 
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	// Scene : 생성해서 넣을 변수
	// = : 대입 연산자(오른쪽에 있는 것을 왼쪽에 넣는다)
	// CreateDefaultSubobject : 생성 도구
	// USceneComponent : 생성할 클래스 지정
	// TEXT("Scene") : 블루프린트에서 보여질 이름 
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	SetRootComponent(Scene); // Scene을 루트로 만들기 위한 코드 
	// ;와 괄호는 매우 중요하다! 
	StaticMesh->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform); //스태틱 메시를 상대좌표계 기준으로 Scene에 붙이기
	StaticMesh->SetRelativeTransform(FTransform::Identity);//스태틱 메쉬를 보면 위치, 회전의 기본값이 전부 0이고 스케일 기본값이 1인 것을 세팅(StaticMesh에 Transform을 Identity 기본값으로 설정 )
	//기본값이 아닌 숫자를 넣고 싶을 때 사용하는 코드(아래)
	// StaticMesh->SetRelativeTransform(FTransform(FRotaor(1.0f, 1.0f, 1.0f), FVector(1.0f, 1.0f, 1.0f), FVector(1.0f, 1.0f, 1.0f)));
	//FTransform, FVector... 등은 실제 C++에서 사용하는 것이 아닌 언리얼에서 독자적으로 만들어놓은 변수형태 
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
	// Tick 이벤트에서 시작하기 때문에 Tick 이벤트 괄호 안에서 작업해야한다 

	if (IsMoveRight)
	{
		//True, Branch의 True 실행선에 연결된 것들은 전부 여기 Ture 괄호 안쪽에 들어가야 함! 
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

