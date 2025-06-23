// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/FabricaBloquesFl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaBloquesFl() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UFabricaBloquesFl();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UFabricaBloquesFl_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class UFabricaBloquesFl
void UFabricaBloquesFl::StaticRegisterNativesUFabricaBloquesFl()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFabricaBloquesFl);
UClass* Z_Construct_UClass_UFabricaBloquesFl_NoRegister()
{
	return UFabricaBloquesFl::StaticClass();
}
struct Z_Construct_UClass_UFabricaBloquesFl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FabricaBloquesFl.h" },
		{ "ModuleRelativePath", "FabricaBloquesFl.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabricaBloquesFl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFabricaBloquesFl_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabricaBloquesFl_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabricaBloquesFl_Statics::ClassParams = {
	&UFabricaBloquesFl::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFabricaBloquesFl_Statics::Class_MetaDataParams), Z_Construct_UClass_UFabricaBloquesFl_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFabricaBloquesFl()
{
	if (!Z_Registration_Info_UClass_UFabricaBloquesFl.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabricaBloquesFl.OuterSingleton, Z_Construct_UClass_UFabricaBloquesFl_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFabricaBloquesFl.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UFabricaBloquesFl>()
{
	return UFabricaBloquesFl::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFabricaBloquesFl);
UFabricaBloquesFl::~UFabricaBloquesFl() {}
// End Class UFabricaBloquesFl

// Begin Registration
struct Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_FabricaBloquesFl_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFabricaBloquesFl, UFabricaBloquesFl::StaticClass, TEXT("UFabricaBloquesFl"), &Z_Registration_Info_UClass_UFabricaBloquesFl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabricaBloquesFl), 1444241007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_FabricaBloquesFl_h_2970587177(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_FabricaBloquesFl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_FabricaBloquesFl_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
