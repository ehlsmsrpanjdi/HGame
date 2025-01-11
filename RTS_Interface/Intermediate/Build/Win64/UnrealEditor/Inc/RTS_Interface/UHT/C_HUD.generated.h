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

#define FID_RTS_Interface_Source_RTS_Interface_C_HUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_HUD(); \
	friend struct Z_Construct_UClass_AC_HUD_Statics; \
public: \
	DECLARE_CLASS(AC_HUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS_Interface"), NO_API) \
	DECLARE_SERIALIZER(AC_HUD) \
	virtual UObject* _getUObject() const override { return const_cast<AC_HUD*>(this); }


#define FID_RTS_Interface_Source_RTS_Interface_C_HUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AC_HUD(AC_HUD&&); \
	AC_HUD(const AC_HUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_HUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_HUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_HUD) \
	NO_API virtual ~AC_HUD();


#define FID_RTS_Interface_Source_RTS_Interface_C_HUD_h_13_PROLOG
#define FID_RTS_Interface_Source_RTS_Interface_C_HUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_Interface_Source_RTS_Interface_C_HUD_h_16_INCLASS_NO_PURE_DECLS \
	FID_RTS_Interface_Source_RTS_Interface_C_HUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_INTERFACE_API UClass* StaticClass<class AC_HUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_Interface_Source_RTS_Interface_C_HUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
