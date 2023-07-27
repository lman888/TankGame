// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TankPew/TankPewGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPewGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TANKPEW_API UClass* Z_Construct_UClass_ATankPewGameModeBase();
	TANKPEW_API UClass* Z_Construct_UClass_ATankPewGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TankPew();
// End Cross Module References
	struct TankPewGameModeBase_eventGameOver_Parms
	{
		bool aWonGame;
	};
	static FName NAME_ATankPewGameModeBase_GameOver = FName(TEXT("GameOver"));
	void ATankPewGameModeBase::GameOver(bool aWonGame)
	{
		TankPewGameModeBase_eventGameOver_Parms Parms;
		Parms.aWonGame=aWonGame ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATankPewGameModeBase_GameOver),&Parms);
	}
	static FName NAME_ATankPewGameModeBase_StartGame = FName(TEXT("StartGame"));
	void ATankPewGameModeBase::StartGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATankPewGameModeBase_StartGame),NULL);
	}
	void ATankPewGameModeBase::StaticRegisterNativesATankPewGameModeBase()
	{
	}
	struct Z_Construct_UFunction_ATankPewGameModeBase_GameOver_Statics
	{
		static void NewProp_aWonGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_aWonGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATankPewGameModeBase_GameOver_Statics::NewProp_aWonGame_SetBit(void* Obj)
	{
		((TankPewGameModeBase_eventGameOver_Parms*)Obj)->aWonGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATankPewGameModeBase_GameOver_Statics::NewProp_aWonGame = { "aWonGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TankPewGameModeBase_eventGameOver_Parms), &Z_Construct_UFunction_ATankPewGameModeBase_GameOver_Statics::NewProp_aWonGame_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPewGameModeBase_GameOver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPewGameModeBase_GameOver_Statics::NewProp_aWonGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPewGameModeBase_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPewGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPewGameModeBase_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPewGameModeBase, nullptr, "GameOver", nullptr, nullptr, sizeof(TankPewGameModeBase_eventGameOver_Parms), Z_Construct_UFunction_ATankPewGameModeBase_GameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPewGameModeBase_GameOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPewGameModeBase_GameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPewGameModeBase_GameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPewGameModeBase_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankPewGameModeBase_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPewGameModeBase_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPewGameModeBase_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPewGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPewGameModeBase_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPewGameModeBase, nullptr, "StartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPewGameModeBase_StartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPewGameModeBase_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPewGameModeBase_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankPewGameModeBase_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankPewGameModeBase);
	UClass* Z_Construct_UClass_ATankPewGameModeBase_NoRegister()
	{
		return ATankPewGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATankPewGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankPewGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TankPew,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankPewGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankPewGameModeBase_GameOver, "GameOver" }, // 4103553766
		{ &Z_Construct_UFunction_ATankPewGameModeBase_StartGame, "StartGame" }, // 2421427646
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPewGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TankPewGameModeBase.h" },
		{ "ModuleRelativePath", "TankPewGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankPewGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankPewGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankPewGameModeBase_Statics::ClassParams = {
		&ATankPewGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATankPewGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPewGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankPewGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATankPewGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankPewGameModeBase.OuterSingleton, Z_Construct_UClass_ATankPewGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankPewGameModeBase.OuterSingleton;
	}
	template<> TANKPEW_API UClass* StaticClass<ATankPewGameModeBase>()
	{
		return ATankPewGameModeBase::StaticClass();
	}
	ATankPewGameModeBase::ATankPewGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPewGameModeBase);
	ATankPewGameModeBase::~ATankPewGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_TankPewGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_TankPewGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankPewGameModeBase, ATankPewGameModeBase::StaticClass, TEXT("ATankPewGameModeBase"), &Z_Registration_Info_UClass_ATankPewGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankPewGameModeBase), 3169298377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_TankPewGameModeBase_h_2220656119(TEXT("/Script/TankPew"),
		Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_TankPewGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TankPew_Source_TankPew_TankPewGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
