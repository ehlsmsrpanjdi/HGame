// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Unit/CameraPawn/CameraPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YGAME_CameraPawn_generated_h
#error "CameraPawn.generated.h already included, missing '#pragma once' in CameraPawn.h"
#endif
#define YGAME_CameraPawn_generated_h

#define FID_Ygame_Source_Ygame_Unit_CameraPawn_CameraPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraPawn(); \
	friend struct Z_Construct_UClass_ACameraPawn_Statics; \
public: \
	DECLARE_CLASS(ACameraPawn, ABasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ygame"), NO_API) \
	DECLARE_SERIALIZER(ACameraPawn)


#define FID_Ygame_Source_Ygame_Unit_CameraPawn_CameraPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACameraPawn(ACameraPawn&&); \
	ACameraPawn(const ACameraPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraPawn) \
	NO_API virtual ~ACameraPawn();


#define FID_Ygame_Source_Ygame_Unit_CameraPawn_CameraPawn_h_9_PROLOG
#define FID_Ygame_Source_Ygame_Unit_CameraPawn_CameraPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ygame_Source_Ygame_Unit_CameraPawn_CameraPawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_Ygame_Source_Ygame_Unit_CameraPawn_CameraPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YGAME_API UClass* StaticClass<class ACameraPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ygame_Source_Ygame_Unit_CameraPawn_CameraPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
