// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h" // 기본적인 것만 들어 있어서 빠르게 컴파일 할 수 있는 용도, 즉, 기본적인 라이브러리만 등록할 때 사용한다 
#include "GameFramework/Actor.h" // 엑터라는 헤더가 등록되어 있는 것 
#include "MoveLeftRight.generated.h" // 클래스를 생성할 때는 반드시 이 제너레이트 인클루드 코드가 들어가 있어야 한다 
// 제너레이트 코드는 무조건 제일 아래쪽에 위치해 있어야 한다
// 뭔가 추가하고 싶다면 무조건 제너레이트 위쪽에 해야한다  
// 언리얼에서 자주 사용하는 라이브러리들이 헤더 파일에 등록되어 있다 

UCLASS()
class DAY_2_REVIEW_API AMoveLeftRight : public AActor
	// API 해당 프로젝트의 모듈에 추가하기 위해서 사용 
{
	GENERATED_BODY() // 이것도 언리얼의 규칙 중 하나 이게 있어야 언리얼 클래스 코드가 생성된다 

		// 코드 필수 규칙: 제너레이트, 유클래스 APi, 바디 
	
public:	
	// Sets default values for this actor's properties
	AMoveLeftRight(); // 이것은 생성자 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override; // 이벤트 , 이 액터가 시작읋 했을 떄 호출되는 이벤트 
	//버추얼 함수들은 상속받아 오는 것들 (ㅊ++을 알고 있으면 이애하기 쉬울 거임) 

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// 이것도 이벤트, 특정 시간마다 게속 호출되는 함수 

public: 
	UPROPERTY(BlueprintReadWrite)
	USceneComponent* Scene;

};
