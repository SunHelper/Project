// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PSD2UMG/Public/PSD2UMGCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePSD2UMGCache() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	PSD2UMG_API UClass* Z_Construct_UClass_UPSD2UMGCache();
	PSD2UMG_API UClass* Z_Construct_UClass_UPSD2UMGCache_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PSD2UMG();
// End Cross Module References
	void UPSD2UMGCache::StaticRegisterNativesUPSD2UMGCache()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPSD2UMGCache);
	UClass* Z_Construct_UClass_UPSD2UMGCache_NoRegister()
	{
		return UPSD2UMGCache::StaticClass();
	}
	struct Z_Construct_UClass_UPSD2UMGCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPSD2UMGCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PSD2UMG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPSD2UMGCache_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPSD2UMGCache_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PSD2UMGCache.h" },
		{ "ModuleRelativePath", "Public/PSD2UMGCache.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPSD2UMGCache_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Public/PSD2UMGCache.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPSD2UMGCache_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPSD2UMGCache, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPSD2UMGCache_Statics::NewProp_AssetImportData_MetaData), Z_Construct_UClass_UPSD2UMGCache_Statics::NewProp_AssetImportData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPSD2UMGCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPSD2UMGCache_Statics::NewProp_AssetImportData,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPSD2UMGCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPSD2UMGCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPSD2UMGCache_Statics::ClassParams = {
		&UPSD2UMGCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPSD2UMGCache_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPSD2UMGCache_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPSD2UMGCache_Statics::Class_MetaDataParams), Z_Construct_UClass_UPSD2UMGCache_Statics::Class_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPSD2UMGCache_Statics::PropPointers) < 2048);
#endif
	UClass* Z_Construct_UClass_UPSD2UMGCache()
	{
		if (!Z_Registration_Info_UClass_UPSD2UMGCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPSD2UMGCache.OuterSingleton, Z_Construct_UClass_UPSD2UMGCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPSD2UMGCache.OuterSingleton;
	}
	template<> PSD2UMG_API UClass* StaticClass<UPSD2UMGCache>()
	{
		return UPSD2UMGCache::StaticClass();
	}
	UPSD2UMGCache::UPSD2UMGCache(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPSD2UMGCache);
	UPSD2UMGCache::~UPSD2UMGCache() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PSD2UMG_Source_PSD2UMG_Public_PSD2UMGCache_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PSD2UMG_Source_PSD2UMG_Public_PSD2UMGCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPSD2UMGCache, UPSD2UMGCache::StaticClass, TEXT("UPSD2UMGCache"), &Z_Registration_Info_UClass_UPSD2UMGCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPSD2UMGCache), 1249321441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PSD2UMG_Source_PSD2UMG_Public_PSD2UMGCache_h_3140344768(TEXT("/Script/PSD2UMG"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PSD2UMG_Source_PSD2UMG_Public_PSD2UMGCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PSD2UMG_Source_PSD2UMG_Public_PSD2UMGCache_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
