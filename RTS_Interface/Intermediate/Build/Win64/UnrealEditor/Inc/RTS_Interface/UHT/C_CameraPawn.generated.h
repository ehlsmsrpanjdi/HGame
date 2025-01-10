// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_Game/C_Unit/C_CameraPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_INTERFACE_C_CameraPawn_generated_h
#error "C_CameraPawn.generated.h already included, missing '#pragma once' in C_CameraPawn.h"
#endif
#define RTS_INTERFACE_C_CameraPawn_generated_h

#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_C_CameraPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_CameraPawn(); \
	friend struct Z_Construct_UClass_AC_CameraPawn_Statics; \
public: \
	DECLARE_CLASS(AC_CameraPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS_Interface"), NO_API) \
	DECLARE_SERIALIZER(AC_CameraPawn)


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_C_CameraPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AC_CameraPawn(AC_CameraPawn&&); \
	AC_CameraPawn(const AC_CameraPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_CameraPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_CameraPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_CameraPawn) \
	NO_API virtual ~AC_CameraPawn();


#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_C_CameraPawn_h_9_PROLOG
#define FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_C_CameraPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_C_CameraPawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_C_CameraPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_INTERFACE_API UClass* StaticClass<class AC_CameraPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_Interface_Source_RTS_Interface_C_Game_C_Unit_C_CameraPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
