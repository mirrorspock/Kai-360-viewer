#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// cameraControl
struct cameraControl_t3612597386;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t204726726;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t3184215888;
// UnityEngine.GameObject
struct GameObject_t4018607952;
// UnityEngine.Transform
struct Transform_t3019042734;
// CameraRotateUsingPhoneGyro
struct CameraRotateUsingPhoneGyro_t1316817005;
// UnityEngine.Gyroscope
struct Gyroscope_t431027241;
// System.Char[]
struct CharU5BU5D_t2360941099;
// System.Void
struct Void_t104651702;

extern RuntimeClass* Input_t1282070665_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t3666708283_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2766878917;
extern Il2CppCodeGenString* _stringLiteral1388633526;
extern const uint32_t cameraControl_Update_m3590620429_MetadataUsageId;
extern RuntimeClass* Debug_t3766656709_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3615686699;
extern Il2CppCodeGenString* _stringLiteral1938569070;
extern const uint32_t CameraRotateUsingPhoneGyro_Awake_m14828845_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2932092500;
extern const uint32_t CameraRotateUsingPhoneGyro_Update_m630184143_MetadataUsageId;



#ifndef U3CMODULEU3E_T1370660578_H
#define U3CMODULEU3E_T1370660578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1370660578 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T1370660578_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T909072249_H
#define VALUETYPE_T909072249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t909072249  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t909072249_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t909072249_marshaled_com
{
};
#endif // VALUETYPE_T909072249_H
#ifndef GYROSCOPE_T431027241_H
#define GYROSCOPE_T431027241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gyroscope
struct  Gyroscope_t431027241  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Gyroscope::m_GyroIndex
	int32_t ___m_GyroIndex_0;

