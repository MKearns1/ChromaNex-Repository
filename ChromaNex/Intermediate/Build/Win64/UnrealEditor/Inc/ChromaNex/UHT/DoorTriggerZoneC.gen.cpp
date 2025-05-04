// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChromaNex/DoorTriggerZoneC.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorTriggerZoneC() {}
// Cross Module References
	CHROMANEX_API UClass* Z_Construct_UClass_ADoorTriggerZoneC();
	CHROMANEX_API UClass* Z_Construct_UClass_ADoorTriggerZoneC_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_ChromaNex();
// End Cross Module References
	DEFINE_FUNCTION(ADoorTriggerZoneC::execOnBoxBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBoxBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ADoorTriggerZoneC::StaticRegisterNativesADoorTriggerZoneC()
	{
		UClass* Class = ADoorTriggerZoneC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBoxBeginOverlap", &ADoorTriggerZoneC::execOnBoxBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics
	{
		struct DoorTriggerZoneC_eventOnBoxBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorTriggerZoneC_eventOnBoxBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorTriggerZoneC_eventOnBoxBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorTriggerZoneC_eventOnBoxBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorTriggerZoneC_eventOnBoxBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((DoorTriggerZoneC_eventOnBoxBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DoorTriggerZoneC_eventOnBoxBeginOverlap_Parms), &Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorTriggerZoneC_eventOnBoxBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorTriggerZoneC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorTriggerZoneC, nullptr, "OnBoxBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::DoorTriggerZoneC_eventOnBoxBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::DoorTriggerZoneC_eventOnBoxBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoorTriggerZoneC);
	UClass* Z_Construct_UClass_ADoorTriggerZoneC_NoRegister()
	{
		return ADoorTriggerZoneC::StaticClass();
	}
	struct Z_Construct_UClass_ADoorTriggerZoneC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorTriggerZoneC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ChromaNex,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorTriggerZoneC_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ADoorTriggerZoneC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoorTriggerZoneC_OnBoxBeginOverlap, "OnBoxBeginOverlap" }, // 2682676328
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorTriggerZoneC_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorTriggerZoneC_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DoorTriggerZoneC.h" },
		{ "ModuleRelativePath", "DoorTriggerZoneC.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorTriggerZoneC_Statics::NewProp_Box_MetaData[] = {
		{ "Category", "Trigger" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Make the TriggerBox visible to Blueprints and the editor\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorTriggerZoneC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make the TriggerBox visible to Blueprints and the editor" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorTriggerZoneC_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorTriggerZoneC, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorTriggerZoneC_Statics::NewProp_Box_MetaData), Z_Construct_UClass_ADoorTriggerZoneC_Statics::NewProp_Box_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorTriggerZoneC_Statics::NewProp_BoxComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorTriggerZoneC.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorTriggerZoneC_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorTriggerZoneC, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorTriggerZoneC_Statics::NewProp_BoxComp_MetaData), Z_Construct_UClass_ADoorTriggerZoneC_Statics::NewProp_BoxComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorTriggerZoneC_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorTriggerZoneC.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorTriggerZoneC_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorTriggerZoneC, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorTriggerZoneC_Statics::NewProp_BaseMesh_MetaData), Z_Construct_UClass_ADoorTriggerZoneC_Statics::NewProp_BaseMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorTriggerZoneC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorTriggerZoneC_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorTriggerZoneC_Statics::NewProp_BoxComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorTriggerZoneC_Statics::NewProp_BaseMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorTriggerZoneC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorTriggerZoneC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorTriggerZoneC_Statics::ClassParams = {
		&ADoorTriggerZoneC::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADoorTriggerZoneC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoorTriggerZoneC_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorTriggerZoneC_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoorTriggerZoneC_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorTriggerZoneC_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADoorTriggerZoneC()
	{
		if (!Z_Registration_Info_UClass_ADoorTriggerZoneC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorTriggerZoneC.OuterSingleton, Z_Construct_UClass_ADoorTriggerZoneC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoorTriggerZoneC.OuterSingleton;
	}
	template<> CHROMANEX_API UClass* StaticClass<ADoorTriggerZoneC>()
	{
		return ADoorTriggerZoneC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorTriggerZoneC);
	ADoorTriggerZoneC::~ADoorTriggerZoneC() {}
	struct Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_DoorTriggerZoneC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_DoorTriggerZoneC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoorTriggerZoneC, ADoorTriggerZoneC::StaticClass, TEXT("ADoorTriggerZoneC"), &Z_Registration_Info_UClass_ADoorTriggerZoneC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorTriggerZoneC), 3987390820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_DoorTriggerZoneC_h_1933702777(TEXT("/Script/ChromaNex"),
		Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_DoorTriggerZoneC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_milor_Documents_GitHub_ChromaNex_Repository_ChromaNex_Source_ChromaNex_DoorTriggerZoneC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
