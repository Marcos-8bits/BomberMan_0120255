// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/FactoryMethodBloque.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactoryMethodBloque() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UFactoryMethodBloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UFactoryMethodBloque_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Interface UFactoryMethodBloque
void UFactoryMethodBloque::StaticRegisterNativesUFactoryMethodBloque()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactoryMethodBloque);
UClass* Z_Construct_UClass_UFactoryMethodBloque_NoRegister()
{
	return UFactoryMethodBloque::StaticClass();
}
struct Z_Construct_UClass_UFactoryMethodBloque_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "FactoryMethodBloque.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFactoryMethodBloque>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFactoryMethodBloque_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactoryMethodBloque_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactoryMethodBloque_Statics::ClassParams = {
	&UFactoryMethodBloque::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactoryMethodBloque_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactoryMethodBloque_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactoryMethodBloque()
{
	if (!Z_Registration_Info_UClass_UFactoryMethodBloque.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactoryMethodBloque.OuterSingleton, Z_Construct_UClass_UFactoryMethodBloque_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactoryMethodBloque.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UFactoryMethodBloque>()
{
	return UFactoryMethodBloque::StaticClass();
}
UFactoryMethodBloque::UFactoryMethodBloque(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactoryMethodBloque);
UFactoryMethodBloque::~UFactoryMethodBloque() {}
// End Interface UFactoryMethodBloque

// Begin Registration
struct Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_FactoryMethodBloque_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactoryMethodBloque, UFactoryMethodBloque::StaticClass, TEXT("UFactoryMethodBloque"), &Z_Registration_Info_UClass_UFactoryMethodBloque, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactoryMethodBloque), 3981360945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_FactoryMethodBloque_h_2793742256(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_FactoryMethodBloque_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_FactoryMethodBloque_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
