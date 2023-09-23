#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"

#include "SkillStruct.h"

#include "MainStruct.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FMainStruct : public FTableRowBase
{
public:
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int HP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CoolTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Speed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UTexture* Image;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Mesh;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//		TSubclassOf<USkillComp>BaseSkillComp;


};