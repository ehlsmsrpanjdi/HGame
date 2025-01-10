// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RTS_InterfaceGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_INTERFACE_RTS_InterfaceGameMode_generated_h
#error "RTS_InterfaceGameMode.generated.h already included, missing '#pragma once' in RTS_InterfaceGameMode.h"
#endif
#define RTS_INTERFACE_RTS_InterfaceGameMode_generated_h

#define FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTS_InterfaceGameMode(); \
	friend struct Z_Construct_UClass_ARTS_InterfaceGameMode_Statics; \
public: \
	DECLARE_CLASS(ARTS_InterfaceGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS_Interface"), RTS_INTERFACE_API) \
	DECLARE_SERIALIZER(ARTS_InterfaceGameMode)


#define FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARTS_InterfaceGameMode(ARTS_InterfaceGameMode&&); \
	ARTS_InterfaceGameMode(const ARTS_InterfaceGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RTS_INTERFACE_API, ARTS_InterfaceGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTS_InterfaceGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTS_InterfaceGameMode) \
	RTS_INTERFACE_API virtual ~ARTS_InterfaceGameMode();


#define FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceGameMode_h_9_PROLOG
#define FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_INTERFACE_API UClass* StaticClass<class ARTS_InterfaceGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_Interface_Source_RTS_Interface_RTS_InterfaceGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
