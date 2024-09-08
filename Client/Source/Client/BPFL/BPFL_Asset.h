// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoreMinimal.h"
#include "BPFL_Asset.generated.h"

/**
 * 
 */
UCLASS()
class UBPFL_Asset : public UBlueprintFunctionLibrary {
	GENERATED_BODY()

public:
	//加载Texture2D
	UFUNCTION(BlueprintCallable, Category = "Asset Loading")
	static UTexture2D* LoadTexture2D(const FString& Path);
	//加载材质
	UFUNCTION(BlueprintCallable, Category = "Asset Loading")
	static UMaterial* LoadMaterial(const FString& Path);
	//加载静态网格体
	UFUNCTION(BlueprintCallable, Category = "Asset Loading")
	static UStaticMesh* LoadStaticMesh(const FString& Path);
	//加载骨架网格体
	UFUNCTION(BlueprintCallable, Category = "Asset Loading")
	static USkeletalMesh* LoadSkeletalMesh(const FString& Path);
	//加载Actor类
	UFUNCTION(BlueprintCallable, Category = "Asset Loading")
	static TSubclassOf<AActor> LoadActorClass(const FString& Path);
	//加载动画类
	UFUNCTION(BlueprintCallable, Category = "Asset Loading")
	static TSubclassOf<UAnimInstance> LoadAnimClass(const FString& Path);
};
