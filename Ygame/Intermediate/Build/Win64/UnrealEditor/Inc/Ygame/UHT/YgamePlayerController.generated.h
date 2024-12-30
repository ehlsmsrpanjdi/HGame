// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YgamePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YGAME_YgamePlayerController_generated_h
#error "YgamePlayerController.generated.h already included, missing '#pragma once' in YgamePlayerController.h"
#endif
#define YGAME_YgamePlayerController_generated_h

#define FID_Ygame_Source_Ygame_YgamePlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAYgamePlayerController(); \
	friend struct Z_Construct_UClass_AYgamePlayerController_Statics; \
public: \
	DECLARE_CLASS(AYgamePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ygame"), NO_API) \
	DECLARE_SERIALIZER(AYgamePlayerController)


#define FID_Ygame_Source_Ygame_YgamePlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AYgamePlayerController(AYgamePlayerController&&); \
	AYgamePlayerController(const AYgamePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AYgamePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYgamePlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AYgamePlayerController) \
	NO_API virtual ~AYgamePlayerController();


#define FID_Ygame_Source_Ygame_YgamePlayerController_h_17_PROLOG
#define FID_Ygame_Source_Ygame_YgamePlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ygame_Source_Ygame_YgamePlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Ygame_Source_Ygame_YgamePlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YGAME_API UClass* StaticClass<class AYgamePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ygame_Source_Ygame_YgamePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
