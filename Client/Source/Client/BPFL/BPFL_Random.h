// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BPFL_Random.generated.h"
/**
 * 权重项目
 */
USTRUCT(BlueprintType)
struct FWeightItem {
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;
	float Ki;
};

/**
 * 随机库
 */
UCLASS()
class UBPFL_Random : public UBlueprintFunctionLibrary {
	GENERATED_BODY()

public:
	/**
	 * 从ID数组中获得Amount个随机元素（平均概率
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (CompactNodeTitle = "Randoms", Keywords = "Randoms"),
		Category = "BPFL|Random")
	static TArray<FName> RandomElems(TArray<FName> Array, int32 Amount = 1);
	/**
	 * 根据权重数组抽取多个不重复的项目
	 * @param Array 权重数组
	 * @param Amount 抽取数量
	 * @return 抽取结果
	 */
	UFUNCTION(BlueprintCallable, meta = (CompactNodeTitle = "Draw", Keywords = "Draw"),
		Category = "BPFL|Random")
	static TArray<FWeightItem> RandomElemsByWeightItems(TArray<FWeightItem> Array, int32 Amount = 1);
	/**
	 * 洗牌
	 * @param Array ID数组
	 * @return 打乱后的ID数组
	 */
	UFUNCTION(BlueprintCallable, meta = (CompactNodeTitle = "Draw", Keywords = "Draw"),
		Category = "BPFL|Random")
	static TArray<FName> Shuffle(TArray<FName> Array);
	/**
	 * 从Map里概率抽取,N选1
	 * @param Map 格式为 ID:权重
	 * @return 
	 */
	UFUNCTION(BlueprintCallable, meta = (CompactNodeTitle = "Draw", Keywords = "Draw"),
		Category = "BPFL|Random")
	static FName DrawOne(TMap<FName, float> Map);

	/**
	 * 从Map里概率抽取,N选1
	 * @param Map 格式为 Actor类:权重
	 * @return 
	 */
	UFUNCTION(BlueprintCallable, meta = (CompactNodeTitle = "DrawActor", Keywords = "Draw"),
		Category = "BPFL|Random")
	static TSubclassOf<AActor> DrawOneActor(TMap<TSubclassOf<AActor>, float> Map);
	/**
	 * 从Map里概率抽取,N选M
	 * @param Map 格式为 ID:权重
	 * @param Amount 抽取数量
	 * @return 
	 */
	UFUNCTION(BlueprintCallable, meta = (CompactNodeTitle = "Draw", Keywords = "Draw"),
		Category = "BPFL|Random")
	static TArray<FName> DrawSome(TMap<FName, float> Map, int32 Amount);
	/**
	 * 正态分布随机
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BPFL|Random")
	static float NormalDistribution(float Mean, float Std_Dev);
	/**
	 * 屏幕边缘随机点,SideIndex表示是哪个边缘，顺序为上左下右
	 * @param WorldContextObject 
	 * @param Edge 
	 * @param SideIndex 
	 * @return 
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BPFL|Random", meta = (WorldContext = "WorldContextObject"))
	static FVector2D RandomPointScreenEdge(UObject* WorldContextObject, float Edge, int32 SideIndex);
};