public:
	inline static int32_t get_offset_of_m_GyroIndex_0() { return static_cast<int32_t>(offsetof(Gyroscope_t431027241, ___m_GyroIndex_0)); }
	inline int32_t get_m_GyroIndex_0() const { return ___m_GyroIndex_0; }
	inline int32_t* get_address_of_m_GyroIndex_0() { return &___m_GyroIndex_0; }
	inline void set_m_GyroIndex_0(int32_t value)
	{
		___m_GyroIndex_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROSCOPE_T431027241_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t2360941099* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t2360941099* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t2360941099** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t2360941099* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENUM_T4180391789_H
#define ENUM_T4180391789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4180391789  : public ValueType_t909072249
{
public:

public:
};

struct Enum_t4180391789_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2360941099* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4180391789_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2360941099* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2360941099** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2360941099* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4180391789_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4180391789_marshaled_com
{
};
#endif // ENUM_T4180391789_H
#ifndef INT32_T3237847364_H
#define INT32_T3237847364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t3237847364 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t3237847364, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T3237847364_H
#ifndef BOOLEAN_T2458990001_H
#define BOOLEAN_T2458990001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t2458990001 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t2458990001, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t2458990001_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t2458990001_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t2458990001_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T2458990001_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef QUATERNION_T3666708283_H
#define QUATERNION_T3666708283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t3666708283 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t3666708283, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t3666708283, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t3666708283, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t3666708283, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t3666708283_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t3666708283  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t3666708283_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t3666708283  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t3666708283 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t3666708283  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T3666708283_H
#ifndef SINGLE_T1655379136_H
#define SINGLE_T1655379136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1655379136 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1655379136, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1655379136_H
#ifndef VOID_T104651702_H
#define VOID_T104651702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t104651702 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T104651702_H
#ifndef VECTOR3_T2548818909_H
#define VECTOR3_T2548818909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2548818909 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t2548818909, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t2548818909, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t2548818909, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t2548818909_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2548818909  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2548818909  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2548818909  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2548818909  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2548818909  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2548818909  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2548818909  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2548818909  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2548818909  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2548818909  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t2548818909_StaticFields, ___zeroVector_3)); }
	inline Vector3_t2548818909  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t2548818909 * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t2548818909  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2548818909_StaticFields, ___oneVector_4)); }
	inline Vector3_t2548818909  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t2548818909 * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t2548818909  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2548818909_StaticFields, ___upVector_5)); }
	inline Vector3_t2548818909  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t2548818909 * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t2548818909  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2548818909_StaticFields, ___downVector_6)); }
	inline Vector3_t2548818909  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t2548818909 * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t2548818909  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2548818909_StaticFields, ___leftVector_7)); }
	inline Vector3_t2548818909  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t2548818909 * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t2548818909  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2548818909_StaticFields, ___rightVector_8)); }
	inline Vector3_t2548818909  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t2548818909 * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t2548818909  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2548818909_StaticFields, ___forwardVector_9)); }
	inline Vector3_t2548818909  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t2548818909 * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t2548818909  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2548818909_StaticFields, ___backVector_10)); }
	inline Vector3_t2548818909  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t2548818909 * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t2548818909  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2548818909_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t2548818909  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t2548818909 * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t2548818909  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2548818909_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t2548818909  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t2548818909 * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t2548818909  value)
	{
		___negativeInfinityVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2548818909_H
#ifndef RUNTIMEPLATFORM_T3214462118_H
#define RUNTIMEPLATFORM_T3214462118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t3214462118 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t3214462118, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPLATFORM_T3214462118_H
#ifndef OBJECT_T497757222_H
#define OBJECT_T497757222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t497757222  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t497757222, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t497757222_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t497757222_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t497757222_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t497757222_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T497757222_H
#ifndef COMPONENT_T3184215888_H
#define COMPONENT_T3184215888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3184215888  : public Object_t497757222
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3184215888_H
#ifndef GAMEOBJECT_T4018607952_H
#define GAMEOBJECT_T4018607952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t4018607952  : public Object_t497757222
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T4018607952_H
#ifndef TRANSFORM_T3019042734_H
#define TRANSFORM_T3019042734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3019042734  : public Component_t3184215888
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3019042734_H
#ifndef BEHAVIOUR_T3838020753_H
#define BEHAVIOUR_T3838020753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t3838020753  : public Component_t3184215888
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T3838020753_H
#ifndef MONOBEHAVIOUR_T204726726_H
#define MONOBEHAVIOUR_T204726726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t204726726  : public Behaviour_t3838020753
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T204726726_H
#ifndef CAMERAROTATEUSINGPHONEGYRO_T1316817005_H
#define CAMERAROTATEUSINGPHONEGYRO_T1316817005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraRotateUsingPhoneGyro
struct  CameraRotateUsingPhoneGyro_t1316817005  : public MonoBehaviour_t204726726
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAROTATEUSINGPHONEGYRO_T1316817005_H
#ifndef CAMERACONTROL_T3612597386_H
#define CAMERACONTROL_T3612597386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cameraControl
struct  cameraControl_t3612597386  : public MonoBehaviour_t204726726
{
public:
	// System.Single cameraControl::rotateSpeed
	float ___rotateSpeed_2;

public:
	inline static int32_t get_offset_of_rotateSpeed_2() { return static_cast<int32_t>(offsetof(cameraControl_t3612597386, ___rotateSpeed_2)); }
	inline float get_rotateSpeed_2() const { return ___rotateSpeed_2; }
	inline float* get_address_of_rotateSpeed_2() { return &___rotateSpeed_2; }
	inline void set_rotateSpeed_2(float value)
	{
		___rotateSpeed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACONTROL_T3612597386_H



// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m3986582220 (MonoBehaviour_t204726726 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m1845765145 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m3896390109 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m1488734487 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t4018607952 * Component_get_gameObject_m701691310 (Component_t3184215888 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3019042734 * GameObject_get_transform_m1124158711 (GameObject_t4018607952 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Rotate_m3171633786 (Transform_t3019042734 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t3666708283  Transform_get_rotation_m753480624 (Transform_t3019042734 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C"  Vector3_t2548818909  Quaternion_get_eulerAngles_m2933748195 (Quaternion_t3666708283 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C"  Quaternion_t3666708283  Quaternion_Euler_m1019900971 (RuntimeObject * __this /* static, unused */, Vector3_t2548818909  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m1897927057 (Transform_t3019042734 * __this, Quaternion_t3666708283  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::get_supportsGyroscope()
extern "C"  bool SystemInfo_get_supportsGyroscope_m2495038120 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m581448688 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C"  int32_t Application_get_platform_m2469680019 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Gyroscope UnityEngine.Input::get_gyro()
extern "C"  Gyroscope_t431027241 * Input_get_gyro_m3399319352 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gyroscope::set_enabled(System.Boolean)
extern "C"  void Gyroscope_set_enabled_m852868982 (Gyroscope_t431027241 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Gyroscope::get_attitude()
extern "C"  Quaternion_t3666708283  Gyroscope_get_attitude_m107518036 (Gyroscope_t431027241 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m269358551 (Quaternion_t3666708283 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t3666708283  Quaternion_Euler_m3759465050 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t3666708283  Quaternion_op_Multiply_m3384537562 (RuntimeObject * __this /* static, unused */, Quaternion_t3666708283  p0, Quaternion_t3666708283  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
extern "C"  String_t* Vector3_ToString_m1207408537 (Vector3_t2548818909 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m585696636 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void cameraControl::.ctor()
extern "C"  void cameraControl__ctor_m1985885944 (cameraControl_t3612597386 * __this, const RuntimeMethod* method)
{
	{
		__this->set_rotateSpeed_2((100.0f));
		MonoBehaviour__ctor_m3986582220(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void cameraControl::Update()
extern "C"  void cameraControl_Update_m3590620429 (cameraControl_t3612597386 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cameraControl_Update_m3590620429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t2548818909  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Quaternion_t3666708283  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1282070665_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m1845765145(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_008e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1282070665_il2cpp_TypeInfo_var);
		float L_1 = Input_GetAxis_m3896390109(NULL /*static, unused*/, _stringLiteral2766878917, /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m1488734487(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = __this->get_rotateSpeed_2();
		V_0 = ((float)((float)((float)((float)L_1*(float)L_2))*(float)L_3));
		float L_4 = Input_GetAxis_m3896390109(NULL /*static, unused*/, _stringLiteral1388633526, /*hidden argument*/NULL);
		float L_5 = Time_get_deltaTime_m1488734487(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = __this->get_rotateSpeed_2();
		V_1 = ((float)((float)((float)((float)((-L_4))*(float)L_5))*(float)L_6));
		GameObject_t4018607952 * L_7 = Component_get_gameObject_m701691310(__this, /*hidden argument*/NULL);
		Transform_t3019042734 * L_8 = GameObject_get_transform_m1124158711(L_7, /*hidden argument*/NULL);
		float L_9 = V_0;
		float L_10 = V_1;
		Transform_Rotate_m3171633786(L_8, L_9, L_10, (0.0f), /*hidden argument*/NULL);
		GameObject_t4018607952 * L_11 = Component_get_gameObject_m701691310(__this, /*hidden argument*/NULL);
		Transform_t3019042734 * L_12 = GameObject_get_transform_m1124158711(L_11, /*hidden argument*/NULL);
		Quaternion_t3666708283  L_13 = Transform_get_rotation_m753480624(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		Vector3_t2548818909  L_14 = Quaternion_get_eulerAngles_m2933748195((&V_3), /*hidden argument*/NULL);
		V_2 = L_14;
		(&V_2)->set_z_2((0.0f));
		GameObject_t4018607952 * L_15 = Component_get_gameObject_m701691310(__this, /*hidden argument*/NULL);
		Transform_t3019042734 * L_16 = GameObject_get_transform_m1124158711(L_15, /*hidden argument*/NULL);
		Vector3_t2548818909  L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t3666708283_il2cpp_TypeInfo_var);
		Quaternion_t3666708283  L_18 = Quaternion_Euler_m1019900971(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		Transform_set_rotation_m1897927057(L_16, L_18, /*hidden argument*/NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Void CameraRotateUsingPhoneGyro::.ctor()
extern "C"  void CameraRotateUsingPhoneGyro__ctor_m1192750078 (CameraRotateUsingPhoneGyro_t1316817005 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m3986582220(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraRotateUsingPhoneGyro::Awake()
extern "C"  void CameraRotateUsingPhoneGyro_Awake_m14828845 (CameraRotateUsingPhoneGyro_t1316817005 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraRotateUsingPhoneGyro_Awake_m14828845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = SystemInfo_get_supportsGyroscope_m2495038120(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3766656709_il2cpp_TypeInfo_var);
		Debug_Log_m581448688(NULL /*static, unused*/, _stringLiteral3615686699, /*hidden argument*/NULL);
		int32_t L_1 = Application_get_platform_m2469680019(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = Application_get_platform_m2469680019(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)11))))
		{
			goto IL_0035;
		}
	}

IL_002b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3766656709_il2cpp_TypeInfo_var);
		Debug_Log_m581448688(NULL /*static, unused*/, _stringLiteral1938569070, /*hidden argument*/NULL);
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1282070665_il2cpp_TypeInfo_var);
		Gyroscope_t431027241 * L_3 = Input_get_gyro_m3399319352(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gyroscope_set_enabled_m852868982(L_3, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraRotateUsingPhoneGyro::Update()
extern "C"  void CameraRotateUsingPhoneGyro_Update_m630184143 (CameraRotateUsingPhoneGyro_t1316817005 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraRotateUsingPhoneGyro_Update_m630184143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t3666708283  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t3666708283  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t3666708283  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Quaternion_t3666708283  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Quaternion_t3666708283  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t2548818909  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1282070665_il2cpp_TypeInfo_var);
		Gyroscope_t431027241 * L_0 = Input_get_gyro_m3399319352(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t3666708283  L_1 = Gyroscope_get_attitude_m107518036(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_x_0();
		Gyroscope_t431027241 * L_3 = Input_get_gyro_m3399319352(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t3666708283  L_4 = Gyroscope_get_attitude_m107518036(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = (&V_2)->get_y_1();
		Gyroscope_t431027241 * L_6 = Input_get_gyro_m3399319352(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t3666708283  L_7 = Gyroscope_get_attitude_m107518036(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		float L_8 = (&V_3)->get_z_2();
		Gyroscope_t431027241 * L_9 = Input_get_gyro_m3399319352(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t3666708283  L_10 = Gyroscope_get_attitude_m107518036(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11 = (&V_4)->get_w_3();
		Quaternion__ctor_m269358551((&V_0), L_2, L_5, ((-L_8)), ((-L_11)), /*hidden argument*/NULL);
		GameObject_t4018607952 * L_12 = Component_get_gameObject_m701691310(__this, /*hidden argument*/NULL);
		Transform_t3019042734 * L_13 = GameObject_get_transform_m1124158711(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t3666708283_il2cpp_TypeInfo_var);
		Quaternion_t3666708283  L_14 = Quaternion_Euler_m3759465050(NULL /*static, unused*/, (90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t3666708283  L_15 = V_0;
		Quaternion_t3666708283  L_16 = Quaternion_op_Multiply_m3384537562(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		Transform_set_rotation_m1897927057(L_13, L_16, /*hidden argument*/NULL);
		Vector3_t2548818909  L_17 = Quaternion_get_eulerAngles_m2933748195((&V_0), /*hidden argument*/NULL);
		V_5 = L_17;
		String_t* L_18 = Vector3_ToString_m1207408537((&V_5), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m585696636(NULL /*static, unused*/, _stringLiteral2932092500, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3766656709_il2cpp_TypeInfo_var);
		Debug_Log_m581448688(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
