// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveRect.generated.h"

UENUM(BlueprintType)
enum class EN_MoveType : uint8
{
	MoveRight UMETA(Display = "Right"),
	MoveUp UMETA(Display = "Up"),
	MoveLeft UMETA(Display = "Left"),
	MoveDown UMETA(Display = "Down"),
};
//Enum은 어떤 클래스에 속해 있는 것이 아니기 때문에 Class의 바깥에 선언해야한다 
// 클래스에 속해 있는 것이 아니기 때문에 모든 곳에서 사용이 가능하다 
// MoveRight UMETA(Display = "Right") -> 블루프린트에서 어떻게 보여질 것인지 정해주는 것
//앞의 MoveRight -> C++에서 사용할 이름, 뒤의 Display = Right -> 언리얼에서 어떻게 보여질지 정하는 것 

UCLASS()
class DAY_2_REVIEW_API AMoveRect : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoveRect();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public: 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	USceneComponent* Scene;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(BlueprintReadOnly)
	float LocX; 
	float LocZ;
	EN_MoveType MoveType; //EN_MoveType 변수 생성 

};
