// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloqueConcreto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueConcreto() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueConcreto();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueConcreto_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueConcreto Function OnGamePaused
struct Z_Construct_UFunction_ABloqueConcreto_OnGamePaused_Statics
{
	struct BloqueConcreto_eventOnGamePaused_Parms
	{
		bool bIsPaused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BloqueConcreto.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABloqueConcreto_OnGamePaused_Statics::NewProp_bIsPaused_SetBit(void* Obj)
{
	((BloqueConcreto_eventOnGamePaused_Parms*)Obj)->bIsPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABloqueConcreto_OnGamePaused_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BloqueConcreto_eventOnGamePaused_Parms), &Z_Construct_UFunction_ABloqueConcreto_OnGamePaused_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABloqueConcreto_OnGamePaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloqueConcreto_OnGamePaused_Statics::NewProp_bIsPaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloqueConcreto_OnGamePaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloqueConcreto_OnGamePaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloqueConcreto, nullptr, "OnGamePaused", nullptr, nullptr, Z_Construct_UFunction_ABloqueConcreto_OnGamePaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloqueConcreto_OnGamePaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABloqueConcreto_OnGamePaused_Statics::BloqueConcreto_eventOnGamePaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloqueConcreto_OnGamePaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABloqueConcreto_OnGamePaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABloqueConcreto_OnGamePaused_Statics::BloqueConcreto_eventOnGamePaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABloqueConcreto_OnGamePaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABloqueConcreto_OnGamePaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABloqueConcreto::execOnGamePaused)
{
	P_GET_UBOOL(Z_Param_bIsPaused);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGamePaused(Z_Param_bIsPaused);
	P_NATIVE_END;
}
// End Class ABloqueConcreto Function OnGamePaused

// Begin Class ABloqueConcreto
void ABloqueConcreto::StaticRegisterNativesABloqueConcreto()
{
	UClass* Class = ABloqueConcreto::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnGamePaused", &ABloqueConcreto::execOnGamePaused },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueConcreto);
UClass* Z_Construct_UClass_ABloqueConcreto_NoRegister()
{
	return ABloqueConcreto::StaticClass();
}
struct Z_Construct_UClass_ABloqueConcreto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueConcreto.h" },
		{ "ModuleRelativePath", "BloqueConcreto.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABloqueConcreto_OnGamePaused, "OnGamePaused" }, // 4120547720
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueConcreto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueConcreto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueConcreto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueConcreto_Statics::ClassParams = {
	&ABloqueConcreto::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueConcreto_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueConcreto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueConcreto()
{
	if (!Z_Registration_Info_UClass_ABloqueConcreto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueConcreto.OuterSingleton, Z_Construct_UClass_ABloqueConcreto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueConcreto.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueConcreto>()
{
	return ABloqueConcreto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueConcreto);
ABloqueConcreto::~ABloqueConcreto() {}
// End Class ABloqueConcreto

// Begin Registration
struct Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_BloqueConcreto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueConcreto, ABloqueConcreto::StaticClass, TEXT("ABloqueConcreto"), &Z_Registration_Info_UClass_ABloqueConcreto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueConcreto), 439531377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_BloqueConcreto_h_1532226101(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_BloqueConcreto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_BloqueConcreto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
