// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePSD2UMG_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PSD2UMG;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PSD2UMG()
	{
		if (!Z_Registration_Info_UPackage__Script_PSD2UMG.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PSD2UMG",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x7722FE0D,
				0xE8EA1C05,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PSD2UMG.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PSD2UMG.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PSD2UMG(Z_Construct_UPackage__Script_PSD2UMG, TEXT("/Script/PSD2UMG"), Z_Registration_Info_UPackage__Script_PSD2UMG, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7722FE0D, 0xE8EA1C05));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
