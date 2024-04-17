// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
// Ex) 1번부터 10번의 사람이 있다, 이 사람들이 전부 CoreMinimal을 쓴다고 가정하자
// 1번도 CoreMiniaml을 쓰고, 2번도 CoreMinimal을 사용하고...이렇게 계속하게 되면 좀 낭비라고 생각한다
// 즉, 중복되는 것을 한번만 표기하기 위해서 사용하는 것이 Pragma Once이다 

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Move_Left_Right.generated.h" // Unreal Class 라이브러리 생성 
// Generated는 include 제일 마지막에 해주어야 한다 

UCLASS() // Unreal 클래스 옵션 입력 
class UNREAL_CODE_API/*모듈 API 이름*/ AMove_Left_Right : public AActor
{
	GENERATED_BODY() // Unreal 코드 생성 처리 
	
public:	
	// Sets default values for this actor's properties
	AMove_Left_Right(); // 클래스가 생성될 때 실행 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public: //Public: 모두 접근 가능, Protected: 상속 관계에서는 접근 가능, Private: 모두 접근 X
	UPROPERTY(BlueprintReadWrite) //BlueprintReadWrite: 블루프린트를 읽거나 쓸 수 있다
	USceneComponent* Scene; //클래스일때는 *를 붙여준다 *이름
//SceneComponent는 변수라고 생각, 변수가 없으면 작업을 못하니까 작업을 하기위해서 만든 변수이다 
// 즉 Scene이라는 이름의 변수를 만든다고 생각..?
// 지금 변수만 선언한 상태라 껍데기 밖에 없다 
// 빈 속을 채우기 위해서는 생성자에서 코드를 입력해준다(CPP에서 )
	UPROPERTY(BlueprintReadWrite)
	UStaticMeshComponent* StaticMesh;
};


