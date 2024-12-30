// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YgameGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YGAME_YgameGameMode_generated_h
#error "YgameGameMode.generated.h already included, missing '#pragma once' in YgameGameMode.h"
#endif
#define YGAME_YgameGameMode_generated_h

#define FID_Ygame_Source_Ygame_YgameGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAYgameGameMode(); \
	friend struct Z_Construct_UClass_AYgameGameMode_Statics; \
public: \
	DECLARE_CLASS(AYgameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ygame"), YGAME_API) \
	DECLARE_SERIALIZER(AYgameGameMode)


#define FID_Ygame_Source_Ygame_YgameGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AYgameGameMode(AYgameGameMode&&); \
	AYgameGameMode(const AYgameGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(YGAME_API, AYgameGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYgameGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AYgameGameMode) \
	YGAME_API virtual ~AYgameGameMode();


#define FID_Ygame_Source_Ygame_YgameGameMode_h_9_PROLOG
#define FID_Ygame_Source_Ygame_YgameGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ygame_Source_Ygame_YgameGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Ygame_Source_Ygame_YgameGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YGAME_API UClass* StaticClass<class AYgameGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ygame_Source_Ygame_YgameGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
