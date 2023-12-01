// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSRoguelike/ARCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	FPSROGUELIKE_API UClass* Z_Construct_UClass_AARCharacter();
	FPSROGUELIKE_API UClass* Z_Construct_UClass_AARCharacter_NoRegister();
	FPSROGUELIKE_API UClass* Z_Construct_UClass_UARInteractionCOmponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSRoguelike();
// End Cross Module References
	void AARCharacter::StaticRegisterNativesAARCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AARCharacter);
	UClass* Z_Construct_UClass_AARCharacter_NoRegister()
	{
		return AARCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AARCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpringArmComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InteractionComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSRoguelike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ARCharacter.h" },
		{ "ModuleRelativePath", "ARCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "ARCharacter" },
		{ "ModuleRelativePath", "ARCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AARCharacter, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_AARCharacter_Statics::NewProp_ProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "ARCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ARCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AARCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_SpringArmComp_MetaData), Z_Construct_UClass_AARCharacter_Statics::NewProp_SpringArmComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "ARCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ARCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AARCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_CameraComp_MetaData), Z_Construct_UClass_AARCharacter_Statics::NewProp_CameraComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_InteractionComp_MetaData[] = {
		{ "Category", "ARCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ARCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AARCharacter, InteractionComp), Z_Construct_UClass_UARInteractionCOmponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_InteractionComp_MetaData), Z_Construct_UClass_AARCharacter_Statics::NewProp_InteractionComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_SpringArmComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_CameraComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_InteractionComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AARCharacter_Statics::ClassParams = {
		&AARCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AARCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AARCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AARCharacter()
	{
		if (!Z_Registration_Info_UClass_AARCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AARCharacter.OuterSingleton, Z_Construct_UClass_AARCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AARCharacter.OuterSingleton;
	}
	template<> FPSROGUELIKE_API UClass* StaticClass<AARCharacter>()
	{
		return AARCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARCharacter);
	AARCharacter::~AARCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AARCharacter, AARCharacter::StaticClass, TEXT("AARCharacter"), &Z_Registration_Info_UClass_AARCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARCharacter), 1704439177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARCharacter_h_2384464428(TEXT("/Script/FPSRoguelike"),
		Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
