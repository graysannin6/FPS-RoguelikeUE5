// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSRoguelike/SMagicProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMagicProjectile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	FPSROGUELIKE_API UClass* Z_Construct_UClass_ASMagicProjectile();
	FPSROGUELIKE_API UClass* Z_Construct_UClass_ASMagicProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSRoguelike();
// End Cross Module References
	void ASMagicProjectile::StaticRegisterNativesASMagicProjectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASMagicProjectile);
	UClass* Z_Construct_UClass_ASMagicProjectile_NoRegister()
	{
		return ASMagicProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ASMagicProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SphereComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EffectComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASMagicProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSRoguelike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASMagicProjectile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMagicProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SMagicProjectile.h" },
		{ "ModuleRelativePath", "SMagicProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "SMagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SMagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASMagicProjectile, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_SphereComp_MetaData), Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_SphereComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_MovementComp_MetaData[] = {
		{ "Category", "SMagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SMagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASMagicProjectile, MovementComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_MovementComp_MetaData), Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_MovementComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_EffectComp_MetaData[] = {
		{ "Category", "SMagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SMagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_EffectComp = { "EffectComp", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASMagicProjectile, EffectComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_EffectComp_MetaData), Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_EffectComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASMagicProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_SphereComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_MovementComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_EffectComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASMagicProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMagicProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASMagicProjectile_Statics::ClassParams = {
		&ASMagicProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASMagicProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASMagicProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASMagicProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ASMagicProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASMagicProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASMagicProjectile()
	{
		if (!Z_Registration_Info_UClass_ASMagicProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASMagicProjectile.OuterSingleton, Z_Construct_UClass_ASMagicProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASMagicProjectile.OuterSingleton;
	}
	template<> FPSROGUELIKE_API UClass* StaticClass<ASMagicProjectile>()
	{
		return ASMagicProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASMagicProjectile);
	ASMagicProjectile::~ASMagicProjectile() {}
	struct Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_SMagicProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_SMagicProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASMagicProjectile, ASMagicProjectile::StaticClass, TEXT("ASMagicProjectile"), &Z_Registration_Info_UClass_ASMagicProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASMagicProjectile), 135852264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_SMagicProjectile_h_3856208777(TEXT("/Script/FPSRoguelike"),
		Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_SMagicProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_SMagicProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
