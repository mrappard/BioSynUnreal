// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BIOSYGN_BiosygnBPLibrary_generated_h
#error "BiosygnBPLibrary.generated.h already included, missing '#pragma once' in BiosygnBPLibrary.h"
#endif
#define BIOSYGN_BiosygnBPLibrary_generated_h

#define BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUploadData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBiosygnBPLibrary::UploadData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenSession) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBiosygnBPLibrary::OpenSession(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeartRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UBiosygnBPLibrary::GetHeartRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_userKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBiosygnBPLibrary::SetKey(Z_Param_userKey); \
		P_NATIVE_END; \
	}


#define BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUploadData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBiosygnBPLibrary::UploadData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenSession) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBiosygnBPLibrary::OpenSession(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeartRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UBiosygnBPLibrary::GetHeartRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_userKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBiosygnBPLibrary::SetKey(Z_Param_userKey); \
		P_NATIVE_END; \
	}


#define BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUBiosygnBPLibrary(); \
	friend BIOSYGN_API class UClass* Z_Construct_UClass_UBiosygnBPLibrary(); \
	public: \
	DECLARE_CLASS(UBiosygnBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Biosygn"), NO_API) \
	DECLARE_SERIALIZER(UBiosygnBPLibrary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_INCLASS \
	private: \
	static void StaticRegisterNativesUBiosygnBPLibrary(); \
	friend BIOSYGN_API class UClass* Z_Construct_UClass_UBiosygnBPLibrary(); \
	public: \
	DECLARE_CLASS(UBiosygnBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Biosygn"), NO_API) \
	DECLARE_SERIALIZER(UBiosygnBPLibrary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBiosygnBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBiosygnBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBiosygnBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBiosygnBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBiosygnBPLibrary(UBiosygnBPLibrary&&); \
	NO_API UBiosygnBPLibrary(const UBiosygnBPLibrary&); \
public:


#define BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBiosygnBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBiosygnBPLibrary(UBiosygnBPLibrary&&); \
	NO_API UBiosygnBPLibrary(const UBiosygnBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBiosygnBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBiosygnBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBiosygnBPLibrary)


#define BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_25_PROLOG
#define BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_RPC_WRAPPERS \
	BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_INCLASS \
	BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BiosygnBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BioSyn_Plugins_Biosygn_Source_Biosygn_Public_BiosygnBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS