// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/PauseGameCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseGameCommand() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UGameCommand_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UPauseGameCommand();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UPauseGameCommand_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class UPauseGameCommand
void UPauseGameCommand::StaticRegisterNativesUPauseGameCommand()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPauseGameCommand);
UClass* Z_Construct_UClass_UPauseGameCommand_NoRegister()
{
	return UPauseGameCommand::StaticClass();
}
struct Z_Construct_UClass_UPauseGameCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PauseGameCommand.h" },
		{ "ModuleRelativePath", "PauseGameCommand.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseGameCommand>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPauseGameCommand_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseGameCommand_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPauseGameCommand_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameCommand_NoRegister, (int32)VTABLE_OFFSET(UPauseGameCommand, IGameCommand), false },  // 3731884092
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPauseGameCommand_Statics::ClassParams = {
	&UPauseGameCommand::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseGameCommand_Statics::Class_MetaDataParams), Z_Construct_UClass_UPauseGameCommand_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPauseGameCommand()
{
	if (!Z_Registration_Info_UClass_UPauseGameCommand.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPauseGameCommand.OuterSingleton, Z_Construct_UClass_UPauseGameCommand_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPauseGameCommand.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UPauseGameCommand>()
{
	return UPauseGameCommand::StaticClass();
}
UPauseGameCommand::UPauseGameCommand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseGameCommand);
UPauseGameCommand::~UPauseGameCommand() {}
// End Class UPauseGameCommand

// Begin Registration
struct Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseGameCommand_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPauseGameCommand, UPauseGameCommand::StaticClass, TEXT("UPauseGameCommand"), &Z_Registration_Info_UClass_UPauseGameCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPauseGameCommand), 4122938632U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseGameCommand_h_1201222484(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseGameCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseGameCommand_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
