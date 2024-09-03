// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "AttributeSet.h"
#include "GameFramework/Character.h"
#include "CharacterBase.generated.h"

UCLASS()
class CLIENT_API ACharacterBase : public ACharacter, public  IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterBase();
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	//是否使用GAS
	bool bUseGAS = true;
	//AttrSet类列表
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	TArray<TSubclassOf<UAttributeSet>> AttributeSetClasses;
	// Implement IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;		
protected:
	// Called when the game starts or when spawned
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	UAbilitySystemComponent* AbilitySystemComponent;
	virtual void BeginPlay() override;

};
