// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SerialCom.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USerialCom;
enum class ELineEnd : uint8;
#ifdef SERIALCOM_SerialCom_generated_h
#error "SerialCom.generated.h already included, missing '#pragma once' in SerialCom.h"
#endif
#define SERIALCOM_SerialCom_generated_h

#define FID_SerialCom_54_Plugins_SerialCOM_Source_SERIALCOM_Public_SerialCom_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLineEndToStr); \
	DECLARE_FUNCTION(execGetBaud); \
	DECLARE_FUNCTION(execGetPort); \
	DECLARE_FUNCTION(execIsOpened); \
	DECLARE_FUNCTION(execFlush); \
	DECLARE_FUNCTION(execWriteBytes); \
	DECLARE_FUNCTION(execWriteByte); \
	DECLARE_FUNCTION(execWriteInt); \
	DECLARE_FUNCTION(execWriteFloat); \
	DECLARE_FUNCTION(execPrintln); \
	DECLARE_FUNCTION(execPrint); \
	DECLARE_FUNCTION(execReadBytes); \
	DECLARE_FUNCTION(execReadByte); \
	DECLARE_FUNCTION(execReadInt); \
	DECLARE_FUNCTION(execReadFloat); \
	DECLARE_FUNCTION(execReadln); \
	DECLARE_FUNCTION(execReadString); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOpenWFC); \
	DECLARE_FUNCTION(execFloatToBytes); \
	DECLARE_FUNCTION(execBytesToFloat); \
	DECLARE_FUNCTION(execIntToBytes); \
	DECLARE_FUNCTION(execBytesToInt); \
	DECLARE_FUNCTION(execOpenComPort); \
	DECLARE_FUNCTION(execOpenComPortWithFlowControl);


#define FID_SerialCom_54_Plugins_SerialCOM_Source_SERIALCOM_Public_SerialCom_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSerialCom(); \
	friend struct Z_Construct_UClass_USerialCom_Statics; \
public: \
	DECLARE_CLASS(USerialCom, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SERIALCOM"), NO_API) \
	DECLARE_SERIALIZER(USerialCom)


#define FID_SerialCom_54_Plugins_SerialCOM_Source_SERIALCOM_Public_SerialCom_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USerialCom(USerialCom&&); \
	USerialCom(const USerialCom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USerialCom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USerialCom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USerialCom)


#define FID_SerialCom_54_Plugins_SerialCOM_Source_SERIALCOM_Public_SerialCom_h_29_PROLOG
#define FID_SerialCom_54_Plugins_SerialCOM_Source_SERIALCOM_Public_SerialCom_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SerialCom_54_Plugins_SerialCOM_Source_SERIALCOM_Public_SerialCom_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SerialCom_54_Plugins_SerialCOM_Source_SERIALCOM_Public_SerialCom_h_32_INCLASS_NO_PURE_DECLS \
	FID_SerialCom_54_Plugins_SerialCOM_Source_SERIALCOM_Public_SerialCom_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SERIALCOM_API UClass* StaticClass<class USerialCom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SerialCom_54_Plugins_SerialCOM_Source_SERIALCOM_Public_SerialCom_h


#define FOREACH_ENUM_ELINEEND(op) \
	op(ELineEnd::rn) \
	op(ELineEnd::n) \
	op(ELineEnd::r) \
	op(ELineEnd::nr) 

enum class ELineEnd : uint8;
template<> struct TIsUEnumClass<ELineEnd> { enum { Value = true }; };
template<> SERIALCOM_API UEnum* StaticEnum<ELineEnd>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
