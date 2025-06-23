// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/IProxyBomba.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIProxyBomba() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIProxyBomba();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIProxyBomba_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Interface UIProxyBomba
void UIProxyBomba::StaticRegisterNativesUIProxyBomba()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIProxyBomba);
UClass* Z_Construct_UClass_UIProxyBomba_NoRegister()
{
	return UIProxyBomba::StaticClass();
}
struct Z_Construct_UClass_UIProxyBomba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IProxyBomba.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIProxyBomba>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIProxyBomba_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIProxyBomba_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIProxyBomba_Statics::ClassParams = {
	&UIProxyBomba::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIProxyBomba_Statics::Class_MetaDataParams), Z_Construct_UClass_UIProxyBomba_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIProxyBomba()
{
	if (!Z_Registration_Info_UClass_UIProxyBomba.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIProxyBomba.OuterSingleton, Z_Construct_UClass_UIProxyBomba_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIProxyBomba.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UIProxyBomba>()
{
	return UIProxyBomba::StaticClass();
}
UIProxyBomba::UIProxyBomba(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIProxyBomba);
UIProxyBomba::~UIProxyBomba() {}
// End Interface UIProxyBomba

// Begin Registration
struct Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_IProxyBomba_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIProxyBomba, UIProxyBomba::StaticClass, TEXT("UIProxyBomba"), &Z_Registration_Info_UClass_UIProxyBomba, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIProxyBomba), 1976541312U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_IProxyBomba_h_136961103(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_IProxyBomba_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_IProxyBomba_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
