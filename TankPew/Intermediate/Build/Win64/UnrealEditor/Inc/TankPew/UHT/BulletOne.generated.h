// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BulletOne.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TANKPEW_BulletOne_generated_h
#error "BulletOne.generated.h already included, missing '#pragma once' in BulletOne.h"
#endif
#define TANKPEW_BulletOne_generated_h

#define FID_TankPew_Source_TankPew_BulletOne_h_17_SPARSE_DATA
#define FID_TankPew_Source_TankPew_BulletOne_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_TankPew_Source_TankPew_BulletOne_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_TankPew_Source_TankPew_BulletOne_h_17_ACCESSORS
#define FID_TankPew_Source_TankPew_BulletOne_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABulletOne(); \
	friend struct Z_Construct_UClass_ABulletOne_Statics; \
public: \
	DECLARE_CLASS(ABulletOne, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankPew"), NO_API) \
	DECLARE_SERIALIZER(ABulletOne)


#define FID_TankPew_Source_TankPew_BulletOne_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABulletOne(); \
	friend struct Z_Construct_UClass_ABulletOne_Statics; \
public: \
	DECLARE_CLASS(ABulletOne, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankPew"), NO_API) \
	DECLARE_SERIALIZER(ABulletOne)


#define FID_TankPew_Source_TankPew_BulletOne_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABulletOne(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABulletOne) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletOne); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletOne); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletOne(ABulletOne&&); \
	NO_API ABulletOne(const ABulletOne&); \
public: \
	NO_API virtual ~ABulletOne();


#define FID_TankPew_Source_TankPew_BulletOne_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletOne(ABulletOne&&); \
	NO_API ABulletOne(const ABulletOne&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletOne); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletOne); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABulletOne) \
	NO_API virtual ~ABulletOne();


#define FID_TankPew_Source_TankPew_BulletOne_h_14_PROLOG
#define FID_TankPew_Source_TankPew_BulletOne_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TankPew_Source_TankPew_BulletOne_h_17_SPARSE_DATA \
	FID_TankPew_Source_TankPew_BulletOne_h_17_RPC_WRAPPERS \
	FID_TankPew_Source_TankPew_BulletOne_h_17_ACCESSORS \
	FID_TankPew_Source_TankPew_BulletOne_h_17_INCLASS \
	FID_TankPew_Source_TankPew_BulletOne_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TankPew_Source_TankPew_BulletOne_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TankPew_Source_TankPew_BulletOne_h_17_SPARSE_DATA \
	FID_TankPew_Source_TankPew_BulletOne_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TankPew_Source_TankPew_BulletOne_h_17_ACCESSORS \
	FID_TankPew_Source_TankPew_BulletOne_h_17_INCLASS_NO_PURE_DECLS \
	FID_TankPew_Source_TankPew_BulletOne_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKPEW_API UClass* StaticClass<class ABulletOne>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TankPew_Source_TankPew_BulletOne_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
