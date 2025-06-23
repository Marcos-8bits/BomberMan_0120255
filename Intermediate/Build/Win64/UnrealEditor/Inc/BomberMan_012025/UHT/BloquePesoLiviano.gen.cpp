// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloquePesoLiviano.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloquePesoLiviano() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBloquePesoLiviano();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBloquePesoLiviano_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class UBloquePesoLiviano
void UBloquePesoLiviano::StaticRegisterNativesUBloquePesoLiviano()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBloquePesoLiviano);
UClass* Z_Construct_UClass_UBloquePesoLiviano_NoRegister()
{
	return UBloquePesoLiviano::StaticClass();
}
struct Z_Construct_UClass_UBloquePesoLiviano_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloquePesoLiviano.h" },
		{ "ModuleRelativePath", "BloquePesoLiviano.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloquePesoLiviano>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBloquePesoLiviano_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBloquePesoLiviano_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBloquePesoLiviano_Statics::ClassParams = {
	&UBloquePesoLiviano::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBloquePesoLiviano_Statics::Class_MetaDataParams), Z_Construct_UClass_UBloquePesoLiviano_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBloquePesoLiviano()
{
	if (!Z_Registration_Info_UClass_UBloquePesoLiviano.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBloquePesoLiviano.OuterSingleton, Z_Construct_UClass_UBloquePesoLiviano_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBloquePesoLiviano.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UBloquePesoLiviano>()
{
	return UBloquePesoLiviano::StaticClass();
}
UBloquePesoLiviano::UBloquePesoLiviano(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBloquePesoLiviano);
UBloquePesoLiviano::~UBloquePesoLiviano() {}
// End Class UBloquePesoLiviano

// Begin Registration
struct Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_BloquePesoLiviano_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBloquePesoLiviano, UBloquePesoLiviano::StaticClass, TEXT("UBloquePesoLiviano"), &Z_Registration_Info_UClass_UBloquePesoLiviano, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBloquePesoLiviano), 2650693617U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_BloquePesoLiviano_h_1603281620(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_BloquePesoLiviano_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_BloquePesoLiviano_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
