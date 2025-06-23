// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PauseCommandInvoker.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_012025_PauseCommandInvoker_generated_h
#error "PauseCommandInvoker.generated.h already included, missing '#pragma once' in PauseCommandInvoker.h"
#endif
#define BOMBERMAN_012025_PauseCommandInvoker_generated_h

#define FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseCommandInvoker_h_7_DELEGATE \
BOMBERMAN_012025_API void FOnGamePausedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnGamePausedSignature, bool bIsPaused);


#define FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseCommandInvoker_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTogglePause);


#define FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseCommandInvoker_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPauseCommandInvoker(); \
	friend struct Z_Construct_UClass_APauseCommandInvoker_Statics; \
public: \
	DECLARE_CLASS(APauseCommandInvoker, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan_012025"), NO_API) \
	DECLARE_SERIALIZER(APauseCommandInvoker)


#define FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseCommandInvoker_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APauseCommandInvoker(APauseCommandInvoker&&); \
	APauseCommandInvoker(const APauseCommandInvoker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APauseCommandInvoker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APauseCommandInvoker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APauseCommandInvoker) \
	NO_API virtual ~APauseCommandInvoker();


#define FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseCommandInvoker_h_9_PROLOG
#define FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseCommandInvoker_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseCommandInvoker_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseCommandInvoker_h_12_INCLASS_NO_PURE_DECLS \
	FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseCommandInvoker_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_012025_API UClass* StaticClass<class APauseCommandInvoker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_2do_Examen_Parcial_si_o_si_BomberMan_012025_Source_BomberMan_012025_PauseCommandInvoker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
