// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/PauseCommandInvoker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseCommandInvoker() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_APauseCommandInvoker();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_APauseCommandInvoker_NoRegister();
BOMBERMAN_012025_API UFunction* Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Delegate FOnGamePausedSignature
struct Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature_Statics
{
	struct _Script_BomberMan_012025_eventOnGamePausedSignature_Parms
	{
		bool bIsPaused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PauseCommandInvoker.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature_Statics::NewProp_bIsPaused_SetBit(void* Obj)
{
	((_Script_BomberMan_012025_eventOnGamePausedSignature_Parms*)Obj)->bIsPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_BomberMan_012025_eventOnGamePausedSignature_Parms), &Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature_Statics::NewProp_bIsPaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BomberMan_012025, nullptr, "OnGamePausedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature_Statics::_Script_BomberMan_012025_eventOnGamePausedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature_Statics::_Script_BomberMan_012025_eventOnGamePausedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGamePausedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnGamePausedSignature, bool bIsPaused)
{
	struct _Script_BomberMan_012025_eventOnGamePausedSignature_Parms
	{
		bool bIsPaused;
	};
	_Script_BomberMan_012025_eventOnGamePausedSignature_Parms Parms;
	Parms.bIsPaused=bIsPaused ? true : false;
	OnGamePausedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGamePausedSignature

// Begin Class APauseCommandInvoker Function TogglePause
struct Z_Construct_UFunction_APauseCommandInvoker_TogglePause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pause" },
		{ "ModuleRelativePath", "PauseCommandInvoker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APauseCommandInvoker_TogglePause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APauseCommandInvoker, nullptr, "TogglePause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APauseCommandInvoker_TogglePause_Statics::Function_MetaDataParams), Z_Construct_UFunction_APauseCommandInvoker_TogglePause_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APauseCommandInvoker_TogglePause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APauseCommandInvoker_TogglePause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APauseCommandInvoker::execTogglePause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TogglePause();
	P_NATIVE_END;
}
// End Class APauseCommandInvoker Function TogglePause

// Begin Class APauseCommandInvoker
void APauseCommandInvoker::StaticRegisterNativesAPauseCommandInvoker()
{
	UClass* Class = APauseCommandInvoker::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TogglePause", &APauseCommandInvoker::execTogglePause },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APauseCommandInvoker);
UClass* Z_Construct_UClass_APauseCommandInvoker_NoRegister()
{
	return APauseCommandInvoker::StaticClass();
}
struct Z_Construct_UClass_APauseCommandInvoker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PauseCommandInvoker.h" },
		{ "ModuleRelativePath", "PauseCommandInvoker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGamePaused_MetaData[] = {
		{ "Category", "Pause" },
		{ "ModuleRelativePath", "PauseCommandInvoker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGamePaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APauseCommandInvoker_TogglePause, "TogglePause" }, // 3104879139
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APauseCommandInvoker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APauseCommandInvoker_Statics::NewProp_OnGamePaused = { "OnGamePaused", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APauseCommandInvoker, OnGamePaused), Z_Construct_UDelegateFunction_BomberMan_012025_OnGamePausedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGamePaused_MetaData), NewProp_OnGamePaused_MetaData) }; // 1689375516
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APauseCommandInvoker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APauseCommandInvoker_Statics::NewProp_OnGamePaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APauseCommandInvoker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APauseCommandInvoker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APauseCommandInvoker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APauseCommandInvoker_Statics::ClassParams = {
	&APauseCommandInvoker::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APauseCommandInvoker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APauseCommandInvoker_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APauseCommandInvoker_Statics::Class_MetaDataParams), Z_Construct_UClass_APauseCommandInvoker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APauseCommandInvoker()
{
	if (!Z_Registration_Info_UClass_APauseCommandInvoker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APauseCommandInvoker.OuterSingleton, Z_Construct_UClass_APauseCommandInvoker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APauseCommandInvoker.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<APauseCommandInvoker>()
{
	return APauseCommandInvoker::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APauseCommandInvoker);
APauseCommandInvoker::~APauseCommandInvoker() {}
// End Class APauseCommandInvoker

// Begin Registration
struct Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseCommandInvoker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APauseCommandInvoker, APauseCommandInvoker::StaticClass, TEXT("APauseCommandInvoker"), &Z_Registration_Info_UClass_APauseCommandInvoker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APauseCommandInvoker), 2261946801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseCommandInvoker_h_3893579466(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseCommandInvoker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseCommandInvoker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
