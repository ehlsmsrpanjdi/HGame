// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_GameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_INTERFACE_C_GameState_generated_h
#error "C_GameState.generated.h already included, missing '#pragma once' in C_GameState.h"
#endif
#define RTS_INTERFACE_C_GameState_generated_h

#define FID_RTS_Interface_Source_RTS_Interface_C_GameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_GameState(); \
	friend struct Z_Construct_UClass_AC_GameState_Statics; \
public: \
	DECLARE_CLASS(AC_GameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS_Interface"), NO_API) \
	DECLARE_SERIALIZER(AC_GameState)


#define FID_RTS_Interface_Source_RTS_Interface_C_GameState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC_GameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AC_GameState(AC_GameState&&); \
	AC_GameState(const AC_GameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_GameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_GameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC_GameState) \
	NO_API virtual ~AC_GameState();


#define FID_RTS_Interface_Source_RTS_Interface_C_GameState_h_12_PROLOG
#define FID_RTS_Interface_Source_RTS_Interface_C_GameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_Interface_Source_RTS_Interface_C_GameState_h_15_INCLASS_NO_PURE_DECLS \
	FID_RTS_Interface_Source_RTS_Interface_C_GameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_INTERFACE_API UClass* StaticClass<class AC_GameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_Interface_Source_RTS_Interface_C_GameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
