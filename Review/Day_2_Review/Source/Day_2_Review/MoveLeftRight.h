// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h" // �⺻���� �͸� ��� �־ ������ ������ �� �� �ִ� �뵵, ��, �⺻���� ���̺귯���� ����� �� ����Ѵ� 
#include "GameFramework/Actor.h" // ���Ͷ�� ����� ��ϵǾ� �ִ� �� 
#include "MoveLeftRight.generated.h" // Ŭ������ ������ ���� �ݵ�� �� ���ʷ���Ʈ ��Ŭ��� �ڵ尡 �� �־�� �Ѵ� 
// ���ʷ���Ʈ �ڵ�� ������ ���� �Ʒ��ʿ� ��ġ�� �־�� �Ѵ�
// ���� �߰��ϰ� �ʹٸ� ������ ���ʷ���Ʈ ���ʿ� �ؾ��Ѵ�  
// �𸮾󿡼� ���� ����ϴ� ���̺귯������ ��� ���Ͽ� ��ϵǾ� �ִ� 

UCLASS()
class DAY_2_REVIEW_API AMoveLeftRight : public AActor
	// API �ش� ������Ʈ�� ��⿡ �߰��ϱ� ���ؼ� ��� 
{
	GENERATED_BODY() // �̰͵� �𸮾��� ��Ģ �� �ϳ� �̰� �־�� �𸮾� Ŭ���� �ڵ尡 �����ȴ� 

		// �ڵ� �ʼ� ��Ģ: ���ʷ���Ʈ, ��Ŭ���� APi, �ٵ� 
	
public:	
	// Sets default values for this actor's properties
	AMoveLeftRight(); // �̰��� ������ 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override; // �̺�Ʈ , �� ���Ͱ� ���۟� ���� �� ȣ��Ǵ� �̺�Ʈ 
	//���߾� �Լ����� ��ӹ޾� ���� �͵� (��++�� �˰� ������ �̾��ϱ� ���� ����) 

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// �̰͵� �̺�Ʈ, Ư�� �ð����� �Լ� ȣ��Ǵ� �Լ� 

public: 
	UPROPERTY(BlueprintReadWrite)
	USceneComponent* Scene;

};
