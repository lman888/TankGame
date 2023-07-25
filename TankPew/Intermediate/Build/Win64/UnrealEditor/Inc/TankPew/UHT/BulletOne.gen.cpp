// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TankPew/BulletOne.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulletOne() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TANKPEW_API UClass* Z_Construct_UClass_ABulletOne();
	TANKPEW_API UClass* Z_Construct_UClass_ABulletOne_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TankPew();
// End Cross Module References
	DEFINE_FUNCTION(ABulletOne::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_aHitComp);
		P_GET_OBJECT(AActor,Z_Param_aOtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_aOtherComp);
		P_GET_STRUCT(FVector,Z_Param_aNormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_aHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_aHitComp,Z_Param_aOtherActor,Z_Param_aOtherComp,Z_Param_aNormalImpulse,Z_Param_Out_aHit);
		P_NATIVE_END;
	}
	void ABulletOne::StaticRegisterNativesABulletOne()
	{
		UClass* Class = ABulletOne::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &ABulletOne::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABulletOne_OnHit_Statics
	{
		struct BulletOne_eventOnHit_Parms
		{
			UPrimitiveComponent* aHitComp;
			AActor* aOtherActor;
			UPrimitiveComponent* aOtherComp;
			FVector aNormalImpulse;
			FHitResult aHit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aHitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aHitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aOtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aOtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aOtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_aNormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aHit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_aHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aHitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aHitComp = { "aHitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BulletOne_eventOnHit_Parms, aHitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aHitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aHitComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aOtherActor = { "aOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BulletOne_eventOnHit_Parms, aOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aOtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aOtherComp = { "aOtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BulletOne_eventOnHit_Parms, aOtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aOtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aOtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aNormalImpulse = { "aNormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BulletOne_eventOnHit_Parms, aNormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aHit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aHit = { "aHit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BulletOne_eventOnHit_Parms, aHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aHit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABulletOne_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aHitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aOtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aOtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aNormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletOne_OnHit_Statics::NewProp_aHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABulletOne_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BulletOne.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABulletOne_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABulletOne, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABulletOne_OnHit_Statics::BulletOne_eventOnHit_Parms), Z_Construct_UFunction_ABulletOne_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletOne_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABulletOne_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletOne_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABulletOne_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABulletOne_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABulletOne);
	UClass* Z_Construct_UClass_ABulletOne_NoRegister()
	{
		return ABulletOne::StaticClass();
	}
	struct Z_Construct_UClass_ABulletOne_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bulletBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_projComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_projComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABulletOne_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TankPew,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABulletOne_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABulletOne_OnHit, "OnHit" }, // 143211114
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletOne_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BulletOne.h" },
		{ "ModuleRelativePath", "BulletOne.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletOne_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "BulletOne" },
		{ "ModuleRelativePath", "BulletOne.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletOne_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABulletOne, damage), METADATA_PARAMS(Z_Construct_UClass_ABulletOne_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABulletOne_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletOne_Statics::NewProp_bulletBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BulletOne.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABulletOne_Statics::NewProp_bulletBase = { "bulletBase", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABulletOne, bulletBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABulletOne_Statics::NewProp_bulletBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABulletOne_Statics::NewProp_bulletBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletOne_Statics::NewProp_projComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BulletOne.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABulletOne_Statics::NewProp_projComp = { "projComp", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABulletOne, projComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABulletOne_Statics::NewProp_projComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABulletOne_Statics::NewProp_projComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABulletOne_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletOne_Statics::NewProp_damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletOne_Statics::NewProp_bulletBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletOne_Statics::NewProp_projComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABulletOne_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABulletOne>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABulletOne_Statics::ClassParams = {
		&ABulletOne::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABulletOne_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABulletOne_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABulletOne_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABulletOne_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABulletOne()
	{
		if (!Z_Registration_Info_UClass_ABulletOne.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABulletOne.OuterSingleton, Z_Construct_UClass_ABulletOne_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABulletOne.OuterSingleton;
	}
	template<> TANKPEW_API UClass* StaticClass<ABulletOne>()
	{
		return ABulletOne::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABulletOne);
	ABulletOne::~ABulletOne() {}
	struct Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_BulletOne_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_BulletOne_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABulletOne, ABulletOne::StaticClass, TEXT("ABulletOne"), &Z_Registration_Info_UClass_ABulletOne, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABulletOne), 4274425538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_BulletOne_h_522335508(TEXT("/Script/TankPew"),
		Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_BulletOne_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_BulletOne_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
