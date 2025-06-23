// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/StrategyPerseguirJugador.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyPerseguirJugador() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIStrategyEnemigo_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UStrategyPerseguirJugador();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UStrategyPerseguirJugador_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class UStrategyPerseguirJugador
void UStrategyPerseguirJugador::StaticRegisterNativesUStrategyPerseguirJugador()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStrategyPerseguirJugador);
UClass* Z_Construct_UClass_UStrategyPerseguirJugador_NoRegister()
{
	return UStrategyPerseguirJugador::StaticClass();
}
struct Z_Construct_UClass_UStrategyPerseguirJugador_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StrategyPerseguirJugador.h" },
		{ "ModuleRelativePath", "StrategyPerseguirJugador.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStrategyPerseguirJugador>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStrategyPerseguirJugador_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStrategyPerseguirJugador_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStrategyPerseguirJugador_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIStrategyEnemigo_NoRegister, (int32)VTABLE_OFFSET(UStrategyPerseguirJugador, IIStrategyEnemigo), false },  // 1659541170
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStrategyPerseguirJugador_Statics::ClassParams = {
	&UStrategyPerseguirJugador::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStrategyPerseguirJugador_Statics::Class_MetaDataParams), Z_Construct_UClass_UStrategyPerseguirJugador_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStrategyPerseguirJugador()
{
	if (!Z_Registration_Info_UClass_UStrategyPerseguirJugador.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStrategyPerseguirJugador.OuterSingleton, Z_Construct_UClass_UStrategyPerseguirJugador_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStrategyPerseguirJugador.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UStrategyPerseguirJugador>()
{
	return UStrategyPerseguirJugador::StaticClass();
}
UStrategyPerseguirJugador::UStrategyPerseguirJugador(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStrategyPerseguirJugador);
UStrategyPerseguirJugador::~UStrategyPerseguirJugador() {}
// End Class UStrategyPerseguirJugador

// Begin Registration
struct Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_StrategyPerseguirJugador_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStrategyPerseguirJugador, UStrategyPerseguirJugador::StaticClass, TEXT("UStrategyPerseguirJugador"), &Z_Registration_Info_UClass_UStrategyPerseguirJugador, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStrategyPerseguirJugador), 2252358263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_StrategyPerseguirJugador_h_181558829(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_StrategyPerseguirJugador_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_StrategyPerseguirJugador_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
