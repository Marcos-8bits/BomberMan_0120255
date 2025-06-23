// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/StrategyEscaparBomba.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyEscaparBomba() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIStrategyEnemigo_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UStrategyEscaparBomba();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UStrategyEscaparBomba_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class UStrategyEscaparBomba
void UStrategyEscaparBomba::StaticRegisterNativesUStrategyEscaparBomba()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStrategyEscaparBomba);
UClass* Z_Construct_UClass_UStrategyEscaparBomba_NoRegister()
{
	return UStrategyEscaparBomba::StaticClass();
}
struct Z_Construct_UClass_UStrategyEscaparBomba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StrategyEscaparBomba.h" },
		{ "ModuleRelativePath", "StrategyEscaparBomba.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStrategyEscaparBomba>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStrategyEscaparBomba_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStrategyEscaparBomba_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStrategyEscaparBomba_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIStrategyEnemigo_NoRegister, (int32)VTABLE_OFFSET(UStrategyEscaparBomba, IIStrategyEnemigo), false },  // 1659541170
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStrategyEscaparBomba_Statics::ClassParams = {
	&UStrategyEscaparBomba::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStrategyEscaparBomba_Statics::Class_MetaDataParams), Z_Construct_UClass_UStrategyEscaparBomba_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStrategyEscaparBomba()
{
	if (!Z_Registration_Info_UClass_UStrategyEscaparBomba.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStrategyEscaparBomba.OuterSingleton, Z_Construct_UClass_UStrategyEscaparBomba_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStrategyEscaparBomba.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UStrategyEscaparBomba>()
{
	return UStrategyEscaparBomba::StaticClass();
}
UStrategyEscaparBomba::UStrategyEscaparBomba(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStrategyEscaparBomba);
UStrategyEscaparBomba::~UStrategyEscaparBomba() {}
// End Class UStrategyEscaparBomba

// Begin Registration
struct Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_StrategyEscaparBomba_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStrategyEscaparBomba, UStrategyEscaparBomba::StaticClass, TEXT("UStrategyEscaparBomba"), &Z_Registration_Info_UClass_UStrategyEscaparBomba, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStrategyEscaparBomba), 642937388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_StrategyEscaparBomba_h_3678733441(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_StrategyEscaparBomba_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_StrategyEscaparBomba_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
