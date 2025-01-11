// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_HUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_INTERFACE_C_HUD_generated_h
#error "C_HUD.generated.h already included, missing '#pragma once' in C_HUD.h"
#endif
#define RTS_INTERFACE_C_HUD_generated_h

#define FID_RTS_Interface_Source_RTS_Interface_C_HUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_HUD(); \
	friend struct Z_Construct_UClass_AC_HUD_Statics; \
public: \
	DECLARE_CLASS(AC_HUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS_Interface"), NO_API) \
	DECLARE_SERIALIZER(AC_HUD)


#define FID_RTS_Interface_Source_RTS_Interface_C_HUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC_HUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AC_HUD(AC_HUD&&); \
	AC_HUD(const AC_HUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_HUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_HUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC_HUD) \
	NO_API virtual ~AC_HUD();


#define FID_RTS_Interface_Source_RTS_Interface_C_HUD_h_12_PROLOG
#define FID_RTS_Interface_Source_RTS_Interface_C_HUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_Interface_Source_RTS_Interface_C_HUD_h_15_INCLASS_NO_PURE_DECLS \
	FID_RTS_Interface_Source_RTS_Interface_C_HUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_INTERFACE_API UClass* StaticClass<class AC_HUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_Interface_Source_RTS_Interface_C_HUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
