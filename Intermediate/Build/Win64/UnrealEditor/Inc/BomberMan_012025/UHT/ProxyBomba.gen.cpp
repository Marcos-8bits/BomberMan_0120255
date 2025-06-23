// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/ProxyBomba.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProxyBomba() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomba_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AProxyBomba();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AProxyBomba_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIProxyBomba_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AProxyBomba Function ConfigurarBomba
struct Z_Construct_UFunction_AProxyBomba_ConfigurarBomba_Statics
{
	struct ProxyBomba_eventConfigurarBomba_Parms
	{
		TSubclassOf<ABomba> ClaseBombaReal;
		FVector2D Posicion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProxyBomba.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClaseBombaReal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AProxyBomba_ConfigurarBomba_Statics::NewProp_ClaseBombaReal = { "ClaseBombaReal", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProxyBomba_eventConfigurarBomba_Parms, ClaseBombaReal), Z_Construct_UClass_UClass, Z_Construct_UClass_ABomba_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProxyBomba_ConfigurarBomba_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProxyBomba_eventConfigurarBomba_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProxyBomba_ConfigurarBomba_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProxyBomba_ConfigurarBomba_Statics::NewProp_ClaseBombaReal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProxyBomba_ConfigurarBomba_Statics::NewProp_Posicion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProxyBomba_ConfigurarBomba_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProxyBomba_ConfigurarBomba_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProxyBomba, nullptr, "ConfigurarBomba", nullptr, nullptr, Z_Construct_UFunction_AProxyBomba_ConfigurarBomba_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProxyBomba_ConfigurarBomba_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProxyBomba_ConfigurarBomba_Statics::ProxyBomba_eventConfigurarBomba_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProxyBomba_ConfigurarBomba_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProxyBomba_ConfigurarBomba_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProxyBomba_ConfigurarBomba_Statics::ProxyBomba_eventConfigurarBomba_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProxyBomba_ConfigurarBomba()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProxyBomba_ConfigurarBomba_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProxyBomba::execConfigurarBomba)
{
	P_GET_OBJECT(UClass,Z_Param_ClaseBombaReal);
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigurarBomba(Z_Param_ClaseBombaReal,Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class AProxyBomba Function ConfigurarBomba

// Begin Class AProxyBomba
void AProxyBomba::StaticRegisterNativesAProxyBomba()
{
	UClass* Class = AProxyBomba::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConfigurarBomba", &AProxyBomba::execConfigurarBomba },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProxyBomba);
UClass* Z_Construct_UClass_AProxyBomba_NoRegister()
{
	return AProxyBomba::StaticClass();
}
struct Z_Construct_UClass_AProxyBomba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProxyBomba.h" },
		{ "ModuleRelativePath", "ProxyBomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BombaReal_MetaData[] = {
		{ "ModuleRelativePath", "ProxyBomba.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BombaReal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProxyBomba_ConfigurarBomba, "ConfigurarBomba" }, // 1793404961
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProxyBomba>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProxyBomba_Statics::NewProp_BombaReal = { "BombaReal", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProxyBomba, BombaReal), Z_Construct_UClass_ABomba_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BombaReal_MetaData), NewProp_BombaReal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProxyBomba_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProxyBomba_Statics::NewProp_BombaReal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProxyBomba_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProxyBomba_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProxyBomba_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AProxyBomba_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIProxyBomba_NoRegister, (int32)VTABLE_OFFSET(AProxyBomba, IIProxyBomba), false },  // 1976541312
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProxyBomba_Statics::ClassParams = {
	&AProxyBomba::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProxyBomba_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProxyBomba_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProxyBomba_Statics::Class_MetaDataParams), Z_Construct_UClass_AProxyBomba_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProxyBomba()
{
	if (!Z_Registration_Info_UClass_AProxyBomba.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProxyBomba.OuterSingleton, Z_Construct_UClass_AProxyBomba_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProxyBomba.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AProxyBomba>()
{
	return AProxyBomba::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProxyBomba);
AProxyBomba::~AProxyBomba() {}
// End Class AProxyBomba

// Begin Registration
struct Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_ProxyBomba_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProxyBomba, AProxyBomba::StaticClass, TEXT("AProxyBomba"), &Z_Registration_Info_UClass_AProxyBomba, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProxyBomba), 2231813355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_ProxyBomba_h_1831259028(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_ProxyBomba_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_ProxyBomba_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
