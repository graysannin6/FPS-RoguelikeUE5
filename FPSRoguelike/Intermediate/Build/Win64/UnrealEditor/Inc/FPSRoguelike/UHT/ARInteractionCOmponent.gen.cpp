// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSRoguelike/ARInteractionCOmponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARInteractionCOmponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FPSROGUELIKE_API UClass* Z_Construct_UClass_UARInteractionCOmponent();
	FPSROGUELIKE_API UClass* Z_Construct_UClass_UARInteractionCOmponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSRoguelike();
// End Cross Module References
	void UARInteractionCOmponent::StaticRegisterNativesUARInteractionCOmponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARInteractionCOmponent);
	UClass* Z_Construct_UClass_UARInteractionCOmponent_NoRegister()
	{
		return UARInteractionCOmponent::StaticClass();
	}
	struct Z_Construct_UClass_UARInteractionCOmponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARInteractionCOmponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSRoguelike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARInteractionCOmponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARInteractionCOmponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ARInteractionCOmponent.h" },
		{ "ModuleRelativePath", "ARInteractionCOmponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARInteractionCOmponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARInteractionCOmponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARInteractionCOmponent_Statics::ClassParams = {
		&UARInteractionCOmponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARInteractionCOmponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UARInteractionCOmponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UARInteractionCOmponent()
	{
		if (!Z_Registration_Info_UClass_UARInteractionCOmponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARInteractionCOmponent.OuterSingleton, Z_Construct_UClass_UARInteractionCOmponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARInteractionCOmponent.OuterSingleton;
	}
	template<> FPSROGUELIKE_API UClass* StaticClass<UARInteractionCOmponent>()
	{
		return UARInteractionCOmponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARInteractionCOmponent);
	UARInteractionCOmponent::~UARInteractionCOmponent() {}
	struct Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARInteractionCOmponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARInteractionCOmponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARInteractionCOmponent, UARInteractionCOmponent::StaticClass, TEXT("UARInteractionCOmponent"), &Z_Registration_Info_UClass_UARInteractionCOmponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARInteractionCOmponent), 3088804305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARInteractionCOmponent_h_1473807153(TEXT("/Script/FPSRoguelike"),
		Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARInteractionCOmponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documentos_GitHub_FPS_RoguelikeUE5_FPSRoguelike_Source_FPSRoguelike_ARInteractionCOmponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
