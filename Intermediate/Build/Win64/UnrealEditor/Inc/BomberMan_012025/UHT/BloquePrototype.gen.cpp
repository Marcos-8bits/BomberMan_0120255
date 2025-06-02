// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloquePrototype.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloquePrototype() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBloquePrototype();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBloquePrototype_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Interface UBloquePrototype
void UBloquePrototype::StaticRegisterNativesUBloquePrototype()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBloquePrototype);
UClass* Z_Construct_UClass_UBloquePrototype_NoRegister()
{
	return UBloquePrototype::StaticClass();
}
struct Z_Construct_UClass_UBloquePrototype_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BloquePrototype.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBloquePrototype>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBloquePrototype_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBloquePrototype_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBloquePrototype_Statics::ClassParams = {
	&UBloquePrototype::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBloquePrototype_Statics::Class_MetaDataParams), Z_Construct_UClass_UBloquePrototype_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBloquePrototype()
{
	if (!Z_Registration_Info_UClass_UBloquePrototype.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBloquePrototype.OuterSingleton, Z_Construct_UClass_UBloquePrototype_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBloquePrototype.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UBloquePrototype>()
{
	return UBloquePrototype::StaticClass();
}
UBloquePrototype::UBloquePrototype(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBloquePrototype);
UBloquePrototype::~UBloquePrototype() {}
// End Interface UBloquePrototype

// Begin Registration
struct Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_BloquePrototype_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBloquePrototype, UBloquePrototype::StaticClass, TEXT("UBloquePrototype"), &Z_Registration_Info_UClass_UBloquePrototype, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBloquePrototype), 374187136U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_BloquePrototype_h_1004526610(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_BloquePrototype_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_BloquePrototype_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
