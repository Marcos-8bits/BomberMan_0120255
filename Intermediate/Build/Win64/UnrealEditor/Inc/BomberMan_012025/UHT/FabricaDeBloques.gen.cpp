// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/FabricaDeBloques.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaDeBloques() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AFabricaDeBloques();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AFabricaDeBloques_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AFabricaDeBloques
void AFabricaDeBloques::StaticRegisterNativesAFabricaDeBloques()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFabricaDeBloques);
UClass* Z_Construct_UClass_AFabricaDeBloques_NoRegister()
{
	return AFabricaDeBloques::StaticClass();
}
struct Z_Construct_UClass_AFabricaDeBloques_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaDeBloques.h" },
		{ "ModuleRelativePath", "FabricaDeBloques.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaDeBloques>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFabricaDeBloques_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaDeBloques_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFabricaDeBloques_Statics::ClassParams = {
	&AFabricaDeBloques::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaDeBloques_Statics::Class_MetaDataParams), Z_Construct_UClass_AFabricaDeBloques_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFabricaDeBloques()
{
	if (!Z_Registration_Info_UClass_AFabricaDeBloques.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFabricaDeBloques.OuterSingleton, Z_Construct_UClass_AFabricaDeBloques_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFabricaDeBloques.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AFabricaDeBloques>()
{
	return AFabricaDeBloques::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaDeBloques);
AFabricaDeBloques::~AFabricaDeBloques() {}
// End Class AFabricaDeBloques

// Begin Registration
struct Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_FabricaDeBloques_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFabricaDeBloques, AFabricaDeBloques::StaticClass, TEXT("AFabricaDeBloques"), &Z_Registration_Info_UClass_AFabricaDeBloques, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFabricaDeBloques), 3325079158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_FabricaDeBloques_h_2896118807(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_FabricaDeBloques_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_FabricaDeBloques_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
