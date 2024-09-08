// Fill out your copyright notice in the Description page of Project Settings.

#include "BPFL_Random.h"

TArray<FName> UBPFL_Random::RandomElems(TArray<FName> Array, int32 Amount) {
	if (Array.Num() <= Amount) {
		return Array;
	}
	TArray<FName> NewArray;
	for (int32 i = 0; i < Amount; i++) {
		const int32 Index = FMath::RandRange(0, Array.Num() - 1);
		NewArray.Add(Array[Index]);
		Array.RemoveAt(Index);
	}
	return NewArray;
}

TArray<FWeightItem> UBPFL_Random::RandomElemsByWeightItems(TArray<FWeightItem> Array, int32 Amount) {
	TArray<FWeightItem> NewArr;
	for (auto& Elem : Array) {
		if (Elem.Weight == 0.f) {
			continue;
		}
		Elem.Ki = pow(FMath::FRand(), 1 / Elem.Weight);
		//UE_LOG(LogTemp, Warning, TEXT("抽奖权重 --- Guid:%s,Weight:%f Ki:%f"), *Elem.ID.ToString(), Elem.Weight, Elem.Ki);
		if (NewArr.Num() < Amount) {
			NewArr.Push(Elem);
		} else {
			NewArr.Sort([](const FWeightItem& A, const FWeightItem& B) {
				return A.Ki > B.Ki;
			});
			if (Elem.Ki > NewArr.Last().Ki) {
				NewArr.Pop();
				NewArr.Push(Elem);
			}
		}
	}
	return NewArr;
}

TArray<FName> UBPFL_Random::Shuffle(TArray<FName> Array) {
	TArray<FName> NewArray;
	const int32 Num = Array.Num();
	for (int32 i = 0; i < Num; i++) {
		const int32 Index = FMath::RandRange(0, Array.Num() - 1);
		NewArray.Add(Array[Index]);
		Array.RemoveAt(Index);
	}
	return NewArray;
}

FName UBPFL_Random::DrawOne(TMap<FName, float> Map) {
	float AllWeight = 0;
	for (const auto& Elem : Map) {
		AllWeight += Elem.Value;
	}
	const float v = FMath::RandRange(0.0f, AllWeight);
	float Sum = 0;
	for (const auto& Elem : Map) {
		Sum += Elem.Value;
		if (v < Sum) {
			return Elem.Key;
		}
	}
	return "NULL";
}

TSubclassOf<AActor> UBPFL_Random::DrawOneActor(TMap<TSubclassOf<AActor>, float> Map) {
	float AllWeight = 0;
	for (const auto& Elem : Map) {
		AllWeight += Elem.Value;
	}
	const float v = FMath::RandRange(0.0f, AllWeight);
	float Sum = 0;
	for (const auto& Elem : Map) {
		Sum += Elem.Value;
		if (v < Sum) {
			return Elem.Key;
		}
	}
	return nullptr;
}

TArray<FName> UBPFL_Random::DrawSome(TMap<FName, float> Map, int32 Amount) {
	TArray<FName> NewArray;
	for (int32 i = 0; i < Amount; i++) {
		FName Key = DrawOne(Map);
		NewArray.Add(Key);
		Map.Remove((Key));
	}
	return NewArray;
}


float UBPFL_Random::NormalDistribution(float Mean, float Std_Dev) {
	float u;
	float w;
	do {
		u = FMath::RandRange(-1, 1);
		const float v = FMath::RandRange(-1, 1);
		w = u * u + v * v;
	} while (w == 0 || w >= 1);
	const float c = FMath::Sqrt((-2 * FMath::Log2(w)) / w);
	return Mean + Std_Dev * u * c;
}

FVector2D UBPFL_Random::RandomPointScreenEdge(UObject* WorldContextObject, float Edge, int32 SideIndex) {
	int32 SizeX, SizeY;
	const APlayerController* PlayerController = WorldContextObject->GetWorld()->GetFirstPlayerController();
	PlayerController->GetViewportSize(SizeX, SizeY);
	FVector2D Result;
	switch (SideIndex) {
	case 0: //上边，,x随机，y=-Edge
		Edge /= 2;
		Result.X = FMath::RandRange(-Edge, SizeX + Edge);
		Result.Y = -Edge;
		break;
	case 1: //左边，x=-Edge,y随机
		Result.X = -Edge;
		Result.Y = FMath::RandRange(-Edge, SizeY + Edge);
		break;
	case 2: //下边，,x随机，y=Resolution.Y+Edge
		Edge *= 2;
		Result.X = FMath::RandRange(-Edge, SizeX + Edge);
		Result.Y = SizeY + Edge;
		break;
	case 3:
	default: //右边，x=Resolution.X+Edge,y随机
		Result.X = SizeX + Edge;
		Result.Y = FMath::RandRange(-Edge, SizeY + Edge);
		break;
	}
	return Result;
}
