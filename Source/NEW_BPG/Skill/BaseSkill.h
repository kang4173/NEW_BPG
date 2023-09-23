// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "NEW_BPG/SkillStruct.h"

#include "BaseSkill.generated.h"


class ABaseChar;

UCLASS(Blueprintable, BlueprintType)
class NEW_BPG_API UBaseSkill : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBaseSkill();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UFUNCTION(BlueprintCallable)
		virtual void Tbagging() {};

	UFUNCTION(BlueprintCallable)
		virtual void ActiveSkill() {};
	UFUNCTION(BlueprintCallable)
		virtual void PassiveSkill() {};
	UFUNCTION(BlueprintCallable)
		virtual void CharacterCall(ACharacter* OwnChar) {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FSkillStruct SKillST;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMesh* Mesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ABaseChar* BaseChar;
};
