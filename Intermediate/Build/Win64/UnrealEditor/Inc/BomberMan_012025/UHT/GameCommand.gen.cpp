// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/GameCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameCommand() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UGameCommand();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UGameCommand_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Interface UGameCommand
void UGameCommand::StaticRegisterNativesUGameCommand()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameCommand);
UClass* Z_Construct_UClass_UGameCommand_NoRegister()
{
	return UGameCommand::StaticClass();
}
struct Z_Construct_UClass_UGameCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameCommand.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameCommand>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameCommand_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameCommand_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameCommand_Statics::ClassParams = {
	&UGameCommand::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameCommand_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameCommand_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameCommand()
{
	if (!Z_Registration_Info_UClass_UGameCommand.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameCommand.OuterSingleton, Z_Construct_UClass_UGameCommand_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameCommand.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UGameCommand>()
{
	return UGameCommand::StaticClass();
}
UGameCommand::UGameCommand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameCommand);
UGameCommand::~UGameCommand() {}
// End Interface UGameCommand

// Begin Registration
struct Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_GameCommand_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameCommand, UGameCommand::StaticClass, TEXT("UGameCommand"), &Z_Registration_Info_UClass_UGameCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameCommand), 3731884092U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_GameCommand_h_927496521(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_GameCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_GameCommand_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
