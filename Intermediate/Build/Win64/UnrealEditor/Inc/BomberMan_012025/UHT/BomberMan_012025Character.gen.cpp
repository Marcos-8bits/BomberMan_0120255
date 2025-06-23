// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BomberMan_012025Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan_012025Character() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomba_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025Character();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025Character_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_APauseCommandInvoker_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AProxyBomba_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIStrategyEnemigo_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABomberMan_012025Character Function HandlePauseInput
struct Z_Construct_UFunction_ABomberMan_012025Character_HandlePauseInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025Character_HandlePauseInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025Character, nullptr, "HandlePauseInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_HandlePauseInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025Character_HandlePauseInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABomberMan_012025Character_HandlePauseInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025Character_HandlePauseInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025Character::execHandlePauseInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePauseInput();
	P_NATIVE_END;
}
// End Class ABomberMan_012025Character Function HandlePauseInput

// Begin Class ABomberMan_012025Character
void ABomberMan_012025Character::StaticRegisterNativesABomberMan_012025Character()
{
	UClass* Class = ABomberMan_012025Character::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandlePauseInput", &ABomberMan_012025Character::execHandlePauseInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan_012025Character);
UClass* Z_Construct_UClass_ABomberMan_012025Character_NoRegister()
{
	return ABomberMan_012025Character::StaticClass();
}
struct Z_Construct_UClass_ABomberMan_012025Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BomberMan_012025Character.h" },
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyBombaClase_MetaData[] = {
		{ "Category", "Bombas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clase Proxy de la bomba para spawn (configurable desde Blueprint)\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clase Proxy de la bomba para spawn (configurable desde Blueprint)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClaseRealDeBomba_MetaData[] = {
		{ "Category", "Bombas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clase real de la bomba (para que el proxy la configure)\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clase real de la bomba (para que el proxy la configure)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceBombAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseCommandInvoker_MetaData[] = {
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovimientoActual_MetaData[] = {
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEstrategiaPerseguirActiva_MetaData[] = {
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEstrategiaEscaparActiva_MetaData[] = {
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProxyBombaClase;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClaseRealDeBomba;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaceBombAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseCommandInvoker;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_MovimientoActual;
	static void NewProp_bEstrategiaPerseguirActiva_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEstrategiaPerseguirActiva;
	static void NewProp_bEstrategiaEscaparActiva_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEstrategiaEscaparActiva;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABomberMan_012025Character_HandlePauseInput, "HandlePauseInput" }, // 3371370168
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan_012025Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_ProxyBombaClase = { "ProxyBombaClase", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, ProxyBombaClase), Z_Construct_UClass_UClass, Z_Construct_UClass_AProxyBomba_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyBombaClase_MetaData), NewProp_ProxyBombaClase_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_ClaseRealDeBomba = { "ClaseRealDeBomba", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, ClaseRealDeBomba), Z_Construct_UClass_UClass, Z_Construct_UClass_ABomba_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClaseRealDeBomba_MetaData), NewProp_ClaseRealDeBomba_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_PlaceBombAction = { "PlaceBombAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, PlaceBombAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceBombAction_MetaData), NewProp_PlaceBombAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_PauseCommandInvoker = { "PauseCommandInvoker", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, PauseCommandInvoker), Z_Construct_UClass_APauseCommandInvoker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseCommandInvoker_MetaData), NewProp_PauseCommandInvoker_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_MovimientoActual = { "MovimientoActual", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, MovimientoActual), Z_Construct_UClass_UIStrategyEnemigo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovimientoActual_MetaData), NewProp_MovimientoActual_MetaData) };
void Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_bEstrategiaPerseguirActiva_SetBit(void* Obj)
{
	((ABomberMan_012025Character*)Obj)->bEstrategiaPerseguirActiva = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_bEstrategiaPerseguirActiva = { "bEstrategiaPerseguirActiva", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABomberMan_012025Character), &Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_bEstrategiaPerseguirActiva_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEstrategiaPerseguirActiva_MetaData), NewProp_bEstrategiaPerseguirActiva_MetaData) };
void Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_bEstrategiaEscaparActiva_SetBit(void* Obj)
{
	((ABomberMan_012025Character*)Obj)->bEstrategiaEscaparActiva = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_bEstrategiaEscaparActiva = { "bEstrategiaEscaparActiva", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABomberMan_012025Character), &Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_bEstrategiaEscaparActiva_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEstrategiaEscaparActiva_MetaData), NewProp_bEstrategiaEscaparActiva_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan_012025Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_ProxyBombaClase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_ClaseRealDeBomba,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_PlaceBombAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_PauseCommandInvoker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_MovimientoActual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_bEstrategiaPerseguirActiva,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_bEstrategiaEscaparActiva,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomberMan_012025Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan_012025Character_Statics::ClassParams = {
	&ABomberMan_012025Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABomberMan_012025Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025Character_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025Character_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan_012025Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan_012025Character()
{
	if (!Z_Registration_Info_UClass_ABomberMan_012025Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan_012025Character.OuterSingleton, Z_Construct_UClass_ABomberMan_012025Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan_012025Character.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABomberMan_012025Character>()
{
	return ABomberMan_012025Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan_012025Character);
ABomberMan_012025Character::~ABomberMan_012025Character() {}
// End Class ABomberMan_012025Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_BomberMan_012025Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan_012025Character, ABomberMan_012025Character::StaticClass, TEXT("ABomberMan_012025Character"), &Z_Registration_Info_UClass_ABomberMan_012025Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan_012025Character), 1443234717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_BomberMan_012025Character_h_2799614018(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_BomberMan_012025Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_BomberMan_012025Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
