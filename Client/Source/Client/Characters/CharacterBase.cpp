// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"
#include "AbilitySystemComponent.h"

// Sets default values
ACharacterBase::ACharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;
	if (bUseGAS) {
		//创建ASC组件
		AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	}
}

UAbilitySystemComponent* ACharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	if (bUseGAS) {
		for (auto Element : AttributeSetClasses) {
			UAttributeSet* AttributeSet = NewObject<UAttributeSet>(this, Element);
			AbilitySystemComponent->AddSpawnedAttribute(AttributeSet);
		}
	}
	Super::BeginPlay();
}

