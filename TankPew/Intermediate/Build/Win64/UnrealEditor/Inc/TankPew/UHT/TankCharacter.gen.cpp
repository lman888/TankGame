// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TankPew/TankCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	TANKPEW_API UClass* Z_Construct_UClass_ATankCharacter();
	TANKPEW_API UClass* Z_Construct_UClass_ATankCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TankPew();
// End Cross Module References
	void ATankCharacter::StaticRegisterNativesATankCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankCharacter);
	UClass* Z_Construct_UClass_ATankCharacter_NoRegister()
	{
		return ATankCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATankCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TankPew,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TankCharacter.h" },
		{ "ModuleRelativePath", "TankCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankCharacter_Statics::ClassParams = {
		&ATankCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankCharacter()
	{
		if (!Z_Registration_Info_UClass_ATankCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankCharacter.OuterSingleton, Z_Construct_UClass_ATankCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankCharacter.OuterSingleton;
	}
	template<> TANKPEW_API UClass* StaticClass<ATankCharacter>()
	{
		return ATankCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankCharacter);
	ATankCharacter::~ATankCharacter() {}
	struct Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_TankCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_TankCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankCharacter, ATankCharacter::StaticClass, TEXT("ATankCharacter"), &Z_Registration_Info_UClass_ATankCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankCharacter), 2374193578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_TankCharacter_h_2678750153(TEXT("/Script/TankPew"),
		Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_TankCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_TankCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
