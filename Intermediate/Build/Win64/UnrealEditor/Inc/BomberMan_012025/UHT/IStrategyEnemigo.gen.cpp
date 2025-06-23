// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/IStrategyEnemigo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIStrategyEnemigo() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIStrategyEnemigo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIStrategyEnemigo_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Interface UIStrategyEnemigo
void UIStrategyEnemigo::StaticRegisterNativesUIStrategyEnemigo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIStrategyEnemigo);
UClass* Z_Construct_UClass_UIStrategyEnemigo_NoRegister()
{
	return UIStrategyEnemigo::StaticClass();
}
struct Z_Construct_UClass_UIStrategyEnemigo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "IStrategyEnemigo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIStrategyEnemigo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIStrategyEnemigo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIStrategyEnemigo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIStrategyEnemigo_Statics::ClassParams = {
	&UIStrategyEnemigo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIStrategyEnemigo_Statics::Class_MetaDataParams), Z_Construct_UClass_UIStrategyEnemigo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIStrategyEnemigo()
{
	if (!Z_Registration_Info_UClass_UIStrategyEnemigo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIStrategyEnemigo.OuterSingleton, Z_Construct_UClass_UIStrategyEnemigo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIStrategyEnemigo.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UIStrategyEnemigo>()
{
	return UIStrategyEnemigo::StaticClass();
}
UIStrategyEnemigo::UIStrategyEnemigo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIStrategyEnemigo);
UIStrategyEnemigo::~UIStrategyEnemigo() {}
// End Interface UIStrategyEnemigo

// Begin Registration
struct Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_IStrategyEnemigo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIStrategyEnemigo, UIStrategyEnemigo::StaticClass, TEXT("UIStrategyEnemigo"), &Z_Registration_Info_UClass_UIStrategyEnemigo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIStrategyEnemigo), 1659541170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_IStrategyEnemigo_h_1804972559(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_IStrategyEnemigo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_IStrategyEnemigo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
