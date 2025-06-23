// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan_012025_init() {}
	BOMBERMAN_012025_API UFunction* Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BomberMan_012025;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BomberMan_012025()
	{
		if (!Z_Registration_Info_UPackage__Script_BomberMan_012025.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BomberMan_012025",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCAA3E4C3,
				0x7E63ACF5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BomberMan_012025.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BomberMan_012025.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BomberMan_012025(Z_Construct_UPackage__Script_BomberMan_012025, TEXT("/Script/BomberMan_012025"), Z_Registration_Info_UPackage__Script_BomberMan_012025, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCAA3E4C3, 0x7E63ACF5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
