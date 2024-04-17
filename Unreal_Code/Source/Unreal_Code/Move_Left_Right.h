// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
// Ex) 1������ 10���� ����� �ִ�, �� ������� ���� CoreMinimal�� ���ٰ� ��������
// 1���� CoreMiniaml�� ����, 2���� CoreMinimal�� ����ϰ�...�̷��� ����ϰ� �Ǹ� �� ������ �����Ѵ�
// ��, �ߺ��Ǵ� ���� �ѹ��� ǥ���ϱ� ���ؼ� ����ϴ� ���� Pragma Once�̴� 

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Move_Left_Right.generated.h" // Unreal Class ���̺귯�� ���� 
// Generated�� include ���� �������� ���־�� �Ѵ� 

UCLASS() // Unreal Ŭ���� �ɼ� �Է� 
class UNREAL_CODE_API/*��� API �̸�*/ AMove_Left_Right : public AActor
{
	GENERATED_BODY() // Unreal �ڵ� ���� ó�� 
	
public:	
	// Sets default values for this actor's properties
	AMove_Left_Right(); // Ŭ������ ������ �� ���� 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public: //Public: ��� ���� ����, Protected: ��� ���迡���� ���� ����, Private: ��� ���� X
	UPROPERTY(BlueprintReadWrite) //BlueprintReadWrite: �������Ʈ�� �аų� �� �� �ִ�
	USceneComponent* Scene; //Ŭ�����϶��� *�� �ٿ��ش� *�̸�
//SceneComponent�� ������� ����, ������ ������ �۾��� ���ϴϱ� �۾��� �ϱ����ؼ� ���� �����̴� 
// �� Scene�̶�� �̸��� ������ ����ٰ� ����..?
// ���� ������ ������ ���¶� ������ �ۿ� ���� 
// �� ���� ä��� ���ؼ��� �����ڿ��� �ڵ带 �Է����ش�(CPP���� )
	UPROPERTY(BlueprintReadWrite)
	UStaticMeshComponent* StaticMesh;
};


