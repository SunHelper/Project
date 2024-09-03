// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSetBase.h"
#include "HeroAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class UHeroAttributeSet : public UAttributeSetBase {
	GENERATED_BODY()

public:
	UHeroAttributeSet();	
	//HP
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData HP;
	ATTRIBUTE_ACCESSORS(UHeroAttributeSet, HP);
	//MP
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MP;
	ATTRIBUTE_ACCESSORS(UHeroAttributeSet, MP);
	//攻击速度
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData AttackSpeed;
	ATTRIBUTE_ACCESSORS(UHeroAttributeSet, AttackSpeed);
	//移动速度
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MoveSpeed;
	ATTRIBUTE_ACCESSORS(UHeroAttributeSet, MoveSpeed);
	//经验值
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData EXP;
	ATTRIBUTE_ACCESSORS(UHeroAttributeSet, EXP);
	//拾取范围
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData PickUpRange;
	ATTRIBUTE_ACCESSORS(UHeroAttributeSet, PickUpRange);
};
