// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RTS_InterfacePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTS_INTERFACE_RTS_InterfacePlayerController_generated_h
#error "RTS_InterfacePlayerController.generated.h already included, missing '#pragma once' in RTS_InterfacePlayerController.h"
#endif
#define RTS_INTERFACE_RTS_InterfacePlayerController_generated_h

#define FID_RTS_Interface_Source_RTS_Interface_RTS_InterfacePlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMousePos);


#define FID_RTS_Interface_Source_RTS_Interface_RTS_InterfacePlayerController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTS_InterfacePlayerController(); \
	friend struct Z_Construct_UClass_ARTS_InterfacePlayerController_Statics; \
public: \
	DECLARE_CLASS(ARTS_InterfacePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS_Interface"), NO_API) \
	DECLARE_SERIALIZER(ARTS_InterfacePlayerController)


#define FID_RTS_Interface_Source_RTS_Interface_RTS_InterfacePlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARTS_InterfacePlayerController(ARTS_InterfacePlayerController&&); \
	ARTS_InterfacePlayerController(const ARTS_InterfacePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTS_InterfacePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTS_InterfacePlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTS_InterfacePlayerController) \
	NO_API virtual ~ARTS_InterfacePlayerController();


#define FID_RTS_Interface_Source_RTS_Interface_RTS_InterfacePlayerController_h_18_PROLOG
#define FID_RTS_Interface_Source_RTS_Interface_RTS_InterfacePlayerController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_Interface_Source_RTS_Interface_RTS_InterfacePlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTS_Interface_Source_RTS_Interface_RTS_InterfacePlayerController_h_21_INCLASS_NO_PURE_DECLS \
	FID_RTS_Interface_Source_RTS_Interface_RTS_InterfacePlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_INTERFACE_API UClass* StaticClass<class ARTS_InterfacePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_Interface_Source_RTS_Interface_RTS_InterfacePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
