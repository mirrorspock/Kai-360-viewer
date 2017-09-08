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

// System.Collections.SortedList
struct SortedList_t3321904262;
// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t535322324;
// System.IO.TextReader
struct TextReader_t2764901853;
// System.Text.Encoding
struct Encoding_t3706787480;
// System.Type[]
struct TypeU5BU5D_t2440397116;
// System.Type
struct Type_t;
// System.Delegate
struct Delegate_t430756854;
// System.OperatingSystem
struct OperatingSystem_t2253584828;
// System.Boolean[]
struct BooleanU5BU5D_t1854498855;
// System.Text.DecoderFallback
struct DecoderFallback_t1043057282;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t4040458850;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t4266811157;
// System.IntPtr[]
struct IntPtrU5BU5D_t3796628252;
// System.Collections.IDictionary
struct IDictionary_t1193578411;
// System.Collections.ArrayList
struct ArrayList_t2247471208;
// System.Text.EncoderFallback
struct EncoderFallback_t1590054241;
// System.Reflection.Assembly
struct Assembly_t2566424060;
// System.Object[]
struct ObjectU5BU5D_t2358992757;
// System.Security.SecurityContext
struct SecurityContext_t1307182558;
// System.Byte[]
struct ByteU5BU5D_t1907542542;
// System.SByte[]
struct SByteU5BU5D_t106123094;
// System.String[]
struct StringU5BU5D_t3875454715;
// System.Collections.Hashtable
struct Hashtable_t3888042571;
// System.MonoEnumInfo/SByteComparer
struct SByteComparer_t550617552;
// System.MonoEnumInfo/ShortComparer
struct ShortComparer_t3445461946;
// System.MonoEnumInfo/IntComparer
struct IntComparer_t2811315210;
// System.MonoEnumInfo/LongComparer
struct LongComparer_t4136535228;
// System.Char[]
struct CharU5BU5D_t2836172046;
// System.Void
struct Void_t3254505899;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1247106334;
// System.Threading.Timer/Scheduler
struct Scheduler_t1543633277;
// System.Threading.TimerCallback
struct TimerCallback_t3942985471;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t3546309298;
// System.Int32[]
struct Int32U5BU5D_t3115811210;
// System.Security.Policy.Evidence
struct Evidence_t1454212873;
// System.Security.PermissionSet
struct PermissionSet_t1335152259;
// System.Security.Principal.IPrincipal
struct IPrincipal_t1330515355;
// System.AppDomainManager
struct AppDomainManager_t2331159039;
// System.ActivationContext
struct ActivationContext_t204378384;
// System.ApplicationIdentity
struct ApplicationIdentity_t944841144;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t3478766493;
// System.ResolveEventHandler
struct ResolveEventHandler_t102251343;
// System.EventHandler
struct EventHandler_t3080903977;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1653846976;
// System.Runtime.Hosting.ActivationArguments
struct ActivationArguments_t2392823215;
// System.AppDomainInitializer
struct AppDomainInitializer_t655592511;
// System.Security.Policy.ApplicationTrust
struct ApplicationTrust_t3199779743;
// System.Security.SecurityElement
struct SecurityElement_t2419184962;
// System.Threading.ExecutionContext
struct ExecutionContext_t2272822824;
// System.MulticastDelegate
struct MulticastDelegate_t3137754623;




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
#ifndef DECODERFALLBACKBUFFER_T4040458850_H
#define DECODERFALLBACKBUFFER_T4040458850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackBuffer
struct  DecoderFallbackBuffer_t4040458850  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKBUFFER_T4040458850_H
#ifndef SCHEDULER_T1543633277_H
#define SCHEDULER_T1543633277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer/Scheduler
struct  Scheduler_t1543633277  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Threading.Timer/Scheduler::list
	SortedList_t3321904262 * ___list_1;

public:
	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(Scheduler_t1543633277, ___list_1)); }
	inline SortedList_t3321904262 * get_list_1() const { return ___list_1; }
	inline SortedList_t3321904262 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(SortedList_t3321904262 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((&___list_1), value);
	}
};

struct Scheduler_t1543633277_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::instance
	Scheduler_t1543633277 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(Scheduler_t1543633277_StaticFields, ___instance_0)); }
	inline Scheduler_t1543633277 * get_instance_0() const { return ___instance_0; }
	inline Scheduler_t1543633277 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(Scheduler_t1543633277 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEDULER_T1543633277_H
#ifndef ACTIVATIONCONTEXT_T204378384_H
#define ACTIVATIONCONTEXT_T204378384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ActivationContext
struct  ActivationContext_t204378384  : public RuntimeObject
{
public:
	// System.Boolean System.ActivationContext::_disposed
	bool ____disposed_0;

public:
	inline static int32_t get_offset_of__disposed_0() { return static_cast<int32_t>(offsetof(ActivationContext_t204378384, ____disposed_0)); }
	inline bool get__disposed_0() const { return ____disposed_0; }
	inline bool* get_address_of__disposed_0() { return &____disposed_0; }
	inline void set__disposed_0(bool value)
	{
		____disposed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONCONTEXT_T204378384_H
#ifndef ACTIVATOR_T976738423_H
#define ACTIVATOR_T976738423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Activator
struct  Activator_t976738423  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATOR_T976738423_H
#ifndef APPLICATIONIDENTITY_T944841144_H
#define APPLICATIONIDENTITY_T944841144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationIdentity
struct  ApplicationIdentity_t944841144  : public RuntimeObject
{
public:
	// System.String System.ApplicationIdentity::_fullName
	String_t* ____fullName_0;

public:
	inline static int32_t get_offset_of__fullName_0() { return static_cast<int32_t>(offsetof(ApplicationIdentity_t944841144, ____fullName_0)); }
	inline String_t* get__fullName_0() const { return ____fullName_0; }
	inline String_t** get_address_of__fullName_0() { return &____fullName_0; }
	inline void set__fullName_0(String_t* value)
	{
		____fullName_0 = value;
		Il2CppCodeGenWriteBarrier((&____fullName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONIDENTITY_T944841144_H
#ifndef BITCONVERTER_T862681245_H
#define BITCONVERTER_T862681245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BitConverter
struct  BitConverter_t862681245  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t862681245_StaticFields
{
public:
	// System.Boolean System.BitConverter::SwappedWordsInDouble
	bool ___SwappedWordsInDouble_0;
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_1;

public:
	inline static int32_t get_offset_of_SwappedWordsInDouble_0() { return static_cast<int32_t>(offsetof(BitConverter_t862681245_StaticFields, ___SwappedWordsInDouble_0)); }
	inline bool get_SwappedWordsInDouble_0() const { return ___SwappedWordsInDouble_0; }
	inline bool* get_address_of_SwappedWordsInDouble_0() { return &___SwappedWordsInDouble_0; }
	inline void set_SwappedWordsInDouble_0(bool value)
	{
		___SwappedWordsInDouble_0 = value;
	}

	inline static int32_t get_offset_of_IsLittleEndian_1() { return static_cast<int32_t>(offsetof(BitConverter_t862681245_StaticFields, ___IsLittleEndian_1)); }
	inline bool get_IsLittleEndian_1() const { return ___IsLittleEndian_1; }
	inline bool* get_address_of_IsLittleEndian_1() { return &___IsLittleEndian_1; }
	inline void set_IsLittleEndian_1(bool value)
	{
		___IsLittleEndian_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTER_T862681245_H
#ifndef BUFFER_T502732385_H
#define BUFFER_T502732385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Buffer
struct  Buffer_t502732385  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFER_T502732385_H
#ifndef CHARENUMERATOR_T2141516059_H
#define CHARENUMERATOR_T2141516059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CharEnumerator
struct  CharEnumerator_t2141516059  : public RuntimeObject
{
public:
	// System.String System.CharEnumerator::str
	String_t* ___str_0;
	// System.Int32 System.CharEnumerator::index
	int32_t ___index_1;
	// System.Int32 System.CharEnumerator::length
	int32_t ___length_2;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(CharEnumerator_t2141516059, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(CharEnumerator_t2141516059, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(CharEnumerator_t2141516059, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARENUMERATOR_T2141516059_H
#ifndef CONSOLE_T2118491080_H
#define CONSOLE_T2118491080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Console
struct  Console_t2118491080  : public RuntimeObject
{
public:

public:
};

struct Console_t2118491080_StaticFields
{
public:
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t535322324 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t535322324 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t2764901853 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t3706787480 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t3706787480 * ___outputEncoding_4;

public:
	inline static int32_t get_offset_of_stdout_0() { return static_cast<int32_t>(offsetof(Console_t2118491080_StaticFields, ___stdout_0)); }
	inline TextWriter_t535322324 * get_stdout_0() const { return ___stdout_0; }
	inline TextWriter_t535322324 ** get_address_of_stdout_0() { return &___stdout_0; }
	inline void set_stdout_0(TextWriter_t535322324 * value)
	{
		___stdout_0 = value;
		Il2CppCodeGenWriteBarrier((&___stdout_0), value);
	}

	inline static int32_t get_offset_of_stderr_1() { return static_cast<int32_t>(offsetof(Console_t2118491080_StaticFields, ___stderr_1)); }
	inline TextWriter_t535322324 * get_stderr_1() const { return ___stderr_1; }
	inline TextWriter_t535322324 ** get_address_of_stderr_1() { return &___stderr_1; }
	inline void set_stderr_1(TextWriter_t535322324 * value)
	{
		___stderr_1 = value;
		Il2CppCodeGenWriteBarrier((&___stderr_1), value);
	}

	inline static int32_t get_offset_of_stdin_2() { return static_cast<int32_t>(offsetof(Console_t2118491080_StaticFields, ___stdin_2)); }
	inline TextReader_t2764901853 * get_stdin_2() const { return ___stdin_2; }
	inline TextReader_t2764901853 ** get_address_of_stdin_2() { return &___stdin_2; }
	inline void set_stdin_2(TextReader_t2764901853 * value)
	{
		___stdin_2 = value;
		Il2CppCodeGenWriteBarrier((&___stdin_2), value);
	}

	inline static int32_t get_offset_of_inputEncoding_3() { return static_cast<int32_t>(offsetof(Console_t2118491080_StaticFields, ___inputEncoding_3)); }
	inline Encoding_t3706787480 * get_inputEncoding_3() const { return ___inputEncoding_3; }
	inline Encoding_t3706787480 ** get_address_of_inputEncoding_3() { return &___inputEncoding_3; }
	inline void set_inputEncoding_3(Encoding_t3706787480 * value)
	{
		___inputEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___inputEncoding_3), value);
	}

	inline static int32_t get_offset_of_outputEncoding_4() { return static_cast<int32_t>(offsetof(Console_t2118491080_StaticFields, ___outputEncoding_4)); }
	inline Encoding_t3706787480 * get_outputEncoding_4() const { return ___outputEncoding_4; }
	inline Encoding_t3706787480 ** get_address_of_outputEncoding_4() { return &___outputEncoding_4; }
	inline void set_outputEncoding_4(Encoding_t3706787480 * value)
	{
		___outputEncoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___outputEncoding_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLE_T2118491080_H
#ifndef CONVERT_T3318885590_H
#define CONVERT_T3318885590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Convert
struct  Convert_t3318885590  : public RuntimeObject
{
public:

public:
};

struct Convert_t3318885590_StaticFields
{
public:
	// System.Object System.Convert::DBNull
	RuntimeObject * ___DBNull_0;
	// System.Type[] System.Convert::conversionTable
	TypeU5BU5D_t2440397116* ___conversionTable_1;

public:
	inline static int32_t get_offset_of_DBNull_0() { return static_cast<int32_t>(offsetof(Convert_t3318885590_StaticFields, ___DBNull_0)); }
	inline RuntimeObject * get_DBNull_0() const { return ___DBNull_0; }
	inline RuntimeObject ** get_address_of_DBNull_0() { return &___DBNull_0; }
	inline void set_DBNull_0(RuntimeObject * value)
	{
		___DBNull_0 = value;
		Il2CppCodeGenWriteBarrier((&___DBNull_0), value);
	}

	inline static int32_t get_offset_of_conversionTable_1() { return static_cast<int32_t>(offsetof(Convert_t3318885590_StaticFields, ___conversionTable_1)); }
	inline TypeU5BU5D_t2440397116* get_conversionTable_1() const { return ___conversionTable_1; }
	inline TypeU5BU5D_t2440397116** get_address_of_conversionTable_1() { return &___conversionTable_1; }
	inline void set_conversionTable_1(TypeU5BU5D_t2440397116* value)
	{
		___conversionTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___conversionTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERT_T3318885590_H
#ifndef DBNULL_T2161236492_H
#define DBNULL_T2161236492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_t2161236492  : public RuntimeObject
{
public:

public:
};

struct DBNull_t2161236492_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t2161236492 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t2161236492_StaticFields, ___Value_0)); }
	inline DBNull_t2161236492 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t2161236492 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t2161236492 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_T2161236492_H
#ifndef DATETIMEUTILS_T606945647_H
#define DATETIMEUTILS_T606945647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeUtils
struct  DateTimeUtils_t606945647  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEUTILS_T606945647_H
#ifndef DELEGATEDATA_T1237820514_H
#define DELEGATEDATA_T1237820514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateData
struct  DelegateData_t1237820514  : public RuntimeObject
{
public:
	// System.Type System.DelegateData::target_type
	Type_t * ___target_type_0;
	// System.String System.DelegateData::method_name
	String_t* ___method_name_1;

public:
	inline static int32_t get_offset_of_target_type_0() { return static_cast<int32_t>(offsetof(DelegateData_t1237820514, ___target_type_0)); }
	inline Type_t * get_target_type_0() const { return ___target_type_0; }
	inline Type_t ** get_address_of_target_type_0() { return &___target_type_0; }
	inline void set_target_type_0(Type_t * value)
	{
		___target_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_type_0), value);
	}

	inline static int32_t get_offset_of_method_name_1() { return static_cast<int32_t>(offsetof(DelegateData_t1237820514, ___method_name_1)); }
	inline String_t* get_method_name_1() const { return ___method_name_1; }
	inline String_t** get_address_of_method_name_1() { return &___method_name_1; }
	inline void set_method_name_1(String_t* value)
	{
		___method_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEDATA_T1237820514_H
#ifndef DELEGATESERIALIZATIONHOLDER_T3026570387_H
#define DELEGATESERIALIZATIONHOLDER_T3026570387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateSerializationHolder
struct  DelegateSerializationHolder_t3026570387  : public RuntimeObject
{
public:
	// System.Delegate System.DelegateSerializationHolder::_delegate
	Delegate_t430756854 * ____delegate_0;

public:
	inline static int32_t get_offset_of__delegate_0() { return static_cast<int32_t>(offsetof(DelegateSerializationHolder_t3026570387, ____delegate_0)); }
	inline Delegate_t430756854 * get__delegate_0() const { return ____delegate_0; }
	inline Delegate_t430756854 ** get_address_of__delegate_0() { return &____delegate_0; }
	inline void set__delegate_0(Delegate_t430756854 * value)
	{
		____delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&____delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATESERIALIZATIONHOLDER_T3026570387_H
#ifndef DELEGATEENTRY_T468392216_H
#define DELEGATEENTRY_T468392216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateSerializationHolder/DelegateEntry
struct  DelegateEntry_t468392216  : public RuntimeObject
{
public:
	// System.String System.DelegateSerializationHolder/DelegateEntry::type
	String_t* ___type_0;
	// System.String System.DelegateSerializationHolder/DelegateEntry::assembly
	String_t* ___assembly_1;
	// System.Object System.DelegateSerializationHolder/DelegateEntry::target
	RuntimeObject * ___target_2;
	// System.String System.DelegateSerializationHolder/DelegateEntry::targetTypeAssembly
	String_t* ___targetTypeAssembly_3;
	// System.String System.DelegateSerializationHolder/DelegateEntry::targetTypeName
	String_t* ___targetTypeName_4;
	// System.String System.DelegateSerializationHolder/DelegateEntry::methodName
	String_t* ___methodName_5;
	// System.DelegateSerializationHolder/DelegateEntry System.DelegateSerializationHolder/DelegateEntry::delegateEntry
	DelegateEntry_t468392216 * ___delegateEntry_6;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(DelegateEntry_t468392216, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_assembly_1() { return static_cast<int32_t>(offsetof(DelegateEntry_t468392216, ___assembly_1)); }
	inline String_t* get_assembly_1() const { return ___assembly_1; }
	inline String_t** get_address_of_assembly_1() { return &___assembly_1; }
	inline void set_assembly_1(String_t* value)
	{
		___assembly_1 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_1), value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(DelegateEntry_t468392216, ___target_2)); }
	inline RuntimeObject * get_target_2() const { return ___target_2; }
	inline RuntimeObject ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(RuntimeObject * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_targetTypeAssembly_3() { return static_cast<int32_t>(offsetof(DelegateEntry_t468392216, ___targetTypeAssembly_3)); }
	inline String_t* get_targetTypeAssembly_3() const { return ___targetTypeAssembly_3; }
	inline String_t** get_address_of_targetTypeAssembly_3() { return &___targetTypeAssembly_3; }
	inline void set_targetTypeAssembly_3(String_t* value)
	{
		___targetTypeAssembly_3 = value;
		Il2CppCodeGenWriteBarrier((&___targetTypeAssembly_3), value);
	}

	inline static int32_t get_offset_of_targetTypeName_4() { return static_cast<int32_t>(offsetof(DelegateEntry_t468392216, ___targetTypeName_4)); }
	inline String_t* get_targetTypeName_4() const { return ___targetTypeName_4; }
	inline String_t** get_address_of_targetTypeName_4() { return &___targetTypeName_4; }
	inline void set_targetTypeName_4(String_t* value)
	{
		___targetTypeName_4 = value;
		Il2CppCodeGenWriteBarrier((&___targetTypeName_4), value);
	}

	inline static int32_t get_offset_of_methodName_5() { return static_cast<int32_t>(offsetof(DelegateEntry_t468392216, ___methodName_5)); }
	inline String_t* get_methodName_5() const { return ___methodName_5; }
	inline String_t** get_address_of_methodName_5() { return &___methodName_5; }
	inline void set_methodName_5(String_t* value)
	{
		___methodName_5 = value;
		Il2CppCodeGenWriteBarrier((&___methodName_5), value);
	}

	inline static int32_t get_offset_of_delegateEntry_6() { return static_cast<int32_t>(offsetof(DelegateEntry_t468392216, ___delegateEntry_6)); }
	inline DelegateEntry_t468392216 * get_delegateEntry_6() const { return ___delegateEntry_6; }
	inline DelegateEntry_t468392216 ** get_address_of_delegateEntry_6() { return &___delegateEntry_6; }
	inline void set_delegateEntry_6(DelegateEntry_t468392216 * value)
	{
		___delegateEntry_6 = value;
		Il2CppCodeGenWriteBarrier((&___delegateEntry_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEENTRY_T468392216_H
#ifndef SBYTECOMPARER_T550617552_H
#define SBYTECOMPARER_T550617552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/SByteComparer
struct  SByteComparer_t550617552  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECOMPARER_T550617552_H
#ifndef SHORTCOMPARER_T3445461946_H
#define SHORTCOMPARER_T3445461946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/ShortComparer
struct  ShortComparer_t3445461946  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHORTCOMPARER_T3445461946_H
#ifndef INTCOMPARER_T2811315210_H
#define INTCOMPARER_T2811315210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/IntComparer
struct  IntComparer_t2811315210  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTCOMPARER_T2811315210_H
#ifndef LONGCOMPARER_T4136535228_H
#define LONGCOMPARER_T4136535228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/LongComparer
struct  LongComparer_t4136535228  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LONGCOMPARER_T4136535228_H
#ifndef ENVIRONMENT_T2603688850_H
#define ENVIRONMENT_T2603688850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment
struct  Environment_t2603688850  : public RuntimeObject
{
public:

public:
};

struct Environment_t2603688850_StaticFields
{
public:
	// System.OperatingSystem System.Environment::os
	OperatingSystem_t2253584828 * ___os_1;

public:
	inline static int32_t get_offset_of_os_1() { return static_cast<int32_t>(offsetof(Environment_t2603688850_StaticFields, ___os_1)); }
	inline OperatingSystem_t2253584828 * get_os_1() const { return ___os_1; }
	inline OperatingSystem_t2253584828 ** get_address_of_os_1() { return &___os_1; }
	inline void set_os_1(OperatingSystem_t2253584828 * value)
	{
		___os_1 = value;
		Il2CppCodeGenWriteBarrier((&___os_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENT_T2603688850_H
#ifndef EVENTARGS_T696663806_H
#define EVENTARGS_T696663806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t696663806  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t696663806_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t696663806 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t696663806_StaticFields, ___Empty_0)); }
	inline EventArgs_t696663806 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t696663806 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t696663806 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T696663806_H
#ifndef GC_T1009681288_H
#define GC_T1009681288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GC
struct  GC_t1009681288  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GC_T1009681288_H
#ifndef GUIDPARSER_T2022458249_H
#define GUIDPARSER_T2022458249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid/GuidParser
struct  GuidParser_t2022458249  : public RuntimeObject
{
public:
	// System.String System.Guid/GuidParser::_src
	String_t* ____src_0;
	// System.Int32 System.Guid/GuidParser::_length
	int32_t ____length_1;
	// System.Int32 System.Guid/GuidParser::_cur
	int32_t ____cur_2;

public:
	inline static int32_t get_offset_of__src_0() { return static_cast<int32_t>(offsetof(GuidParser_t2022458249, ____src_0)); }
	inline String_t* get__src_0() const { return ____src_0; }
	inline String_t** get_address_of__src_0() { return &____src_0; }
	inline void set__src_0(String_t* value)
	{
		____src_0 = value;
		Il2CppCodeGenWriteBarrier((&____src_0), value);
	}

	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(GuidParser_t2022458249, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__cur_2() { return static_cast<int32_t>(offsetof(GuidParser_t2022458249, ____cur_2)); }
	inline int32_t get__cur_2() const { return ____cur_2; }
	inline int32_t* get_address_of__cur_2() { return &____cur_2; }
	inline void set__cur_2(int32_t value)
	{
		____cur_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDPARSER_T2022458249_H
#ifndef LOCALDATASTORESLOT_T1069832959_H
#define LOCALDATASTORESLOT_T1069832959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStoreSlot
struct  LocalDataStoreSlot_t1069832959  : public RuntimeObject
{
public:
	// System.Int32 System.LocalDataStoreSlot::slot
	int32_t ___slot_0;
	// System.Boolean System.LocalDataStoreSlot::thread_local
	bool ___thread_local_1;

public:
	inline static int32_t get_offset_of_slot_0() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1069832959, ___slot_0)); }
	inline int32_t get_slot_0() const { return ___slot_0; }
	inline int32_t* get_address_of_slot_0() { return &___slot_0; }
	inline void set_slot_0(int32_t value)
	{
		___slot_0 = value;
	}

	inline static int32_t get_offset_of_thread_local_1() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1069832959, ___thread_local_1)); }
	inline bool get_thread_local_1() const { return ___thread_local_1; }
	inline bool* get_address_of_thread_local_1() { return &___thread_local_1; }
	inline void set_thread_local_1(bool value)
	{
		___thread_local_1 = value;
	}
};

struct LocalDataStoreSlot_t1069832959_StaticFields
{
public:
	// System.Object System.LocalDataStoreSlot::lock_obj
	RuntimeObject * ___lock_obj_2;
	// System.Boolean[] System.LocalDataStoreSlot::slot_bitmap_thread
	BooleanU5BU5D_t1854498855* ___slot_bitmap_thread_3;
	// System.Boolean[] System.LocalDataStoreSlot::slot_bitmap_context
	BooleanU5BU5D_t1854498855* ___slot_bitmap_context_4;

public:
	inline static int32_t get_offset_of_lock_obj_2() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1069832959_StaticFields, ___lock_obj_2)); }
	inline RuntimeObject * get_lock_obj_2() const { return ___lock_obj_2; }
	inline RuntimeObject ** get_address_of_lock_obj_2() { return &___lock_obj_2; }
	inline void set_lock_obj_2(RuntimeObject * value)
	{
		___lock_obj_2 = value;
		Il2CppCodeGenWriteBarrier((&___lock_obj_2), value);
	}

	inline static int32_t get_offset_of_slot_bitmap_thread_3() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1069832959_StaticFields, ___slot_bitmap_thread_3)); }
	inline BooleanU5BU5D_t1854498855* get_slot_bitmap_thread_3() const { return ___slot_bitmap_thread_3; }
	inline BooleanU5BU5D_t1854498855** get_address_of_slot_bitmap_thread_3() { return &___slot_bitmap_thread_3; }
	inline void set_slot_bitmap_thread_3(BooleanU5BU5D_t1854498855* value)
	{
		___slot_bitmap_thread_3 = value;
		Il2CppCodeGenWriteBarrier((&___slot_bitmap_thread_3), value);
	}

	inline static int32_t get_offset_of_slot_bitmap_context_4() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1069832959_StaticFields, ___slot_bitmap_context_4)); }
	inline BooleanU5BU5D_t1854498855* get_slot_bitmap_context_4() const { return ___slot_bitmap_context_4; }
	inline BooleanU5BU5D_t1854498855** get_address_of_slot_bitmap_context_4() { return &___slot_bitmap_context_4; }
	inline void set_slot_bitmap_context_4(BooleanU5BU5D_t1854498855* value)
	{
		___slot_bitmap_context_4 = value;
		Il2CppCodeGenWriteBarrier((&___slot_bitmap_context_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTORESLOT_T1069832959_H
#ifndef DECODERFALLBACK_T1043057282_H
#define DECODERFALLBACK_T1043057282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallback
struct  DecoderFallback_t1043057282  : public RuntimeObject
{
public:

public:
};

struct DecoderFallback_t1043057282_StaticFields
{
public:
	// System.Text.DecoderFallback System.Text.DecoderFallback::exception_fallback
	DecoderFallback_t1043057282 * ___exception_fallback_0;
	// System.Text.DecoderFallback System.Text.DecoderFallback::replacement_fallback
	DecoderFallback_t1043057282 * ___replacement_fallback_1;
	// System.Text.DecoderFallback System.Text.DecoderFallback::standard_safe_fallback
	DecoderFallback_t1043057282 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_t1043057282_StaticFields, ___exception_fallback_0)); }
	inline DecoderFallback_t1043057282 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline DecoderFallback_t1043057282 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(DecoderFallback_t1043057282 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_t1043057282_StaticFields, ___replacement_fallback_1)); }
	inline DecoderFallback_t1043057282 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline DecoderFallback_t1043057282 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(DecoderFallback_t1043057282 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_t1043057282_StaticFields, ___standard_safe_fallback_2)); }
	inline DecoderFallback_t1043057282 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline DecoderFallback_t1043057282 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(DecoderFallback_t1043057282 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACK_T1043057282_H
#ifndef DECODER_T521282581_H
#define DECODER_T521282581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t521282581  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t1043057282 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t4040458850 * ___fallback_buffer_1;

public:
	inline static int32_t get_offset_of_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t521282581, ___fallback_0)); }
	inline DecoderFallback_t1043057282 * get_fallback_0() const { return ___fallback_0; }
	inline DecoderFallback_t1043057282 ** get_address_of_fallback_0() { return &___fallback_0; }
	inline void set_fallback_0(DecoderFallback_t1043057282 * value)
	{
		___fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_0), value);
	}

	inline static int32_t get_offset_of_fallback_buffer_1() { return static_cast<int32_t>(offsetof(Decoder_t521282581, ___fallback_buffer_1)); }
	inline DecoderFallbackBuffer_t4040458850 * get_fallback_buffer_1() const { return ___fallback_buffer_1; }
	inline DecoderFallbackBuffer_t4040458850 ** get_address_of_fallback_buffer_1() { return &___fallback_buffer_1; }
	inline void set_fallback_buffer_1(DecoderFallbackBuffer_t4040458850 * value)
	{
		___fallback_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_buffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T521282581_H
#ifndef CRITICALFINALIZEROBJECT_T3875005984_H
#define CRITICALFINALIZEROBJECT_T3875005984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t3875005984  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T3875005984_H
#ifndef MARSHALBYREFOBJECT_T114867133_H
#define MARSHALBYREFOBJECT_T114867133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t114867133  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t4266811157 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t114867133, ____identity_0)); }
	inline ServerIdentity_t4266811157 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t4266811157 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t4266811157 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T114867133_H
#ifndef EXCEPTION_T1284369516_H
#define EXCEPTION_T1284369516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1284369516  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t3796628252* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1284369516 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1284369516, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t3796628252* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t3796628252** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t3796628252* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1284369516, ___inner_exception_1)); }
	inline Exception_t1284369516 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1284369516 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1284369516 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1284369516, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1284369516, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1284369516, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1284369516, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1284369516, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1284369516, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1284369516, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1284369516, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1284369516, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1284369516_H
#ifndef VALUETYPE_T316890423_H
#define VALUETYPE_T316890423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t316890423  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t316890423_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t316890423_marshaled_com
{
};
#endif // VALUETYPE_T316890423_H
#ifndef TIMERCOMPARER_T3292984772_H
#define TIMERCOMPARER_T3292984772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer/TimerComparer
struct  TimerComparer_t3292984772  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCOMPARER_T3292984772_H
#ifndef THREADPOOL_T2365024978_H
#define THREADPOOL_T2365024978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadPool
struct  ThreadPool_t2365024978  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADPOOL_T2365024978_H
#ifndef ATTRIBUTE_T3344439798_H
#define ATTRIBUTE_T3344439798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t3344439798  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T3344439798_H
#ifndef STRINGBUILDER_T60157835_H
#define STRINGBUILDER_T60157835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t60157835  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t60157835, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t60157835, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t60157835, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t60157835, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T60157835_H
#ifndef ENCODERFALLBACKBUFFER_T1965492842_H
#define ENCODERFALLBACKBUFFER_T1965492842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t1965492842  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKBUFFER_T1965492842_H
#ifndef SYNCHRONIZATIONCONTEXT_T637223515_H
#define SYNCHRONIZATIONCONTEXT_T637223515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t637223515  : public RuntimeObject
{
public:

public:
};

struct SynchronizationContext_t637223515_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t637223515 * ___currentContext_0;

public:
	inline static int32_t get_offset_of_currentContext_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t637223515_ThreadStaticFields, ___currentContext_0)); }
	inline SynchronizationContext_t637223515 * get_currentContext_0() const { return ___currentContext_0; }
	inline SynchronizationContext_t637223515 ** get_address_of_currentContext_0() { return &___currentContext_0; }
	inline void set_currentContext_0(SynchronizationContext_t637223515 * value)
	{
		___currentContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T637223515_H
#ifndef COMPRESSEDSTACK_T430538020_H
#define COMPRESSEDSTACK_T430538020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CompressedStack
struct  CompressedStack_t430538020  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Threading.CompressedStack::_list
	ArrayList_t2247471208 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(CompressedStack_t430538020, ____list_0)); }
	inline ArrayList_t2247471208 * get__list_0() const { return ____list_0; }
	inline ArrayList_t2247471208 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t2247471208 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSEDSTACK_T430538020_H
#ifndef ENCODERFALLBACK_T1590054241_H
#define ENCODERFALLBACK_T1590054241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallback
struct  EncoderFallback_t1590054241  : public RuntimeObject
{
public:

public:
};

struct EncoderFallback_t1590054241_StaticFields
{
public:
	// System.Text.EncoderFallback System.Text.EncoderFallback::exception_fallback
	EncoderFallback_t1590054241 * ___exception_fallback_0;
	// System.Text.EncoderFallback System.Text.EncoderFallback::replacement_fallback
	EncoderFallback_t1590054241 * ___replacement_fallback_1;
	// System.Text.EncoderFallback System.Text.EncoderFallback::standard_safe_fallback
	EncoderFallback_t1590054241 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t1590054241_StaticFields, ___exception_fallback_0)); }
	inline EncoderFallback_t1590054241 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline EncoderFallback_t1590054241 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(EncoderFallback_t1590054241 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t1590054241_StaticFields, ___replacement_fallback_1)); }
	inline EncoderFallback_t1590054241 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline EncoderFallback_t1590054241 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(EncoderFallback_t1590054241 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t1590054241_StaticFields, ___standard_safe_fallback_2)); }
	inline EncoderFallback_t1590054241 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline EncoderFallback_t1590054241 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(EncoderFallback_t1590054241 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACK_T1590054241_H
#ifndef ENCODING_T3706787480_H
#define ENCODING_T3706787480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t3706787480  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t1043057282 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1590054241 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t3706787480, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t3706787480, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t3706787480, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t3706787480, ___decoder_fallback_3)); }
	inline DecoderFallback_t1043057282 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t1043057282 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t1043057282 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t3706787480, ___encoder_fallback_4)); }
	inline EncoderFallback_t1590054241 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1590054241 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1590054241 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t3706787480, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t3706787480, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t3706787480, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t3706787480, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t3706787480, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t3706787480, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t3706787480, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t3706787480, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t3706787480_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t2566424060 * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2358992757* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t3706787480 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t3706787480 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t3706787480 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t3706787480 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t3706787480 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t3706787480 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t3706787480 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t3706787480 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t3706787480 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t3706787480 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t3706787480 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t3706787480_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t2566424060 * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t2566424060 ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t2566424060 * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t3706787480_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t3706787480_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2358992757* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2358992757** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2358992757* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t3706787480_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t3706787480 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t3706787480 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t3706787480 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t3706787480_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t3706787480 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t3706787480 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t3706787480 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t3706787480_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t3706787480 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t3706787480 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t3706787480 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t3706787480_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t3706787480 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t3706787480 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t3706787480 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t3706787480_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t3706787480 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t3706787480 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t3706787480 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t3706787480_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t3706787480 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t3706787480 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t3706787480 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t3706787480_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t3706787480 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t3706787480 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t3706787480 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t3706787480_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t3706787480 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t3706787480 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t3706787480 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t3706787480_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t3706787480 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t3706787480 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t3706787480 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t3706787480_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t3706787480 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t3706787480 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t3706787480 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t3706787480_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t3706787480 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t3706787480 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t3706787480 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t3706787480_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T3706787480_H
#ifndef NATIVEEVENTCALLS_T3566667775_H
#define NATIVEEVENTCALLS_T3566667775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.NativeEventCalls
struct  NativeEventCalls_t3566667775  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEEVENTCALLS_T3566667775_H
#ifndef EXECUTIONCONTEXT_T2272822824_H
#define EXECUTIONCONTEXT_T2272822824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ExecutionContext
struct  ExecutionContext_t2272822824  : public RuntimeObject
{
public:
	// System.Security.SecurityContext System.Threading.ExecutionContext::_sc
	SecurityContext_t1307182558 * ____sc_0;
	// System.Boolean System.Threading.ExecutionContext::_suppressFlow
	bool ____suppressFlow_1;
	// System.Boolean System.Threading.ExecutionContext::_capture
	bool ____capture_2;

public:
	inline static int32_t get_offset_of__sc_0() { return static_cast<int32_t>(offsetof(ExecutionContext_t2272822824, ____sc_0)); }
	inline SecurityContext_t1307182558 * get__sc_0() const { return ____sc_0; }
	inline SecurityContext_t1307182558 ** get_address_of__sc_0() { return &____sc_0; }
	inline void set__sc_0(SecurityContext_t1307182558 * value)
	{
		____sc_0 = value;
		Il2CppCodeGenWriteBarrier((&____sc_0), value);
	}

	inline static int32_t get_offset_of__suppressFlow_1() { return static_cast<int32_t>(offsetof(ExecutionContext_t2272822824, ____suppressFlow_1)); }
	inline bool get__suppressFlow_1() const { return ____suppressFlow_1; }
	inline bool* get_address_of__suppressFlow_1() { return &____suppressFlow_1; }
	inline void set__suppressFlow_1(bool value)
	{
		____suppressFlow_1 = value;
	}

	inline static int32_t get_offset_of__capture_2() { return static_cast<int32_t>(offsetof(ExecutionContext_t2272822824, ____capture_2)); }
	inline bool get__capture_2() const { return ____capture_2; }
	inline bool* get_address_of__capture_2() { return &____capture_2; }
	inline void set__capture_2(bool value)
	{
		____capture_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONCONTEXT_T2272822824_H
#ifndef INTERLOCKED_T2443964739_H
#define INTERLOCKED_T2443964739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Interlocked
struct  Interlocked_t2443964739  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERLOCKED_T2443964739_H
#ifndef MONITOR_T3853413118_H
#define MONITOR_T3853413118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Monitor
struct  Monitor_t3853413118  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONITOR_T3853413118_H
#ifndef FLAGSATTRIBUTE_T2156000871_H
#define FLAGSATTRIBUTE_T2156000871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FlagsAttribute
struct  FlagsAttribute_t2156000871  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGSATTRIBUTE_T2156000871_H
#ifndef FORWARDINGDECODER_T2437165155_H
#define FORWARDINGDECODER_T2437165155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/ForwardingDecoder
struct  ForwardingDecoder_t2437165155  : public Decoder_t521282581
{
public:
	// System.Text.Encoding System.Text.Encoding/ForwardingDecoder::encoding
	Encoding_t3706787480 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(ForwardingDecoder_t2437165155, ___encoding_2)); }
	inline Encoding_t3706787480 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t3706787480 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t3706787480 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORWARDINGDECODER_T2437165155_H
#ifndef UTF7ENCODING_T2290274601_H
#define UTF7ENCODING_T2290274601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding
struct  UTF7Encoding_t2290274601  : public Encoding_t3706787480
{
public:
	// System.Boolean System.Text.UTF7Encoding::allowOptionals
	bool ___allowOptionals_28;

public:
	inline static int32_t get_offset_of_allowOptionals_28() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2290274601, ___allowOptionals_28)); }
	inline bool get_allowOptionals_28() const { return ___allowOptionals_28; }
	inline bool* get_address_of_allowOptionals_28() { return &___allowOptionals_28; }
	inline void set_allowOptionals_28(bool value)
	{
		___allowOptionals_28 = value;
	}
};

struct UTF7Encoding_t2290274601_StaticFields
{
public:
	// System.Byte[] System.Text.UTF7Encoding::encodingRules
	ByteU5BU5D_t1907542542* ___encodingRules_29;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t106123094* ___base64Values_30;

public:
	inline static int32_t get_offset_of_encodingRules_29() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2290274601_StaticFields, ___encodingRules_29)); }
	inline ByteU5BU5D_t1907542542* get_encodingRules_29() const { return ___encodingRules_29; }
	inline ByteU5BU5D_t1907542542** get_address_of_encodingRules_29() { return &___encodingRules_29; }
	inline void set_encodingRules_29(ByteU5BU5D_t1907542542* value)
	{
		___encodingRules_29 = value;
		Il2CppCodeGenWriteBarrier((&___encodingRules_29), value);
	}

	inline static int32_t get_offset_of_base64Values_30() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2290274601_StaticFields, ___base64Values_30)); }
	inline SByteU5BU5D_t106123094* get_base64Values_30() const { return ___base64Values_30; }
	inline SByteU5BU5D_t106123094** get_address_of_base64Values_30() { return &___base64Values_30; }
	inline void set_base64Values_30(SByteU5BU5D_t106123094* value)
	{
		___base64Values_30 = value;
		Il2CppCodeGenWriteBarrier((&___base64Values_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7ENCODING_T2290274601_H
#ifndef UTF32ENCODING_T3234085058_H
#define UTF32ENCODING_T3234085058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding
struct  UTF32Encoding_t3234085058  : public Encoding_t3706787480
{
public:
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_28;
	// System.Boolean System.Text.UTF32Encoding::byteOrderMark
	bool ___byteOrderMark_29;

public:
	inline static int32_t get_offset_of_bigEndian_28() { return static_cast<int32_t>(offsetof(UTF32Encoding_t3234085058, ___bigEndian_28)); }
	inline bool get_bigEndian_28() const { return ___bigEndian_28; }
	inline bool* get_address_of_bigEndian_28() { return &___bigEndian_28; }
	inline void set_bigEndian_28(bool value)
	{
		___bigEndian_28 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_29() { return static_cast<int32_t>(offsetof(UTF32Encoding_t3234085058, ___byteOrderMark_29)); }
	inline bool get_byteOrderMark_29() const { return ___byteOrderMark_29; }
	inline bool* get_address_of_byteOrderMark_29() { return &___byteOrderMark_29; }
	inline void set_byteOrderMark_29(bool value)
	{
		___byteOrderMark_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32ENCODING_T3234085058_H
#ifndef UTF32DECODER_T3011027013_H
#define UTF32DECODER_T3011027013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding/UTF32Decoder
struct  UTF32Decoder_t3011027013  : public Decoder_t521282581
{
public:
	// System.Boolean System.Text.UTF32Encoding/UTF32Decoder::bigEndian
	bool ___bigEndian_2;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverByte
	int32_t ___leftOverByte_3;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverLength
	int32_t ___leftOverLength_4;

public:
	inline static int32_t get_offset_of_bigEndian_2() { return static_cast<int32_t>(offsetof(UTF32Decoder_t3011027013, ___bigEndian_2)); }
	inline bool get_bigEndian_2() const { return ___bigEndian_2; }
	inline bool* get_address_of_bigEndian_2() { return &___bigEndian_2; }
	inline void set_bigEndian_2(bool value)
	{
		___bigEndian_2 = value;
	}

	inline static int32_t get_offset_of_leftOverByte_3() { return static_cast<int32_t>(offsetof(UTF32Decoder_t3011027013, ___leftOverByte_3)); }
	inline int32_t get_leftOverByte_3() const { return ___leftOverByte_3; }
	inline int32_t* get_address_of_leftOverByte_3() { return &___leftOverByte_3; }
	inline void set_leftOverByte_3(int32_t value)
	{
		___leftOverByte_3 = value;
	}

	inline static int32_t get_offset_of_leftOverLength_4() { return static_cast<int32_t>(offsetof(UTF32Decoder_t3011027013, ___leftOverLength_4)); }
	inline int32_t get_leftOverLength_4() const { return ___leftOverLength_4; }
	inline int32_t* get_address_of_leftOverLength_4() { return &___leftOverLength_4; }
	inline void set_leftOverLength_4(int32_t value)
	{
		___leftOverLength_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32DECODER_T3011027013_H
#ifndef MONOENUMINFO_T852766270_H
#define MONOENUMINFO_T852766270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo
struct  MonoEnumInfo_t852766270 
{
public:
	// System.Type System.MonoEnumInfo::utype
	Type_t * ___utype_0;
	// System.Array System.MonoEnumInfo::values
	RuntimeArray * ___values_1;
	// System.String[] System.MonoEnumInfo::names
	StringU5BU5D_t3875454715* ___names_2;
	// System.Collections.Hashtable System.MonoEnumInfo::name_hash
	Hashtable_t3888042571 * ___name_hash_3;

public:
	inline static int32_t get_offset_of_utype_0() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t852766270, ___utype_0)); }
	inline Type_t * get_utype_0() const { return ___utype_0; }
	inline Type_t ** get_address_of_utype_0() { return &___utype_0; }
	inline void set_utype_0(Type_t * value)
	{
		___utype_0 = value;
		Il2CppCodeGenWriteBarrier((&___utype_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t852766270, ___values_1)); }
	inline RuntimeArray * get_values_1() const { return ___values_1; }
	inline RuntimeArray ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(RuntimeArray * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_names_2() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t852766270, ___names_2)); }
	inline StringU5BU5D_t3875454715* get_names_2() const { return ___names_2; }
	inline StringU5BU5D_t3875454715** get_address_of_names_2() { return &___names_2; }
	inline void set_names_2(StringU5BU5D_t3875454715* value)
	{
		___names_2 = value;
		Il2CppCodeGenWriteBarrier((&___names_2), value);
	}

	inline static int32_t get_offset_of_name_hash_3() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t852766270, ___name_hash_3)); }
	inline Hashtable_t3888042571 * get_name_hash_3() const { return ___name_hash_3; }
	inline Hashtable_t3888042571 ** get_address_of_name_hash_3() { return &___name_hash_3; }
	inline void set_name_hash_3(Hashtable_t3888042571 * value)
	{
		___name_hash_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_hash_3), value);
	}
};

struct MonoEnumInfo_t852766270_StaticFields
{
public:
	// System.Collections.Hashtable System.MonoEnumInfo::global_cache
	Hashtable_t3888042571 * ___global_cache_5;
	// System.Object System.MonoEnumInfo::global_cache_monitor
	RuntimeObject * ___global_cache_monitor_6;
	// System.MonoEnumInfo/SByteComparer System.MonoEnumInfo::sbyte_comparer
	SByteComparer_t550617552 * ___sbyte_comparer_7;
	// System.MonoEnumInfo/ShortComparer System.MonoEnumInfo::short_comparer
	ShortComparer_t3445461946 * ___short_comparer_8;
	// System.MonoEnumInfo/IntComparer System.MonoEnumInfo::int_comparer
	IntComparer_t2811315210 * ___int_comparer_9;
	// System.MonoEnumInfo/LongComparer System.MonoEnumInfo::long_comparer
	LongComparer_t4136535228 * ___long_comparer_10;

public:
	inline static int32_t get_offset_of_global_cache_5() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t852766270_StaticFields, ___global_cache_5)); }
	inline Hashtable_t3888042571 * get_global_cache_5() const { return ___global_cache_5; }
	inline Hashtable_t3888042571 ** get_address_of_global_cache_5() { return &___global_cache_5; }
	inline void set_global_cache_5(Hashtable_t3888042571 * value)
	{
		___global_cache_5 = value;
		Il2CppCodeGenWriteBarrier((&___global_cache_5), value);
	}

	inline static int32_t get_offset_of_global_cache_monitor_6() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t852766270_StaticFields, ___global_cache_monitor_6)); }
	inline RuntimeObject * get_global_cache_monitor_6() const { return ___global_cache_monitor_6; }
	inline RuntimeObject ** get_address_of_global_cache_monitor_6() { return &___global_cache_monitor_6; }
	inline void set_global_cache_monitor_6(RuntimeObject * value)
	{
		___global_cache_monitor_6 = value;
		Il2CppCodeGenWriteBarrier((&___global_cache_monitor_6), value);
	}

	inline static int32_t get_offset_of_sbyte_comparer_7() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t852766270_StaticFields, ___sbyte_comparer_7)); }
	inline SByteComparer_t550617552 * get_sbyte_comparer_7() const { return ___sbyte_comparer_7; }
	inline SByteComparer_t550617552 ** get_address_of_sbyte_comparer_7() { return &___sbyte_comparer_7; }
	inline void set_sbyte_comparer_7(SByteComparer_t550617552 * value)
	{
		___sbyte_comparer_7 = value;
		Il2CppCodeGenWriteBarrier((&___sbyte_comparer_7), value);
	}

	inline static int32_t get_offset_of_short_comparer_8() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t852766270_StaticFields, ___short_comparer_8)); }
	inline ShortComparer_t3445461946 * get_short_comparer_8() const { return ___short_comparer_8; }
	inline ShortComparer_t3445461946 ** get_address_of_short_comparer_8() { return &___short_comparer_8; }
	inline void set_short_comparer_8(ShortComparer_t3445461946 * value)
	{
		___short_comparer_8 = value;
		Il2CppCodeGenWriteBarrier((&___short_comparer_8), value);
	}

	inline static int32_t get_offset_of_int_comparer_9() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t852766270_StaticFields, ___int_comparer_9)); }
	inline IntComparer_t2811315210 * get_int_comparer_9() const { return ___int_comparer_9; }
	inline IntComparer_t2811315210 ** get_address_of_int_comparer_9() { return &___int_comparer_9; }
	inline void set_int_comparer_9(IntComparer_t2811315210 * value)
	{
		___int_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___int_comparer_9), value);
	}

	inline static int32_t get_offset_of_long_comparer_10() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t852766270_StaticFields, ___long_comparer_10)); }
	inline LongComparer_t4136535228 * get_long_comparer_10() const { return ___long_comparer_10; }
	inline LongComparer_t4136535228 ** get_address_of_long_comparer_10() { return &___long_comparer_10; }
	inline void set_long_comparer_10(LongComparer_t4136535228 * value)
	{
		___long_comparer_10 = value;
		Il2CppCodeGenWriteBarrier((&___long_comparer_10), value);
	}
};

struct MonoEnumInfo_t852766270_ThreadStaticFields
{
public:
	// System.Collections.Hashtable System.MonoEnumInfo::cache
	Hashtable_t3888042571 * ___cache_4;

public:
	inline static int32_t get_offset_of_cache_4() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t852766270_ThreadStaticFields, ___cache_4)); }
	inline Hashtable_t3888042571 * get_cache_4() const { return ___cache_4; }
	inline Hashtable_t3888042571 ** get_address_of_cache_4() { return &___cache_4; }
	inline void set_cache_4(Hashtable_t3888042571 * value)
	{
		___cache_4 = value;
		Il2CppCodeGenWriteBarrier((&___cache_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MonoEnumInfo
struct MonoEnumInfo_t852766270_marshaled_pinvoke
{
	Type_t * ___utype_0;
	RuntimeArray * ___values_1;
	char** ___names_2;
	Hashtable_t3888042571 * ___name_hash_3;
};
// Native definition for COM marshalling of System.MonoEnumInfo
struct MonoEnumInfo_t852766270_marshaled_com
{
	Type_t * ___utype_0;
	RuntimeArray * ___values_1;
	Il2CppChar** ___names_2;
	Hashtable_t3888042571 * ___name_hash_3;
};
#endif // MONOENUMINFO_T852766270_H
#ifndef UTF7DECODER_T2729478382_H
#define UTF7DECODER_T2729478382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/UTF7Decoder
struct  UTF7Decoder_t2729478382  : public Decoder_t521282581
{
public:
	// System.Int32 System.Text.UTF7Encoding/UTF7Decoder::leftOver
	int32_t ___leftOver_2;

public:
	inline static int32_t get_offset_of_leftOver_2() { return static_cast<int32_t>(offsetof(UTF7Decoder_t2729478382, ___leftOver_2)); }
	inline int32_t get_leftOver_2() const { return ___leftOver_2; }
	inline int32_t* get_address_of_leftOver_2() { return &___leftOver_2; }
	inline void set_leftOver_2(int32_t value)
	{
		___leftOver_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7DECODER_T2729478382_H
#ifndef LATIN1ENCODING_T1925324652_H
#define LATIN1ENCODING_T1925324652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Latin1Encoding
struct  Latin1Encoding_t1925324652  : public Encoding_t3706787480
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATIN1ENCODING_T1925324652_H
#ifndef ENCODERREPLACEMENTFALLBACKBUFFER_T3406662754_H
#define ENCODERREPLACEMENTFALLBACKBUFFER_T3406662754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallbackBuffer
struct  EncoderReplacementFallbackBuffer_t3406662754  : public EncoderFallbackBuffer_t1965492842
{
public:
	// System.String System.Text.EncoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_0;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.Boolean System.Text.EncoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_2;

public:
	inline static int32_t get_offset_of_replacement_0() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t3406662754, ___replacement_0)); }
	inline String_t* get_replacement_0() const { return ___replacement_0; }
	inline String_t** get_address_of_replacement_0() { return &___replacement_0; }
	inline void set_replacement_0(String_t* value)
	{
		___replacement_0 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t3406662754, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_fallback_assigned_2() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t3406662754, ___fallback_assigned_2)); }
	inline bool get_fallback_assigned_2() const { return ___fallback_assigned_2; }
	inline bool* get_address_of_fallback_assigned_2() { return &___fallback_assigned_2; }
	inline void set_fallback_assigned_2(bool value)
	{
		___fallback_assigned_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACKBUFFER_T3406662754_H
#ifndef ENCODERREPLACEMENTFALLBACK_T1906969490_H
#define ENCODERREPLACEMENTFALLBACK_T1906969490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallback
struct  EncoderReplacementFallback_t1906969490  : public EncoderFallback_t1590054241
{
public:
	// System.String System.Text.EncoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t1906969490, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACK_T1906969490_H
#ifndef UTF8ENCODING_T165736455_H
#define UTF8ENCODING_T165736455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t165736455  : public Encoding_t3706787480
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitIdentifier
	bool ___emitIdentifier_28;

public:
	inline static int32_t get_offset_of_emitIdentifier_28() { return static_cast<int32_t>(offsetof(UTF8Encoding_t165736455, ___emitIdentifier_28)); }
	inline bool get_emitIdentifier_28() const { return ___emitIdentifier_28; }
	inline bool* get_address_of_emitIdentifier_28() { return &___emitIdentifier_28; }
	inline void set_emitIdentifier_28(bool value)
	{
		___emitIdentifier_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T165736455_H
#ifndef ENCODEREXCEPTIONFALLBACKBUFFER_T4041143400_H
#define ENCODEREXCEPTIONFALLBACKBUFFER_T4041143400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallbackBuffer
struct  EncoderExceptionFallbackBuffer_t4041143400  : public EncoderFallbackBuffer_t1965492842
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACKBUFFER_T4041143400_H
#ifndef ENUM_T3770525609_H
#define ENUM_T3770525609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3770525609  : public ValueType_t316890423
{
public:

public:
};

struct Enum_t3770525609_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2836172046* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3770525609_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2836172046* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2836172046** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2836172046* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3770525609_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3770525609_marshaled_com
{
};
#endif // ENUM_T3770525609_H
#ifndef SYSTEMEXCEPTION_T3639568703_H
#define SYSTEMEXCEPTION_T3639568703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3639568703  : public Exception_t1284369516
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3639568703_H
#ifndef ENCODEREXCEPTIONFALLBACK_T4111924289_H
#define ENCODEREXCEPTIONFALLBACK_T4111924289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallback
struct  EncoderExceptionFallback_t4111924289  : public EncoderFallback_t1590054241
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACK_T4111924289_H
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
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	UIntPtr_t  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline UIntPtr_t  get_Zero_0() const { return ___Zero_0; }
	inline UIntPtr_t * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(UIntPtr_t  value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef INT32_T478367851_H
#define INT32_T478367851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t478367851 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t478367851, ___m_value_2)); }
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
#endif // INT32_T478367851_H
#ifndef DECODERREPLACEMENTFALLBACKBUFFER_T2236408147_H
#define DECODERREPLACEMENTFALLBACKBUFFER_T2236408147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallbackBuffer
struct  DecoderReplacementFallbackBuffer_t2236408147  : public DecoderFallbackBuffer_t4040458850
{
public:
	// System.Boolean System.Text.DecoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_0;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.String System.Text.DecoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_2;

public:
	inline static int32_t get_offset_of_fallback_assigned_0() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t2236408147, ___fallback_assigned_0)); }
	inline bool get_fallback_assigned_0() const { return ___fallback_assigned_0; }
	inline bool* get_address_of_fallback_assigned_0() { return &___fallback_assigned_0; }
	inline void set_fallback_assigned_0(bool value)
	{
		___fallback_assigned_0 = value;
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t2236408147, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_replacement_2() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t2236408147, ___replacement_2)); }
	inline String_t* get_replacement_2() const { return ___replacement_2; }
	inline String_t** get_address_of_replacement_2() { return &___replacement_2; }
	inline void set_replacement_2(String_t* value)
	{
		___replacement_2 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACKBUFFER_T2236408147_H
#ifndef DECODERREPLACEMENTFALLBACK_T4025786860_H
#define DECODERREPLACEMENTFALLBACK_T4025786860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallback
struct  DecoderReplacementFallback_t4025786860  : public DecoderFallback_t1043057282
{
public:
	// System.String System.Text.DecoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t4025786860, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACK_T4025786860_H
#ifndef TIMESPAN_T431183367_H
#define TIMESPAN_T431183367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t431183367 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t431183367, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t431183367_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t431183367  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t431183367  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t431183367  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t431183367_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t431183367  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t431183367 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t431183367  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t431183367_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t431183367  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t431183367 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t431183367  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t431183367_StaticFields, ___Zero_2)); }
	inline TimeSpan_t431183367  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t431183367 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t431183367  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T431183367_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t1247106334 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t1247106334 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t1247106334 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t1247106334 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef UTF8DECODER_T21626472_H
#define UTF8DECODER_T21626472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding/UTF8Decoder
struct  UTF8Decoder_t21626472  : public Decoder_t521282581
{
public:
	// System.UInt32 System.Text.UTF8Encoding/UTF8Decoder::leftOverBits
	uint32_t ___leftOverBits_2;
	// System.UInt32 System.Text.UTF8Encoding/UTF8Decoder::leftOverCount
	uint32_t ___leftOverCount_3;

public:
	inline static int32_t get_offset_of_leftOverBits_2() { return static_cast<int32_t>(offsetof(UTF8Decoder_t21626472, ___leftOverBits_2)); }
	inline uint32_t get_leftOverBits_2() const { return ___leftOverBits_2; }
	inline uint32_t* get_address_of_leftOverBits_2() { return &___leftOverBits_2; }
	inline void set_leftOverBits_2(uint32_t value)
	{
		___leftOverBits_2 = value;
	}

	inline static int32_t get_offset_of_leftOverCount_3() { return static_cast<int32_t>(offsetof(UTF8Decoder_t21626472, ___leftOverCount_3)); }
	inline uint32_t get_leftOverCount_3() const { return ___leftOverCount_3; }
	inline uint32_t* get_address_of_leftOverCount_3() { return &___leftOverCount_3; }
	inline void set_leftOverCount_3(uint32_t value)
	{
		___leftOverCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8DECODER_T21626472_H
#ifndef ASSEMBLYLOADEVENTARGS_T1741225557_H
#define ASSEMBLYLOADEVENTARGS_T1741225557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventArgs
struct  AssemblyLoadEventArgs_t1741225557  : public EventArgs_t696663806
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTARGS_T1741225557_H
#ifndef CONTEXTBOUNDOBJECT_T1647653499_H
#define CONTEXTBOUNDOBJECT_T1647653499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextBoundObject
struct  ContextBoundObject_t1647653499  : public MarshalByRefObject_t114867133
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTBOUNDOBJECT_T1647653499_H
#ifndef APPLICATIONEXCEPTION_T1659488088_H
#define APPLICATIONEXCEPTION_T1659488088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t1659488088  : public Exception_t1284369516
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T1659488088_H
#ifndef UNICODEENCODING_T691829365_H
#define UNICODEENCODING_T691829365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding
struct  UnicodeEncoding_t691829365  : public Encoding_t3706787480
{
public:
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_28;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_29;

public:
	inline static int32_t get_offset_of_bigEndian_28() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t691829365, ___bigEndian_28)); }
	inline bool get_bigEndian_28() const { return ___bigEndian_28; }
	inline bool* get_address_of_bigEndian_28() { return &___bigEndian_28; }
	inline void set_bigEndian_28(bool value)
	{
		___bigEndian_28 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_29() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t691829365, ___byteOrderMark_29)); }
	inline bool get_byteOrderMark_29() const { return ___byteOrderMark_29; }
	inline bool* get_address_of_byteOrderMark_29() { return &___byteOrderMark_29; }
	inline void set_byteOrderMark_29(bool value)
	{
		___byteOrderMark_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEENCODING_T691829365_H
#ifndef UNICODEDECODER_T586094092_H
#define UNICODEDECODER_T586094092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding/UnicodeDecoder
struct  UnicodeDecoder_t586094092  : public Decoder_t521282581
{
public:
	// System.Boolean System.Text.UnicodeEncoding/UnicodeDecoder::bigEndian
	bool ___bigEndian_2;
	// System.Int32 System.Text.UnicodeEncoding/UnicodeDecoder::leftOverByte
	int32_t ___leftOverByte_3;

public:
	inline static int32_t get_offset_of_bigEndian_2() { return static_cast<int32_t>(offsetof(UnicodeDecoder_t586094092, ___bigEndian_2)); }
	inline bool get_bigEndian_2() const { return ___bigEndian_2; }
	inline bool* get_address_of_bigEndian_2() { return &___bigEndian_2; }
	inline void set_bigEndian_2(bool value)
	{
		___bigEndian_2 = value;
	}

	inline static int32_t get_offset_of_leftOverByte_3() { return static_cast<int32_t>(offsetof(UnicodeDecoder_t586094092, ___leftOverByte_3)); }
	inline int32_t get_leftOverByte_3() const { return ___leftOverByte_3; }
	inline int32_t* get_address_of_leftOverByte_3() { return &___leftOverByte_3; }
	inline void set_leftOverByte_3(int32_t value)
	{
		___leftOverByte_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEDECODER_T586094092_H
#ifndef APPDOMAINMANAGER_T2331159039_H
#define APPDOMAINMANAGER_T2331159039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainManager
struct  AppDomainManager_t2331159039  : public MarshalByRefObject_t114867133
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINMANAGER_T2331159039_H
#ifndef TIMER_T3733815095_H
#define TIMER_T3733815095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer
struct  Timer_t3733815095  : public MarshalByRefObject_t114867133
{
public:
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_t3942985471 * ___callback_2;
	// System.Object System.Threading.Timer::state
	RuntimeObject * ___state_3;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms_4;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms_5;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run_6;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(Timer_t3733815095, ___callback_2)); }
	inline TimerCallback_t3942985471 * get_callback_2() const { return ___callback_2; }
	inline TimerCallback_t3942985471 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(TimerCallback_t3942985471 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((&___callback_2), value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(Timer_t3733815095, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((&___state_3), value);
	}

	inline static int32_t get_offset_of_due_time_ms_4() { return static_cast<int32_t>(offsetof(Timer_t3733815095, ___due_time_ms_4)); }
	inline int64_t get_due_time_ms_4() const { return ___due_time_ms_4; }
	inline int64_t* get_address_of_due_time_ms_4() { return &___due_time_ms_4; }
	inline void set_due_time_ms_4(int64_t value)
	{
		___due_time_ms_4 = value;
	}

	inline static int32_t get_offset_of_period_ms_5() { return static_cast<int32_t>(offsetof(Timer_t3733815095, ___period_ms_5)); }
	inline int64_t get_period_ms_5() const { return ___period_ms_5; }
	inline int64_t* get_address_of_period_ms_5() { return &___period_ms_5; }
	inline void set_period_ms_5(int64_t value)
	{
		___period_ms_5 = value;
	}

	inline static int32_t get_offset_of_next_run_6() { return static_cast<int32_t>(offsetof(Timer_t3733815095, ___next_run_6)); }
	inline int64_t get_next_run_6() const { return ___next_run_6; }
	inline int64_t* get_address_of_next_run_6() { return &___next_run_6; }
	inline void set_next_run_6(int64_t value)
	{
		___next_run_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Timer_t3733815095, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};

struct Timer_t3733815095_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer::scheduler
	Scheduler_t1543633277 * ___scheduler_1;

public:
	inline static int32_t get_offset_of_scheduler_1() { return static_cast<int32_t>(offsetof(Timer_t3733815095_StaticFields, ___scheduler_1)); }
	inline Scheduler_t1543633277 * get_scheduler_1() const { return ___scheduler_1; }
	inline Scheduler_t1543633277 ** get_address_of_scheduler_1() { return &___scheduler_1; }
	inline void set_scheduler_1(Scheduler_t1543633277 * value)
	{
		___scheduler_1 = value;
		Il2CppCodeGenWriteBarrier((&___scheduler_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMER_T3733815095_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T266859322_H
#define INDEXOUTOFRANGEEXCEPTION_T266859322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t266859322  : public SystemException_t3639568703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T266859322_H
#ifndef INVALIDCASTEXCEPTION_T721587147_H
#define INVALIDCASTEXCEPTION_T721587147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t721587147  : public SystemException_t3639568703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T721587147_H
#ifndef INVALIDOPERATIONEXCEPTION_T2934239458_H
#define INVALIDOPERATIONEXCEPTION_T2934239458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t2934239458  : public SystemException_t3639568703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T2934239458_H
#ifndef LOADEROPTIMIZATION_T949653382_H
#define LOADEROPTIMIZATION_T949653382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LoaderOptimization
struct  LoaderOptimization_t949653382 
{
public:
	// System.Int32 System.LoaderOptimization::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoaderOptimization_t949653382, ___value___1)); }
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
#endif // LOADEROPTIMIZATION_T949653382_H
#ifndef ACCESSVIOLATIONEXCEPTION_T3465367224_H
#define ACCESSVIOLATIONEXCEPTION_T3465367224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AccessViolationException
struct  AccessViolationException_t3465367224  : public SystemException_t3639568703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACCESSVIOLATIONEXCEPTION_T3465367224_H
#ifndef DATETIMEKIND_T537311956_H
#define DATETIMEKIND_T537311956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t537311956 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t537311956, ___value___1)); }
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
#endif // DATETIMEKIND_T537311956_H
#ifndef WHICH_T4213436936_H
#define WHICH_T4213436936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime/Which
struct  Which_t4213436936 
{
public:
	// System.Int32 System.DateTime/Which::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Which_t4213436936, ___value___1)); }
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
#endif // WHICH_T4213436936_H
#ifndef THREADSTATEEXCEPTION_T2155438338_H
#define THREADSTATEEXCEPTION_T2155438338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStateException
struct  ThreadStateException_t2155438338  : public SystemException_t3639568703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATEEXCEPTION_T2155438338_H
#ifndef THREADSTATE_T2629301148_H
#define THREADSTATE_T2629301148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadState
struct  ThreadState_t2629301148 
{
public:
	// System.Int32 System.Threading.ThreadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ThreadState_t2629301148, ___value___1)); }
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
#endif // THREADSTATE_T2629301148_H
#ifndef PRINCIPALPOLICY_T2805145517_H
#define PRINCIPALPOLICY_T2805145517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t2805145517 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t2805145517, ___value___1)); }
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
#endif // PRINCIPALPOLICY_T2805145517_H
#ifndef THREADINTERRUPTEDEXCEPTION_T139788246_H
#define THREADINTERRUPTEDEXCEPTION_T139788246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadInterruptedException
struct  ThreadInterruptedException_t139788246  : public SystemException_t3639568703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADINTERRUPTEDEXCEPTION_T139788246_H
#ifndef THREADABORTEXCEPTION_T2592490245_H
#define THREADABORTEXCEPTION_T2592490245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadAbortException
struct  ThreadAbortException_t2592490245  : public SystemException_t3639568703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADABORTEXCEPTION_T2592490245_H
#ifndef TYPELOADEXCEPTION_T169547231_H
#define TYPELOADEXCEPTION_T169547231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t169547231  : public SystemException_t3639568703
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t169547231, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t169547231, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T169547231_H
#ifndef WAITHANDLE_T1538001399_H
#define WAITHANDLE_T1538001399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t1538001399  : public MarshalByRefObject_t114867133
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t3546309298 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t1538001399, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t3546309298 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t3546309298 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t3546309298 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1538001399, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t1538001399_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	IntPtr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1538001399_StaticFields, ___InvalidHandle_3)); }
	inline IntPtr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline IntPtr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(IntPtr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T1538001399_H
#ifndef FORMATEXCEPTION_T2341376708_H
#define FORMATEXCEPTION_T2341376708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t2341376708  : public SystemException_t3639568703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T2341376708_H
#ifndef ARGUMENTEXCEPTION_T3496063590_H
#define ARGUMENTEXCEPTION_T3496063590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t3496063590  : public SystemException_t3639568703
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t3496063590, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T3496063590_H
#ifndef EXECUTIONENGINEEXCEPTION_T2114024528_H
#define EXECUTIONENGINEEXCEPTION_T2114024528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExecutionEngineException
struct  ExecutionEngineException_t2114024528  : public SystemException_t3639568703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONENGINEEXCEPTION_T2114024528_H
#ifndef ARITHMETICEXCEPTION_T2250265235_H
#define ARITHMETICEXCEPTION_T2250265235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t2250265235  : public SystemException_t3639568703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T2250265235_H
#ifndef SPECIALFOLDER_T4015662803_H
#define SPECIALFOLDER_T4015662803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment/SpecialFolder
struct  SpecialFolder_t4015662803 
{
public:
	// System.Int32 System.Environment/SpecialFolder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SpecialFolder_t4015662803, ___value___1)); }
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
#endif // SPECIALFOLDER_T4015662803_H
#ifndef ARRAYTYPEMISMATCHEXCEPTION_T2420559320_H
#define ARRAYTYPEMISMATCHEXCEPTION_T2420559320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArrayTypeMismatchException
struct  ArrayTypeMismatchException_t2420559320  : public SystemException_t3639568703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYTYPEMISMATCHEXCEPTION_T2420559320_H
#ifndef MEMBERACCESSEXCEPTION_T3044484108_H
#define MEMBERACCESSEXCEPTION_T3044484108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MemberAccessException
struct  MemberAccessException_t3044484108  : public SystemException_t3639568703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERACCESSEXCEPTION_T3044484108_H
#ifndef DAYOFWEEK_T350297983_H
#define DAYOFWEEK_T350297983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DayOfWeek
struct  DayOfWeek_t350297983 
{
public:
	// System.Int32 System.DayOfWeek::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DayOfWeek_t350297983, ___value___1)); }
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
#endif // DAYOFWEEK_T350297983_H
#ifndef ATTRIBUTETARGETS_T3861788150_H
#define ATTRIBUTETARGETS_T3861788150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t3861788150 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AttributeTargets_t3861788150, ___value___1)); }
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
#endif // ATTRIBUTETARGETS_T3861788150_H
#ifndef SYNCHRONIZATIONLOCKEXCEPTION_T2021586140_H
#define SYNCHRONIZATIONLOCKEXCEPTION_T2021586140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationLockException
struct  SynchronizationLockException_t2021586140  : public SystemException_t3639568703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONLOCKEXCEPTION_T2021586140_H
#ifndef EVENTRESETMODE_T299818870_H
#define EVENTRESETMODE_T299818870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventResetMode
struct  EventResetMode_t299818870 
{
public:
	// System.Int32 System.Threading.EventResetMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventResetMode_t299818870, ___value___1)); }
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
#endif // EVENTRESETMODE_T299818870_H
#ifndef ARGUMENTNULLEXCEPTION_T1531621001_H
#define ARGUMENTNULLEXCEPTION_T1531621001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1531621001  : public ArgumentException_t3496063590
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1531621001_H
#ifndef DATETIME_T1736846891_H
#define DATETIME_T1736846891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t1736846891 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t431183367  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t1736846891, ___ticks_0)); }
	inline TimeSpan_t431183367  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t431183367 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t431183367  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t1736846891, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t1736846891_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t1736846891  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t1736846891  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t3875454715* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t3875454715* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t3875454715* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t3875454715* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t3875454715* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t3875454715* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t3875454715* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t3115811210* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t3115811210* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t1736846891_StaticFields, ___MaxValue_2)); }
	inline DateTime_t1736846891  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t1736846891 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t1736846891  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t1736846891_StaticFields, ___MinValue_3)); }
	inline DateTime_t1736846891  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t1736846891 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t1736846891  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t1736846891_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t3875454715* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t3875454715** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t3875454715* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t1736846891_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t3875454715* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t3875454715** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t3875454715* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t1736846891_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t3875454715* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t3875454715** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t3875454715* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t1736846891_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t3875454715* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t3875454715** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t3875454715* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t1736846891_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t3875454715* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t3875454715** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t3875454715* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t1736846891_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t3875454715* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t3875454715** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t3875454715* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t1736846891_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t3875454715* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t3875454715** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t3875454715* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t1736846891_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t3115811210* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t3115811210** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t3115811210* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t1736846891_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t3115811210* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t3115811210** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t3115811210* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t1736846891_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t1736846891_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T1736846891_H
#ifndef DECODERFALLBACKEXCEPTION_T4018793064_H
#define DECODERFALLBACKEXCEPTION_T4018793064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackException
struct  DecoderFallbackException_t4018793064  : public ArgumentException_t3496063590
{
public:
	// System.Byte[] System.Text.DecoderFallbackException::bytes_unknown
	ByteU5BU5D_t1907542542* ___bytes_unknown_13;
	// System.Int32 System.Text.DecoderFallbackException::index
	int32_t ___index_14;

public:
	inline static int32_t get_offset_of_bytes_unknown_13() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t4018793064, ___bytes_unknown_13)); }
	inline ByteU5BU5D_t1907542542* get_bytes_unknown_13() const { return ___bytes_unknown_13; }
	inline ByteU5BU5D_t1907542542** get_address_of_bytes_unknown_13() { return &___bytes_unknown_13; }
	inline void set_bytes_unknown_13(ByteU5BU5D_t1907542542* value)
	{
		___bytes_unknown_13 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_unknown_13), value);
	}

	inline static int32_t get_offset_of_index_14() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t4018793064, ___index_14)); }
	inline int32_t get_index_14() const { return ___index_14; }
	inline int32_t* get_address_of_index_14() { return &___index_14; }
	inline void set_index_14(int32_t value)
	{
		___index_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKEXCEPTION_T4018793064_H
#ifndef DIVIDEBYZEROEXCEPTION_T271326688_H
#define DIVIDEBYZEROEXCEPTION_T271326688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DivideByZeroException
struct  DivideByZeroException_t271326688  : public ArithmeticException_t2250265235
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIVIDEBYZEROEXCEPTION_T271326688_H
#ifndef DLLNOTFOUNDEXCEPTION_T3007533527_H
#define DLLNOTFOUNDEXCEPTION_T3007533527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DllNotFoundException
struct  DllNotFoundException_t3007533527  : public TypeLoadException_t169547231
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLNOTFOUNDEXCEPTION_T3007533527_H
#ifndef ENTRYPOINTNOTFOUNDEXCEPTION_T4048575421_H
#define ENTRYPOINTNOTFOUNDEXCEPTION_T4048575421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EntryPointNotFoundException
struct  EntryPointNotFoundException_t4048575421  : public TypeLoadException_t169547231
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRYPOINTNOTFOUNDEXCEPTION_T4048575421_H
#ifndef EVENTWAITHANDLE_T2776147464_H
#define EVENTWAITHANDLE_T2776147464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t2776147464  : public WaitHandle_t1538001399
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T2776147464_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T3929619371_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T3929619371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t3929619371  : public ArgumentException_t3496063590
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t3929619371, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T3929619371_H
#ifndef APPDOMAIN_T4268980281_H
#define APPDOMAIN_T4268980281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomain
struct  AppDomain_t4268980281  : public MarshalByRefObject_t114867133
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	IntPtr_t ____mono_app_domain_1;
	// System.Security.Policy.Evidence System.AppDomain::_evidence
	Evidence_t1454212873 * ____evidence_6;
	// System.Security.PermissionSet System.AppDomain::_granted
	PermissionSet_t1335152259 * ____granted_7;
	// System.Security.Principal.PrincipalPolicy System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AppDomainManager System.AppDomain::_domain_manager
	AppDomainManager_t2331159039 * ____domain_manager_11;
	// System.ActivationContext System.AppDomain::_activation
	ActivationContext_t204378384 * ____activation_12;
	// System.ApplicationIdentity System.AppDomain::_applicationIdentity
	ApplicationIdentity_t944841144 * ____applicationIdentity_13;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t3478766493 * ___AssemblyLoad_14;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t102251343 * ___AssemblyResolve_15;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t3080903977 * ___DomainUnload_16;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t3080903977 * ___ProcessExit_17;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t102251343 * ___ResourceResolve_18;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t102251343 * ___TypeResolve_19;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t1653846976 * ___UnhandledException_20;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t102251343 * ___ReflectionOnlyAssemblyResolve_21;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281, ____mono_app_domain_1)); }
	inline IntPtr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline IntPtr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(IntPtr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281, ____evidence_6)); }
	inline Evidence_t1454212873 * get__evidence_6() const { return ____evidence_6; }
	inline Evidence_t1454212873 ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(Evidence_t1454212873 * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_6), value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281, ____granted_7)); }
	inline PermissionSet_t1335152259 * get__granted_7() const { return ____granted_7; }
	inline PermissionSet_t1335152259 ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(PermissionSet_t1335152259 * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((&____granted_7), value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of__domain_manager_11() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281, ____domain_manager_11)); }
	inline AppDomainManager_t2331159039 * get__domain_manager_11() const { return ____domain_manager_11; }
	inline AppDomainManager_t2331159039 ** get_address_of__domain_manager_11() { return &____domain_manager_11; }
	inline void set__domain_manager_11(AppDomainManager_t2331159039 * value)
	{
		____domain_manager_11 = value;
		Il2CppCodeGenWriteBarrier((&____domain_manager_11), value);
	}

	inline static int32_t get_offset_of__activation_12() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281, ____activation_12)); }
	inline ActivationContext_t204378384 * get__activation_12() const { return ____activation_12; }
	inline ActivationContext_t204378384 ** get_address_of__activation_12() { return &____activation_12; }
	inline void set__activation_12(ActivationContext_t204378384 * value)
	{
		____activation_12 = value;
		Il2CppCodeGenWriteBarrier((&____activation_12), value);
	}

	inline static int32_t get_offset_of__applicationIdentity_13() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281, ____applicationIdentity_13)); }
	inline ApplicationIdentity_t944841144 * get__applicationIdentity_13() const { return ____applicationIdentity_13; }
	inline ApplicationIdentity_t944841144 ** get_address_of__applicationIdentity_13() { return &____applicationIdentity_13; }
	inline void set__applicationIdentity_13(ApplicationIdentity_t944841144 * value)
	{
		____applicationIdentity_13 = value;
		Il2CppCodeGenWriteBarrier((&____applicationIdentity_13), value);
	}

	inline static int32_t get_offset_of_AssemblyLoad_14() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281, ___AssemblyLoad_14)); }
	inline AssemblyLoadEventHandler_t3478766493 * get_AssemblyLoad_14() const { return ___AssemblyLoad_14; }
	inline AssemblyLoadEventHandler_t3478766493 ** get_address_of_AssemblyLoad_14() { return &___AssemblyLoad_14; }
	inline void set_AssemblyLoad_14(AssemblyLoadEventHandler_t3478766493 * value)
	{
		___AssemblyLoad_14 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyLoad_14), value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281, ___AssemblyResolve_15)); }
	inline ResolveEventHandler_t102251343 * get_AssemblyResolve_15() const { return ___AssemblyResolve_15; }
	inline ResolveEventHandler_t102251343 ** get_address_of_AssemblyResolve_15() { return &___AssemblyResolve_15; }
	inline void set_AssemblyResolve_15(ResolveEventHandler_t102251343 * value)
	{
		___AssemblyResolve_15 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyResolve_15), value);
	}

	inline static int32_t get_offset_of_DomainUnload_16() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281, ___DomainUnload_16)); }
	inline EventHandler_t3080903977 * get_DomainUnload_16() const { return ___DomainUnload_16; }
	inline EventHandler_t3080903977 ** get_address_of_DomainUnload_16() { return &___DomainUnload_16; }
	inline void set_DomainUnload_16(EventHandler_t3080903977 * value)
	{
		___DomainUnload_16 = value;
		Il2CppCodeGenWriteBarrier((&___DomainUnload_16), value);
	}

	inline static int32_t get_offset_of_ProcessExit_17() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281, ___ProcessExit_17)); }
	inline EventHandler_t3080903977 * get_ProcessExit_17() const { return ___ProcessExit_17; }
	inline EventHandler_t3080903977 ** get_address_of_ProcessExit_17() { return &___ProcessExit_17; }
	inline void set_ProcessExit_17(EventHandler_t3080903977 * value)
	{
		___ProcessExit_17 = value;
		Il2CppCodeGenWriteBarrier((&___ProcessExit_17), value);
	}

	inline static int32_t get_offset_of_ResourceResolve_18() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281, ___ResourceResolve_18)); }
	inline ResolveEventHandler_t102251343 * get_ResourceResolve_18() const { return ___ResourceResolve_18; }
	inline ResolveEventHandler_t102251343 ** get_address_of_ResourceResolve_18() { return &___ResourceResolve_18; }
	inline void set_ResourceResolve_18(ResolveEventHandler_t102251343 * value)
	{
		___ResourceResolve_18 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceResolve_18), value);
	}

	inline static int32_t get_offset_of_TypeResolve_19() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281, ___TypeResolve_19)); }
	inline ResolveEventHandler_t102251343 * get_TypeResolve_19() const { return ___TypeResolve_19; }
	inline ResolveEventHandler_t102251343 ** get_address_of_TypeResolve_19() { return &___TypeResolve_19; }
	inline void set_TypeResolve_19(ResolveEventHandler_t102251343 * value)
	{
		___TypeResolve_19 = value;
		Il2CppCodeGenWriteBarrier((&___TypeResolve_19), value);
	}

	inline static int32_t get_offset_of_UnhandledException_20() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281, ___UnhandledException_20)); }
	inline UnhandledExceptionEventHandler_t1653846976 * get_UnhandledException_20() const { return ___UnhandledException_20; }
	inline UnhandledExceptionEventHandler_t1653846976 ** get_address_of_UnhandledException_20() { return &___UnhandledException_20; }
	inline void set_UnhandledException_20(UnhandledExceptionEventHandler_t1653846976 * value)
	{
		___UnhandledException_20 = value;
		Il2CppCodeGenWriteBarrier((&___UnhandledException_20), value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_21() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281, ___ReflectionOnlyAssemblyResolve_21)); }
	inline ResolveEventHandler_t102251343 * get_ReflectionOnlyAssemblyResolve_21() const { return ___ReflectionOnlyAssemblyResolve_21; }
	inline ResolveEventHandler_t102251343 ** get_address_of_ReflectionOnlyAssemblyResolve_21() { return &___ReflectionOnlyAssemblyResolve_21; }
	inline void set_ReflectionOnlyAssemblyResolve_21(ResolveEventHandler_t102251343 * value)
	{
		___ReflectionOnlyAssemblyResolve_21 = value;
		Il2CppCodeGenWriteBarrier((&___ReflectionOnlyAssemblyResolve_21), value);
	}
};

struct AppDomain_t4268980281_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t4268980281 * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((&____process_guid_2), value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281_StaticFields, ___default_domain_10)); }
	inline AppDomain_t4268980281 * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_t4268980281 ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_t4268980281 * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((&___default_domain_10), value);
	}
};

struct AppDomain_t4268980281_ThreadStaticFields
{
public:
	// System.Collections.Hashtable System.AppDomain::type_resolve_in_progress
	Hashtable_t3888042571 * ___type_resolve_in_progress_3;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress
	Hashtable_t3888042571 * ___assembly_resolve_in_progress_4;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress_refonly
	Hashtable_t3888042571 * ___assembly_resolve_in_progress_refonly_5;
	// System.Security.Principal.IPrincipal System.AppDomain::_principal
	RuntimeObject* ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Hashtable_t3888042571 * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Hashtable_t3888042571 ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Hashtable_t3888042571 * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_resolve_in_progress_3), value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Hashtable_t3888042571 * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Hashtable_t3888042571 ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Hashtable_t3888042571 * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_resolve_in_progress_4), value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Hashtable_t3888042571 * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Hashtable_t3888042571 ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Hashtable_t3888042571 * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_resolve_in_progress_refonly_5), value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_t4268980281_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject* get__principal_9() const { return ____principal_9; }
	inline RuntimeObject** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject* value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((&____principal_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAIN_T4268980281_H
#ifndef APPDOMAINSETUP_T2337283408_H
#define APPDOMAINSETUP_T2337283408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainSetup
struct  AppDomainSetup_t2337283408  : public RuntimeObject
{
public:
	// System.String System.AppDomainSetup::application_base
	String_t* ___application_base_0;
	// System.String System.AppDomainSetup::application_name
	String_t* ___application_name_1;
	// System.String System.AppDomainSetup::cache_path
	String_t* ___cache_path_2;
	// System.String System.AppDomainSetup::configuration_file
	String_t* ___configuration_file_3;
	// System.String System.AppDomainSetup::dynamic_base
	String_t* ___dynamic_base_4;
	// System.String System.AppDomainSetup::license_file
	String_t* ___license_file_5;
	// System.String System.AppDomainSetup::private_bin_path
	String_t* ___private_bin_path_6;
	// System.String System.AppDomainSetup::private_bin_path_probe
	String_t* ___private_bin_path_probe_7;
	// System.String System.AppDomainSetup::shadow_copy_directories
	String_t* ___shadow_copy_directories_8;
	// System.String System.AppDomainSetup::shadow_copy_files
	String_t* ___shadow_copy_files_9;
	// System.Boolean System.AppDomainSetup::publisher_policy
	bool ___publisher_policy_10;
	// System.Boolean System.AppDomainSetup::path_changed
	bool ___path_changed_11;
	// System.LoaderOptimization System.AppDomainSetup::loader_optimization
	int32_t ___loader_optimization_12;
	// System.Boolean System.AppDomainSetup::disallow_binding_redirects
	bool ___disallow_binding_redirects_13;
	// System.Boolean System.AppDomainSetup::disallow_code_downloads
	bool ___disallow_code_downloads_14;
	// System.Runtime.Hosting.ActivationArguments System.AppDomainSetup::_activationArguments
	ActivationArguments_t2392823215 * ____activationArguments_15;
	// System.AppDomainInitializer System.AppDomainSetup::domain_initializer
	AppDomainInitializer_t655592511 * ___domain_initializer_16;
	// System.Security.Policy.ApplicationTrust System.AppDomainSetup::application_trust
	ApplicationTrust_t3199779743 * ___application_trust_17;
	// System.String[] System.AppDomainSetup::domain_initializer_args
	StringU5BU5D_t3875454715* ___domain_initializer_args_18;
	// System.Security.SecurityElement System.AppDomainSetup::application_trust_xml
	SecurityElement_t2419184962 * ___application_trust_xml_19;
	// System.Boolean System.AppDomainSetup::disallow_appbase_probe
	bool ___disallow_appbase_probe_20;
	// System.Byte[] System.AppDomainSetup::configuration_bytes
	ByteU5BU5D_t1907542542* ___configuration_bytes_21;

public:
	inline static int32_t get_offset_of_application_base_0() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___application_base_0)); }
	inline String_t* get_application_base_0() const { return ___application_base_0; }
	inline String_t** get_address_of_application_base_0() { return &___application_base_0; }
	inline void set_application_base_0(String_t* value)
	{
		___application_base_0 = value;
		Il2CppCodeGenWriteBarrier((&___application_base_0), value);
	}

	inline static int32_t get_offset_of_application_name_1() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___application_name_1)); }
	inline String_t* get_application_name_1() const { return ___application_name_1; }
	inline String_t** get_address_of_application_name_1() { return &___application_name_1; }
	inline void set_application_name_1(String_t* value)
	{
		___application_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___application_name_1), value);
	}

	inline static int32_t get_offset_of_cache_path_2() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___cache_path_2)); }
	inline String_t* get_cache_path_2() const { return ___cache_path_2; }
	inline String_t** get_address_of_cache_path_2() { return &___cache_path_2; }
	inline void set_cache_path_2(String_t* value)
	{
		___cache_path_2 = value;
		Il2CppCodeGenWriteBarrier((&___cache_path_2), value);
	}

	inline static int32_t get_offset_of_configuration_file_3() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___configuration_file_3)); }
	inline String_t* get_configuration_file_3() const { return ___configuration_file_3; }
	inline String_t** get_address_of_configuration_file_3() { return &___configuration_file_3; }
	inline void set_configuration_file_3(String_t* value)
	{
		___configuration_file_3 = value;
		Il2CppCodeGenWriteBarrier((&___configuration_file_3), value);
	}

	inline static int32_t get_offset_of_dynamic_base_4() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___dynamic_base_4)); }
	inline String_t* get_dynamic_base_4() const { return ___dynamic_base_4; }
	inline String_t** get_address_of_dynamic_base_4() { return &___dynamic_base_4; }
	inline void set_dynamic_base_4(String_t* value)
	{
		___dynamic_base_4 = value;
		Il2CppCodeGenWriteBarrier((&___dynamic_base_4), value);
	}

	inline static int32_t get_offset_of_license_file_5() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___license_file_5)); }
	inline String_t* get_license_file_5() const { return ___license_file_5; }
	inline String_t** get_address_of_license_file_5() { return &___license_file_5; }
	inline void set_license_file_5(String_t* value)
	{
		___license_file_5 = value;
		Il2CppCodeGenWriteBarrier((&___license_file_5), value);
	}

	inline static int32_t get_offset_of_private_bin_path_6() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___private_bin_path_6)); }
	inline String_t* get_private_bin_path_6() const { return ___private_bin_path_6; }
	inline String_t** get_address_of_private_bin_path_6() { return &___private_bin_path_6; }
	inline void set_private_bin_path_6(String_t* value)
	{
		___private_bin_path_6 = value;
		Il2CppCodeGenWriteBarrier((&___private_bin_path_6), value);
	}

	inline static int32_t get_offset_of_private_bin_path_probe_7() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___private_bin_path_probe_7)); }
	inline String_t* get_private_bin_path_probe_7() const { return ___private_bin_path_probe_7; }
	inline String_t** get_address_of_private_bin_path_probe_7() { return &___private_bin_path_probe_7; }
	inline void set_private_bin_path_probe_7(String_t* value)
	{
		___private_bin_path_probe_7 = value;
		Il2CppCodeGenWriteBarrier((&___private_bin_path_probe_7), value);
	}

	inline static int32_t get_offset_of_shadow_copy_directories_8() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___shadow_copy_directories_8)); }
	inline String_t* get_shadow_copy_directories_8() const { return ___shadow_copy_directories_8; }
	inline String_t** get_address_of_shadow_copy_directories_8() { return &___shadow_copy_directories_8; }
	inline void set_shadow_copy_directories_8(String_t* value)
	{
		___shadow_copy_directories_8 = value;
		Il2CppCodeGenWriteBarrier((&___shadow_copy_directories_8), value);
	}

	inline static int32_t get_offset_of_shadow_copy_files_9() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___shadow_copy_files_9)); }
	inline String_t* get_shadow_copy_files_9() const { return ___shadow_copy_files_9; }
	inline String_t** get_address_of_shadow_copy_files_9() { return &___shadow_copy_files_9; }
	inline void set_shadow_copy_files_9(String_t* value)
	{
		___shadow_copy_files_9 = value;
		Il2CppCodeGenWriteBarrier((&___shadow_copy_files_9), value);
	}

	inline static int32_t get_offset_of_publisher_policy_10() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___publisher_policy_10)); }
	inline bool get_publisher_policy_10() const { return ___publisher_policy_10; }
	inline bool* get_address_of_publisher_policy_10() { return &___publisher_policy_10; }
	inline void set_publisher_policy_10(bool value)
	{
		___publisher_policy_10 = value;
	}

	inline static int32_t get_offset_of_path_changed_11() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___path_changed_11)); }
	inline bool get_path_changed_11() const { return ___path_changed_11; }
	inline bool* get_address_of_path_changed_11() { return &___path_changed_11; }
	inline void set_path_changed_11(bool value)
	{
		___path_changed_11 = value;
	}

	inline static int32_t get_offset_of_loader_optimization_12() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___loader_optimization_12)); }
	inline int32_t get_loader_optimization_12() const { return ___loader_optimization_12; }
	inline int32_t* get_address_of_loader_optimization_12() { return &___loader_optimization_12; }
	inline void set_loader_optimization_12(int32_t value)
	{
		___loader_optimization_12 = value;
	}

	inline static int32_t get_offset_of_disallow_binding_redirects_13() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___disallow_binding_redirects_13)); }
	inline bool get_disallow_binding_redirects_13() const { return ___disallow_binding_redirects_13; }
	inline bool* get_address_of_disallow_binding_redirects_13() { return &___disallow_binding_redirects_13; }
	inline void set_disallow_binding_redirects_13(bool value)
	{
		___disallow_binding_redirects_13 = value;
	}

	inline static int32_t get_offset_of_disallow_code_downloads_14() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___disallow_code_downloads_14)); }
	inline bool get_disallow_code_downloads_14() const { return ___disallow_code_downloads_14; }
	inline bool* get_address_of_disallow_code_downloads_14() { return &___disallow_code_downloads_14; }
	inline void set_disallow_code_downloads_14(bool value)
	{
		___disallow_code_downloads_14 = value;
	}

	inline static int32_t get_offset_of__activationArguments_15() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ____activationArguments_15)); }
	inline ActivationArguments_t2392823215 * get__activationArguments_15() const { return ____activationArguments_15; }
	inline ActivationArguments_t2392823215 ** get_address_of__activationArguments_15() { return &____activationArguments_15; }
	inline void set__activationArguments_15(ActivationArguments_t2392823215 * value)
	{
		____activationArguments_15 = value;
		Il2CppCodeGenWriteBarrier((&____activationArguments_15), value);
	}

	inline static int32_t get_offset_of_domain_initializer_16() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___domain_initializer_16)); }
	inline AppDomainInitializer_t655592511 * get_domain_initializer_16() const { return ___domain_initializer_16; }
	inline AppDomainInitializer_t655592511 ** get_address_of_domain_initializer_16() { return &___domain_initializer_16; }
	inline void set_domain_initializer_16(AppDomainInitializer_t655592511 * value)
	{
		___domain_initializer_16 = value;
		Il2CppCodeGenWriteBarrier((&___domain_initializer_16), value);
	}

	inline static int32_t get_offset_of_application_trust_17() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___application_trust_17)); }
	inline ApplicationTrust_t3199779743 * get_application_trust_17() const { return ___application_trust_17; }
	inline ApplicationTrust_t3199779743 ** get_address_of_application_trust_17() { return &___application_trust_17; }
	inline void set_application_trust_17(ApplicationTrust_t3199779743 * value)
	{
		___application_trust_17 = value;
		Il2CppCodeGenWriteBarrier((&___application_trust_17), value);
	}

	inline static int32_t get_offset_of_domain_initializer_args_18() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___domain_initializer_args_18)); }
	inline StringU5BU5D_t3875454715* get_domain_initializer_args_18() const { return ___domain_initializer_args_18; }
	inline StringU5BU5D_t3875454715** get_address_of_domain_initializer_args_18() { return &___domain_initializer_args_18; }
	inline void set_domain_initializer_args_18(StringU5BU5D_t3875454715* value)
	{
		___domain_initializer_args_18 = value;
		Il2CppCodeGenWriteBarrier((&___domain_initializer_args_18), value);
	}

	inline static int32_t get_offset_of_application_trust_xml_19() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___application_trust_xml_19)); }
	inline SecurityElement_t2419184962 * get_application_trust_xml_19() const { return ___application_trust_xml_19; }
	inline SecurityElement_t2419184962 ** get_address_of_application_trust_xml_19() { return &___application_trust_xml_19; }
	inline void set_application_trust_xml_19(SecurityElement_t2419184962 * value)
	{
		___application_trust_xml_19 = value;
		Il2CppCodeGenWriteBarrier((&___application_trust_xml_19), value);
	}

	inline static int32_t get_offset_of_disallow_appbase_probe_20() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___disallow_appbase_probe_20)); }
	inline bool get_disallow_appbase_probe_20() const { return ___disallow_appbase_probe_20; }
	inline bool* get_address_of_disallow_appbase_probe_20() { return &___disallow_appbase_probe_20; }
	inline void set_disallow_appbase_probe_20(bool value)
	{
		___disallow_appbase_probe_20 = value;
	}

	inline static int32_t get_offset_of_configuration_bytes_21() { return static_cast<int32_t>(offsetof(AppDomainSetup_t2337283408, ___configuration_bytes_21)); }
	inline ByteU5BU5D_t1907542542* get_configuration_bytes_21() const { return ___configuration_bytes_21; }
	inline ByteU5BU5D_t1907542542** get_address_of_configuration_bytes_21() { return &___configuration_bytes_21; }
	inline void set_configuration_bytes_21(ByteU5BU5D_t1907542542* value)
	{
		___configuration_bytes_21 = value;
		Il2CppCodeGenWriteBarrier((&___configuration_bytes_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINSETUP_T2337283408_H
#ifndef ENCODERFALLBACKEXCEPTION_T3203760793_H
#define ENCODERFALLBACKEXCEPTION_T3203760793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackException
struct  EncoderFallbackException_t3203760793  : public ArgumentException_t3496063590
{
public:
	// System.Char System.Text.EncoderFallbackException::char_unknown
	Il2CppChar ___char_unknown_13;
	// System.Char System.Text.EncoderFallbackException::char_unknown_high
	Il2CppChar ___char_unknown_high_14;
	// System.Char System.Text.EncoderFallbackException::char_unknown_low
	Il2CppChar ___char_unknown_low_15;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index_16;

public:
	inline static int32_t get_offset_of_char_unknown_13() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t3203760793, ___char_unknown_13)); }
	inline Il2CppChar get_char_unknown_13() const { return ___char_unknown_13; }
	inline Il2CppChar* get_address_of_char_unknown_13() { return &___char_unknown_13; }
	inline void set_char_unknown_13(Il2CppChar value)
	{
		___char_unknown_13 = value;
	}

	inline static int32_t get_offset_of_char_unknown_high_14() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t3203760793, ___char_unknown_high_14)); }
	inline Il2CppChar get_char_unknown_high_14() const { return ___char_unknown_high_14; }
	inline Il2CppChar* get_address_of_char_unknown_high_14() { return &___char_unknown_high_14; }
	inline void set_char_unknown_high_14(Il2CppChar value)
	{
		___char_unknown_high_14 = value;
	}

	inline static int32_t get_offset_of_char_unknown_low_15() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t3203760793, ___char_unknown_low_15)); }
	inline Il2CppChar get_char_unknown_low_15() const { return ___char_unknown_low_15; }
	inline Il2CppChar* get_address_of_char_unknown_low_15() { return &___char_unknown_low_15; }
	inline void set_char_unknown_low_15(Il2CppChar value)
	{
		___char_unknown_low_15 = value;
	}

	inline static int32_t get_offset_of_index_16() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t3203760793, ___index_16)); }
	inline int32_t get_index_16() const { return ___index_16; }
	inline int32_t* get_address_of_index_16() { return &___index_16; }
	inline void set_index_16(int32_t value)
	{
		___index_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKEXCEPTION_T3203760793_H
#ifndef FIELDACCESSEXCEPTION_T526134110_H
#define FIELDACCESSEXCEPTION_T526134110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FieldAccessException
struct  FieldAccessException_t526134110  : public MemberAccessException_t3044484108
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDACCESSEXCEPTION_T526134110_H
#ifndef MUTEX_T667042861_H
#define MUTEX_T667042861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Mutex
struct  Mutex_t667042861  : public WaitHandle_t1538001399
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MUTEX_T667042861_H
#ifndef THREAD_T842215656_H
#define THREAD_T842215656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t842215656  : public CriticalFinalizerObject_t3875005984
{
public:
	// System.Int32 System.Threading.Thread::lock_thread_id
	int32_t ___lock_thread_id_0;
	// System.IntPtr System.Threading.Thread::system_thread_handle
	IntPtr_t ___system_thread_handle_1;
	// System.Object System.Threading.Thread::cached_culture_info
	RuntimeObject * ___cached_culture_info_2;
	// System.IntPtr System.Threading.Thread::unused0
	IntPtr_t ___unused0_3;
	// System.Boolean System.Threading.Thread::threadpool_thread
	bool ___threadpool_thread_4;
	// System.IntPtr System.Threading.Thread::name
	IntPtr_t ___name_5;
	// System.Int32 System.Threading.Thread::name_len
	int32_t ___name_len_6;
	// System.Threading.ThreadState System.Threading.Thread::state
	int32_t ___state_7;
	// System.Object System.Threading.Thread::abort_exc
	RuntimeObject * ___abort_exc_8;
	// System.Int32 System.Threading.Thread::abort_state_handle
	int32_t ___abort_state_handle_9;
	// System.Int64 System.Threading.Thread::thread_id
	int64_t ___thread_id_10;
	// System.IntPtr System.Threading.Thread::start_notify
	IntPtr_t ___start_notify_11;
	// System.IntPtr System.Threading.Thread::stack_ptr
	IntPtr_t ___stack_ptr_12;
	// System.UIntPtr System.Threading.Thread::static_data
	UIntPtr_t  ___static_data_13;
	// System.IntPtr System.Threading.Thread::jit_data
	IntPtr_t ___jit_data_14;
	// System.IntPtr System.Threading.Thread::lock_data
	IntPtr_t ___lock_data_15;
	// System.Object System.Threading.Thread::current_appcontext
	RuntimeObject * ___current_appcontext_16;
	// System.Int32 System.Threading.Thread::stack_size
	int32_t ___stack_size_17;
	// System.Object System.Threading.Thread::start_obj
	RuntimeObject * ___start_obj_18;
	// System.IntPtr System.Threading.Thread::appdomain_refs
	IntPtr_t ___appdomain_refs_19;
	// System.Int32 System.Threading.Thread::interruption_requested
	int32_t ___interruption_requested_20;
	// System.IntPtr System.Threading.Thread::suspend_event
	IntPtr_t ___suspend_event_21;
	// System.IntPtr System.Threading.Thread::suspended_event
	IntPtr_t ___suspended_event_22;
	// System.IntPtr System.Threading.Thread::resume_event
	IntPtr_t ___resume_event_23;
	// System.IntPtr System.Threading.Thread::synch_cs
	IntPtr_t ___synch_cs_24;
	// System.IntPtr System.Threading.Thread::serialized_culture_info
	IntPtr_t ___serialized_culture_info_25;
	// System.Int32 System.Threading.Thread::serialized_culture_info_len
	int32_t ___serialized_culture_info_len_26;
	// System.IntPtr System.Threading.Thread::serialized_ui_culture_info
	IntPtr_t ___serialized_ui_culture_info_27;
	// System.Int32 System.Threading.Thread::serialized_ui_culture_info_len
	int32_t ___serialized_ui_culture_info_len_28;
	// System.Boolean System.Threading.Thread::thread_dump_requested
	bool ___thread_dump_requested_29;
	// System.IntPtr System.Threading.Thread::end_stack
	IntPtr_t ___end_stack_30;
	// System.Boolean System.Threading.Thread::thread_interrupt_requested
	bool ___thread_interrupt_requested_31;
	// System.Byte System.Threading.Thread::apartment_state
	uint8_t ___apartment_state_32;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Thread::critical_region_level
	int32_t ___critical_region_level_33;
	// System.Int32 System.Threading.Thread::small_id
	int32_t ___small_id_34;
	// System.IntPtr System.Threading.Thread::manage_callback
	IntPtr_t ___manage_callback_35;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_36;
	// System.Threading.ExecutionContext System.Threading.Thread::ec_to_set
	ExecutionContext_t2272822824 * ___ec_to_set_37;
	// System.IntPtr System.Threading.Thread::interrupt_on_stop
	IntPtr_t ___interrupt_on_stop_38;
	// System.IntPtr System.Threading.Thread::unused3
	IntPtr_t ___unused3_39;
	// System.IntPtr System.Threading.Thread::unused4
	IntPtr_t ___unused4_40;
	// System.IntPtr System.Threading.Thread::unused5
	IntPtr_t ___unused5_41;
	// System.IntPtr System.Threading.Thread::unused6
	IntPtr_t ___unused6_42;
	// System.MulticastDelegate System.Threading.Thread::threadstart
	MulticastDelegate_t3137754623 * ___threadstart_45;
	// System.Int32 System.Threading.Thread::managed_id
	int32_t ___managed_id_46;
	// System.Security.Principal.IPrincipal System.Threading.Thread::_principal
	RuntimeObject* ____principal_47;
	// System.Boolean System.Threading.Thread::in_currentculture
	bool ___in_currentculture_50;

public:
	inline static int32_t get_offset_of_lock_thread_id_0() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___lock_thread_id_0)); }
	inline int32_t get_lock_thread_id_0() const { return ___lock_thread_id_0; }
	inline int32_t* get_address_of_lock_thread_id_0() { return &___lock_thread_id_0; }
	inline void set_lock_thread_id_0(int32_t value)
	{
		___lock_thread_id_0 = value;
	}

	inline static int32_t get_offset_of_system_thread_handle_1() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___system_thread_handle_1)); }
	inline IntPtr_t get_system_thread_handle_1() const { return ___system_thread_handle_1; }
	inline IntPtr_t* get_address_of_system_thread_handle_1() { return &___system_thread_handle_1; }
	inline void set_system_thread_handle_1(IntPtr_t value)
	{
		___system_thread_handle_1 = value;
	}

	inline static int32_t get_offset_of_cached_culture_info_2() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___cached_culture_info_2)); }
	inline RuntimeObject * get_cached_culture_info_2() const { return ___cached_culture_info_2; }
	inline RuntimeObject ** get_address_of_cached_culture_info_2() { return &___cached_culture_info_2; }
	inline void set_cached_culture_info_2(RuntimeObject * value)
	{
		___cached_culture_info_2 = value;
		Il2CppCodeGenWriteBarrier((&___cached_culture_info_2), value);
	}

	inline static int32_t get_offset_of_unused0_3() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___unused0_3)); }
	inline IntPtr_t get_unused0_3() const { return ___unused0_3; }
	inline IntPtr_t* get_address_of_unused0_3() { return &___unused0_3; }
	inline void set_unused0_3(IntPtr_t value)
	{
		___unused0_3 = value;
	}

	inline static int32_t get_offset_of_threadpool_thread_4() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___threadpool_thread_4)); }
	inline bool get_threadpool_thread_4() const { return ___threadpool_thread_4; }
	inline bool* get_address_of_threadpool_thread_4() { return &___threadpool_thread_4; }
	inline void set_threadpool_thread_4(bool value)
	{
		___threadpool_thread_4 = value;
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___name_5)); }
	inline IntPtr_t get_name_5() const { return ___name_5; }
	inline IntPtr_t* get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(IntPtr_t value)
	{
		___name_5 = value;
	}

	inline static int32_t get_offset_of_name_len_6() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___name_len_6)); }
	inline int32_t get_name_len_6() const { return ___name_len_6; }
	inline int32_t* get_address_of_name_len_6() { return &___name_len_6; }
	inline void set_name_len_6(int32_t value)
	{
		___name_len_6 = value;
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___state_7)); }
	inline int32_t get_state_7() const { return ___state_7; }
	inline int32_t* get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(int32_t value)
	{
		___state_7 = value;
	}

	inline static int32_t get_offset_of_abort_exc_8() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___abort_exc_8)); }
	inline RuntimeObject * get_abort_exc_8() const { return ___abort_exc_8; }
	inline RuntimeObject ** get_address_of_abort_exc_8() { return &___abort_exc_8; }
	inline void set_abort_exc_8(RuntimeObject * value)
	{
		___abort_exc_8 = value;
		Il2CppCodeGenWriteBarrier((&___abort_exc_8), value);
	}

	inline static int32_t get_offset_of_abort_state_handle_9() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___abort_state_handle_9)); }
	inline int32_t get_abort_state_handle_9() const { return ___abort_state_handle_9; }
	inline int32_t* get_address_of_abort_state_handle_9() { return &___abort_state_handle_9; }
	inline void set_abort_state_handle_9(int32_t value)
	{
		___abort_state_handle_9 = value;
	}

	inline static int32_t get_offset_of_thread_id_10() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___thread_id_10)); }
	inline int64_t get_thread_id_10() const { return ___thread_id_10; }
	inline int64_t* get_address_of_thread_id_10() { return &___thread_id_10; }
	inline void set_thread_id_10(int64_t value)
	{
		___thread_id_10 = value;
	}

	inline static int32_t get_offset_of_start_notify_11() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___start_notify_11)); }
	inline IntPtr_t get_start_notify_11() const { return ___start_notify_11; }
	inline IntPtr_t* get_address_of_start_notify_11() { return &___start_notify_11; }
	inline void set_start_notify_11(IntPtr_t value)
	{
		___start_notify_11 = value;
	}

	inline static int32_t get_offset_of_stack_ptr_12() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___stack_ptr_12)); }
	inline IntPtr_t get_stack_ptr_12() const { return ___stack_ptr_12; }
	inline IntPtr_t* get_address_of_stack_ptr_12() { return &___stack_ptr_12; }
	inline void set_stack_ptr_12(IntPtr_t value)
	{
		___stack_ptr_12 = value;
	}

	inline static int32_t get_offset_of_static_data_13() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___static_data_13)); }
	inline UIntPtr_t  get_static_data_13() const { return ___static_data_13; }
	inline UIntPtr_t * get_address_of_static_data_13() { return &___static_data_13; }
	inline void set_static_data_13(UIntPtr_t  value)
	{
		___static_data_13 = value;
	}

	inline static int32_t get_offset_of_jit_data_14() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___jit_data_14)); }
	inline IntPtr_t get_jit_data_14() const { return ___jit_data_14; }
	inline IntPtr_t* get_address_of_jit_data_14() { return &___jit_data_14; }
	inline void set_jit_data_14(IntPtr_t value)
	{
		___jit_data_14 = value;
	}

	inline static int32_t get_offset_of_lock_data_15() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___lock_data_15)); }
	inline IntPtr_t get_lock_data_15() const { return ___lock_data_15; }
	inline IntPtr_t* get_address_of_lock_data_15() { return &___lock_data_15; }
	inline void set_lock_data_15(IntPtr_t value)
	{
		___lock_data_15 = value;
	}

	inline static int32_t get_offset_of_current_appcontext_16() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___current_appcontext_16)); }
	inline RuntimeObject * get_current_appcontext_16() const { return ___current_appcontext_16; }
	inline RuntimeObject ** get_address_of_current_appcontext_16() { return &___current_appcontext_16; }
	inline void set_current_appcontext_16(RuntimeObject * value)
	{
		___current_appcontext_16 = value;
		Il2CppCodeGenWriteBarrier((&___current_appcontext_16), value);
	}

	inline static int32_t get_offset_of_stack_size_17() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___stack_size_17)); }
	inline int32_t get_stack_size_17() const { return ___stack_size_17; }
	inline int32_t* get_address_of_stack_size_17() { return &___stack_size_17; }
	inline void set_stack_size_17(int32_t value)
	{
		___stack_size_17 = value;
	}

	inline static int32_t get_offset_of_start_obj_18() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___start_obj_18)); }
	inline RuntimeObject * get_start_obj_18() const { return ___start_obj_18; }
	inline RuntimeObject ** get_address_of_start_obj_18() { return &___start_obj_18; }
	inline void set_start_obj_18(RuntimeObject * value)
	{
		___start_obj_18 = value;
		Il2CppCodeGenWriteBarrier((&___start_obj_18), value);
	}

	inline static int32_t get_offset_of_appdomain_refs_19() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___appdomain_refs_19)); }
	inline IntPtr_t get_appdomain_refs_19() const { return ___appdomain_refs_19; }
	inline IntPtr_t* get_address_of_appdomain_refs_19() { return &___appdomain_refs_19; }
	inline void set_appdomain_refs_19(IntPtr_t value)
	{
		___appdomain_refs_19 = value;
	}

	inline static int32_t get_offset_of_interruption_requested_20() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___interruption_requested_20)); }
	inline int32_t get_interruption_requested_20() const { return ___interruption_requested_20; }
	inline int32_t* get_address_of_interruption_requested_20() { return &___interruption_requested_20; }
	inline void set_interruption_requested_20(int32_t value)
	{
		___interruption_requested_20 = value;
	}

	inline static int32_t get_offset_of_suspend_event_21() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___suspend_event_21)); }
	inline IntPtr_t get_suspend_event_21() const { return ___suspend_event_21; }
	inline IntPtr_t* get_address_of_suspend_event_21() { return &___suspend_event_21; }
	inline void set_suspend_event_21(IntPtr_t value)
	{
		___suspend_event_21 = value;
	}

	inline static int32_t get_offset_of_suspended_event_22() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___suspended_event_22)); }
	inline IntPtr_t get_suspended_event_22() const { return ___suspended_event_22; }
	inline IntPtr_t* get_address_of_suspended_event_22() { return &___suspended_event_22; }
	inline void set_suspended_event_22(IntPtr_t value)
	{
		___suspended_event_22 = value;
	}

	inline static int32_t get_offset_of_resume_event_23() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___resume_event_23)); }
	inline IntPtr_t get_resume_event_23() const { return ___resume_event_23; }
	inline IntPtr_t* get_address_of_resume_event_23() { return &___resume_event_23; }
	inline void set_resume_event_23(IntPtr_t value)
	{
		___resume_event_23 = value;
	}

	inline static int32_t get_offset_of_synch_cs_24() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___synch_cs_24)); }
	inline IntPtr_t get_synch_cs_24() const { return ___synch_cs_24; }
	inline IntPtr_t* get_address_of_synch_cs_24() { return &___synch_cs_24; }
	inline void set_synch_cs_24(IntPtr_t value)
	{
		___synch_cs_24 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_25() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___serialized_culture_info_25)); }
	inline IntPtr_t get_serialized_culture_info_25() const { return ___serialized_culture_info_25; }
	inline IntPtr_t* get_address_of_serialized_culture_info_25() { return &___serialized_culture_info_25; }
	inline void set_serialized_culture_info_25(IntPtr_t value)
	{
		___serialized_culture_info_25 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_len_26() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___serialized_culture_info_len_26)); }
	inline int32_t get_serialized_culture_info_len_26() const { return ___serialized_culture_info_len_26; }
	inline int32_t* get_address_of_serialized_culture_info_len_26() { return &___serialized_culture_info_len_26; }
	inline void set_serialized_culture_info_len_26(int32_t value)
	{
		___serialized_culture_info_len_26 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_27() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___serialized_ui_culture_info_27)); }
	inline IntPtr_t get_serialized_ui_culture_info_27() const { return ___serialized_ui_culture_info_27; }
	inline IntPtr_t* get_address_of_serialized_ui_culture_info_27() { return &___serialized_ui_culture_info_27; }
	inline void set_serialized_ui_culture_info_27(IntPtr_t value)
	{
		___serialized_ui_culture_info_27 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_len_28() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___serialized_ui_culture_info_len_28)); }
	inline int32_t get_serialized_ui_culture_info_len_28() const { return ___serialized_ui_culture_info_len_28; }
	inline int32_t* get_address_of_serialized_ui_culture_info_len_28() { return &___serialized_ui_culture_info_len_28; }
	inline void set_serialized_ui_culture_info_len_28(int32_t value)
	{
		___serialized_ui_culture_info_len_28 = value;
	}

	inline static int32_t get_offset_of_thread_dump_requested_29() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___thread_dump_requested_29)); }
	inline bool get_thread_dump_requested_29() const { return ___thread_dump_requested_29; }
	inline bool* get_address_of_thread_dump_requested_29() { return &___thread_dump_requested_29; }
	inline void set_thread_dump_requested_29(bool value)
	{
		___thread_dump_requested_29 = value;
	}

	inline static int32_t get_offset_of_end_stack_30() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___end_stack_30)); }
	inline IntPtr_t get_end_stack_30() const { return ___end_stack_30; }
	inline IntPtr_t* get_address_of_end_stack_30() { return &___end_stack_30; }
	inline void set_end_stack_30(IntPtr_t value)
	{
		___end_stack_30 = value;
	}

	inline static int32_t get_offset_of_thread_interrupt_requested_31() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___thread_interrupt_requested_31)); }
	inline bool get_thread_interrupt_requested_31() const { return ___thread_interrupt_requested_31; }
	inline bool* get_address_of_thread_interrupt_requested_31() { return &___thread_interrupt_requested_31; }
	inline void set_thread_interrupt_requested_31(bool value)
	{
		___thread_interrupt_requested_31 = value;
	}

	inline static int32_t get_offset_of_apartment_state_32() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___apartment_state_32)); }
	inline uint8_t get_apartment_state_32() const { return ___apartment_state_32; }
	inline uint8_t* get_address_of_apartment_state_32() { return &___apartment_state_32; }
	inline void set_apartment_state_32(uint8_t value)
	{
		___apartment_state_32 = value;
	}

	inline static int32_t get_offset_of_critical_region_level_33() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___critical_region_level_33)); }
	inline int32_t get_critical_region_level_33() const { return ___critical_region_level_33; }
	inline int32_t* get_address_of_critical_region_level_33() { return &___critical_region_level_33; }
	inline void set_critical_region_level_33(int32_t value)
	{
		___critical_region_level_33 = value;
	}

	inline static int32_t get_offset_of_small_id_34() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___small_id_34)); }
	inline int32_t get_small_id_34() const { return ___small_id_34; }
	inline int32_t* get_address_of_small_id_34() { return &___small_id_34; }
	inline void set_small_id_34(int32_t value)
	{
		___small_id_34 = value;
	}

	inline static int32_t get_offset_of_manage_callback_35() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___manage_callback_35)); }
	inline IntPtr_t get_manage_callback_35() const { return ___manage_callback_35; }
	inline IntPtr_t* get_address_of_manage_callback_35() { return &___manage_callback_35; }
	inline void set_manage_callback_35(IntPtr_t value)
	{
		___manage_callback_35 = value;
	}

	inline static int32_t get_offset_of_pending_exception_36() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___pending_exception_36)); }
	inline RuntimeObject * get_pending_exception_36() const { return ___pending_exception_36; }
	inline RuntimeObject ** get_address_of_pending_exception_36() { return &___pending_exception_36; }
	inline void set_pending_exception_36(RuntimeObject * value)
	{
		___pending_exception_36 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_36), value);
	}

	inline static int32_t get_offset_of_ec_to_set_37() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___ec_to_set_37)); }
	inline ExecutionContext_t2272822824 * get_ec_to_set_37() const { return ___ec_to_set_37; }
	inline ExecutionContext_t2272822824 ** get_address_of_ec_to_set_37() { return &___ec_to_set_37; }
	inline void set_ec_to_set_37(ExecutionContext_t2272822824 * value)
	{
		___ec_to_set_37 = value;
		Il2CppCodeGenWriteBarrier((&___ec_to_set_37), value);
	}

	inline static int32_t get_offset_of_interrupt_on_stop_38() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___interrupt_on_stop_38)); }
	inline IntPtr_t get_interrupt_on_stop_38() const { return ___interrupt_on_stop_38; }
	inline IntPtr_t* get_address_of_interrupt_on_stop_38() { return &___interrupt_on_stop_38; }
	inline void set_interrupt_on_stop_38(IntPtr_t value)
	{
		___interrupt_on_stop_38 = value;
	}

	inline static int32_t get_offset_of_unused3_39() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___unused3_39)); }
	inline IntPtr_t get_unused3_39() const { return ___unused3_39; }
	inline IntPtr_t* get_address_of_unused3_39() { return &___unused3_39; }
	inline void set_unused3_39(IntPtr_t value)
	{
		___unused3_39 = value;
	}

	inline static int32_t get_offset_of_unused4_40() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___unused4_40)); }
	inline IntPtr_t get_unused4_40() const { return ___unused4_40; }
	inline IntPtr_t* get_address_of_unused4_40() { return &___unused4_40; }
	inline void set_unused4_40(IntPtr_t value)
	{
		___unused4_40 = value;
	}

	inline static int32_t get_offset_of_unused5_41() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___unused5_41)); }
	inline IntPtr_t get_unused5_41() const { return ___unused5_41; }
	inline IntPtr_t* get_address_of_unused5_41() { return &___unused5_41; }
	inline void set_unused5_41(IntPtr_t value)
	{
		___unused5_41 = value;
	}

	inline static int32_t get_offset_of_unused6_42() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___unused6_42)); }
	inline IntPtr_t get_unused6_42() const { return ___unused6_42; }
	inline IntPtr_t* get_address_of_unused6_42() { return &___unused6_42; }
	inline void set_unused6_42(IntPtr_t value)
	{
		___unused6_42 = value;
	}

	inline static int32_t get_offset_of_threadstart_45() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___threadstart_45)); }
	inline MulticastDelegate_t3137754623 * get_threadstart_45() const { return ___threadstart_45; }
	inline MulticastDelegate_t3137754623 ** get_address_of_threadstart_45() { return &___threadstart_45; }
	inline void set_threadstart_45(MulticastDelegate_t3137754623 * value)
	{
		___threadstart_45 = value;
		Il2CppCodeGenWriteBarrier((&___threadstart_45), value);
	}

	inline static int32_t get_offset_of_managed_id_46() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___managed_id_46)); }
	inline int32_t get_managed_id_46() const { return ___managed_id_46; }
	inline int32_t* get_address_of_managed_id_46() { return &___managed_id_46; }
	inline void set_managed_id_46(int32_t value)
	{
		___managed_id_46 = value;
	}

	inline static int32_t get_offset_of__principal_47() { return static_cast<int32_t>(offsetof(Thread_t842215656, ____principal_47)); }
	inline RuntimeObject* get__principal_47() const { return ____principal_47; }
	inline RuntimeObject** get_address_of__principal_47() { return &____principal_47; }
	inline void set__principal_47(RuntimeObject* value)
	{
		____principal_47 = value;
		Il2CppCodeGenWriteBarrier((&____principal_47), value);
	}

	inline static int32_t get_offset_of_in_currentculture_50() { return static_cast<int32_t>(offsetof(Thread_t842215656, ___in_currentculture_50)); }
	inline bool get_in_currentculture_50() const { return ___in_currentculture_50; }
	inline bool* get_address_of_in_currentculture_50() { return &___in_currentculture_50; }
	inline void set_in_currentculture_50(bool value)
	{
		___in_currentculture_50 = value;
	}
};

struct Thread_t842215656_StaticFields
{
public:
	// System.Collections.Hashtable System.Threading.Thread::datastorehash
	Hashtable_t3888042571 * ___datastorehash_48;
	// System.Object System.Threading.Thread::datastore_lock
	RuntimeObject * ___datastore_lock_49;
	// System.Object System.Threading.Thread::culture_lock
	RuntimeObject * ___culture_lock_51;

public:
	inline static int32_t get_offset_of_datastorehash_48() { return static_cast<int32_t>(offsetof(Thread_t842215656_StaticFields, ___datastorehash_48)); }
	inline Hashtable_t3888042571 * get_datastorehash_48() const { return ___datastorehash_48; }
	inline Hashtable_t3888042571 ** get_address_of_datastorehash_48() { return &___datastorehash_48; }
	inline void set_datastorehash_48(Hashtable_t3888042571 * value)
	{
		___datastorehash_48 = value;
		Il2CppCodeGenWriteBarrier((&___datastorehash_48), value);
	}

	inline static int32_t get_offset_of_datastore_lock_49() { return static_cast<int32_t>(offsetof(Thread_t842215656_StaticFields, ___datastore_lock_49)); }
	inline RuntimeObject * get_datastore_lock_49() const { return ___datastore_lock_49; }
	inline RuntimeObject ** get_address_of_datastore_lock_49() { return &___datastore_lock_49; }
	inline void set_datastore_lock_49(RuntimeObject * value)
	{
		___datastore_lock_49 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_lock_49), value);
	}

	inline static int32_t get_offset_of_culture_lock_51() { return static_cast<int32_t>(offsetof(Thread_t842215656_StaticFields, ___culture_lock_51)); }
	inline RuntimeObject * get_culture_lock_51() const { return ___culture_lock_51; }
	inline RuntimeObject ** get_address_of_culture_lock_51() { return &___culture_lock_51; }
	inline void set_culture_lock_51(RuntimeObject * value)
	{
		___culture_lock_51 = value;
		Il2CppCodeGenWriteBarrier((&___culture_lock_51), value);
	}
};

struct Thread_t842215656_ThreadStaticFields
{
public:
	// System.Object[] System.Threading.Thread::local_slots
	ObjectU5BU5D_t2358992757* ___local_slots_43;
	// System.Threading.ExecutionContext System.Threading.Thread::_ec
	ExecutionContext_t2272822824 * ____ec_44;

public:
	inline static int32_t get_offset_of_local_slots_43() { return static_cast<int32_t>(offsetof(Thread_t842215656_ThreadStaticFields, ___local_slots_43)); }
	inline ObjectU5BU5D_t2358992757* get_local_slots_43() const { return ___local_slots_43; }
	inline ObjectU5BU5D_t2358992757** get_address_of_local_slots_43() { return &___local_slots_43; }
	inline void set_local_slots_43(ObjectU5BU5D_t2358992757* value)
	{
		___local_slots_43 = value;
		Il2CppCodeGenWriteBarrier((&___local_slots_43), value);
	}

	inline static int32_t get_offset_of__ec_44() { return static_cast<int32_t>(offsetof(Thread_t842215656_ThreadStaticFields, ____ec_44)); }
	inline ExecutionContext_t2272822824 * get__ec_44() const { return ____ec_44; }
	inline ExecutionContext_t2272822824 ** get_address_of__ec_44() { return &____ec_44; }
	inline void set__ec_44(ExecutionContext_t2272822824 * value)
	{
		____ec_44 = value;
		Il2CppCodeGenWriteBarrier((&____ec_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T842215656_H
#ifndef MANUALRESETEVENT_T2959154083_H
#define MANUALRESETEVENT_T2959154083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ManualResetEvent
struct  ManualResetEvent_t2959154083  : public EventWaitHandle_t2776147464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANUALRESETEVENT_T2959154083_H
#ifndef DATETIMEOFFSET_T2878813583_H
#define DATETIMEOFFSET_T2878813583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t2878813583 
{
public:
	// System.DateTime System.DateTimeOffset::dt
	DateTime_t1736846891  ___dt_2;
	// System.TimeSpan System.DateTimeOffset::utc_offset
	TimeSpan_t431183367  ___utc_offset_3;

public:
	inline static int32_t get_offset_of_dt_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t2878813583, ___dt_2)); }
	inline DateTime_t1736846891  get_dt_2() const { return ___dt_2; }
	inline DateTime_t1736846891 * get_address_of_dt_2() { return &___dt_2; }
	inline void set_dt_2(DateTime_t1736846891  value)
	{
		___dt_2 = value;
	}

	inline static int32_t get_offset_of_utc_offset_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t2878813583, ___utc_offset_3)); }
	inline TimeSpan_t431183367  get_utc_offset_3() const { return ___utc_offset_3; }
	inline TimeSpan_t431183367 * get_address_of_utc_offset_3() { return &___utc_offset_3; }
	inline void set_utc_offset_3(TimeSpan_t431183367  value)
	{
		___utc_offset_3 = value;
	}
};

struct DateTimeOffset_t2878813583_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t2878813583  ___MaxValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t2878813583  ___MinValue_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t2878813583_StaticFields, ___MaxValue_0)); }
	inline DateTimeOffset_t2878813583  get_MaxValue_0() const { return ___MaxValue_0; }
	inline DateTimeOffset_t2878813583 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(DateTimeOffset_t2878813583  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t2878813583_StaticFields, ___MinValue_1)); }
	inline DateTimeOffset_t2878813583  get_MinValue_1() const { return ___MinValue_1; }
	inline DateTimeOffset_t2878813583 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(DateTimeOffset_t2878813583  value)
	{
		___MinValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T2878813583_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize700 = { sizeof (DecoderFallbackBuffer_t4040458850), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize701 = { sizeof (DecoderFallbackException_t4018793064), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable701[2] = 
{
	DecoderFallbackException_t4018793064::get_offset_of_bytes_unknown_13(),
	DecoderFallbackException_t4018793064::get_offset_of_index_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize702 = { sizeof (DecoderReplacementFallback_t4025786860), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable702[1] = 
{
	DecoderReplacementFallback_t4025786860::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize703 = { sizeof (DecoderReplacementFallbackBuffer_t2236408147), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable703[3] = 
{
	DecoderReplacementFallbackBuffer_t2236408147::get_offset_of_fallback_assigned_0(),
	DecoderReplacementFallbackBuffer_t2236408147::get_offset_of_current_1(),
	DecoderReplacementFallbackBuffer_t2236408147::get_offset_of_replacement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize704 = { sizeof (EncoderExceptionFallback_t4111924289), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize705 = { sizeof (EncoderExceptionFallbackBuffer_t4041143400), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize706 = { sizeof (EncoderFallback_t1590054241), -1, sizeof(EncoderFallback_t1590054241_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable706[3] = 
{
	EncoderFallback_t1590054241_StaticFields::get_offset_of_exception_fallback_0(),
	EncoderFallback_t1590054241_StaticFields::get_offset_of_replacement_fallback_1(),
	EncoderFallback_t1590054241_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize707 = { sizeof (EncoderFallbackBuffer_t1965492842), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize708 = { sizeof (EncoderFallbackException_t3203760793), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable708[4] = 
{
	EncoderFallbackException_t3203760793::get_offset_of_char_unknown_13(),
	EncoderFallbackException_t3203760793::get_offset_of_char_unknown_high_14(),
	EncoderFallbackException_t3203760793::get_offset_of_char_unknown_low_15(),
	EncoderFallbackException_t3203760793::get_offset_of_index_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize709 = { sizeof (EncoderReplacementFallback_t1906969490), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable709[1] = 
{
	EncoderReplacementFallback_t1906969490::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize710 = { sizeof (EncoderReplacementFallbackBuffer_t3406662754), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable710[3] = 
{
	EncoderReplacementFallbackBuffer_t3406662754::get_offset_of_replacement_0(),
	EncoderReplacementFallbackBuffer_t3406662754::get_offset_of_current_1(),
	EncoderReplacementFallbackBuffer_t3406662754::get_offset_of_fallback_assigned_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize711 = { sizeof (Encoding_t3706787480), -1, sizeof(Encoding_t3706787480_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable711[28] = 
{
	Encoding_t3706787480::get_offset_of_codePage_0(),
	Encoding_t3706787480::get_offset_of_windows_code_page_1(),
	Encoding_t3706787480::get_offset_of_is_readonly_2(),
	Encoding_t3706787480::get_offset_of_decoder_fallback_3(),
	Encoding_t3706787480::get_offset_of_encoder_fallback_4(),
	Encoding_t3706787480_StaticFields::get_offset_of_i18nAssembly_5(),
	Encoding_t3706787480_StaticFields::get_offset_of_i18nDisabled_6(),
	Encoding_t3706787480_StaticFields::get_offset_of_encodings_7(),
	Encoding_t3706787480::get_offset_of_body_name_8(),
	Encoding_t3706787480::get_offset_of_encoding_name_9(),
	Encoding_t3706787480::get_offset_of_header_name_10(),
	Encoding_t3706787480::get_offset_of_is_mail_news_display_11(),
	Encoding_t3706787480::get_offset_of_is_mail_news_save_12(),
	Encoding_t3706787480::get_offset_of_is_browser_save_13(),
	Encoding_t3706787480::get_offset_of_is_browser_display_14(),
	Encoding_t3706787480::get_offset_of_web_name_15(),
	Encoding_t3706787480_StaticFields::get_offset_of_asciiEncoding_16(),
	Encoding_t3706787480_StaticFields::get_offset_of_bigEndianEncoding_17(),
	Encoding_t3706787480_StaticFields::get_offset_of_defaultEncoding_18(),
	Encoding_t3706787480_StaticFields::get_offset_of_utf7Encoding_19(),
	Encoding_t3706787480_StaticFields::get_offset_of_utf8EncodingWithMarkers_20(),
	Encoding_t3706787480_StaticFields::get_offset_of_utf8EncodingWithoutMarkers_21(),
	Encoding_t3706787480_StaticFields::get_offset_of_unicodeEncoding_22(),
	Encoding_t3706787480_StaticFields::get_offset_of_isoLatin1Encoding_23(),
	Encoding_t3706787480_StaticFields::get_offset_of_utf8EncodingUnsafe_24(),
	Encoding_t3706787480_StaticFields::get_offset_of_utf32Encoding_25(),
	Encoding_t3706787480_StaticFields::get_offset_of_bigEndianUTF32Encoding_26(),
	Encoding_t3706787480_StaticFields::get_offset_of_lockobj_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize712 = { sizeof (ForwardingDecoder_t2437165155), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable712[1] = 
{
	ForwardingDecoder_t2437165155::get_offset_of_encoding_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize713 = { sizeof (Latin1Encoding_t1925324652), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize714 = { sizeof (StringBuilder_t60157835), sizeof(char*), 0, 0 };
extern const int32_t g_FieldOffsetTable714[5] = 
{
	0,
	StringBuilder_t60157835::get_offset_of__length_1(),
	StringBuilder_t60157835::get_offset_of__str_2(),
	StringBuilder_t60157835::get_offset_of__cached_str_3(),
	StringBuilder_t60157835::get_offset_of__maxCapacity_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize715 = { sizeof (UTF32Encoding_t3234085058), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable715[2] = 
{
	UTF32Encoding_t3234085058::get_offset_of_bigEndian_28(),
	UTF32Encoding_t3234085058::get_offset_of_byteOrderMark_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize716 = { sizeof (UTF32Decoder_t3011027013), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable716[3] = 
{
	UTF32Decoder_t3011027013::get_offset_of_bigEndian_2(),
	UTF32Decoder_t3011027013::get_offset_of_leftOverByte_3(),
	UTF32Decoder_t3011027013::get_offset_of_leftOverLength_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize717 = { sizeof (UTF7Encoding_t2290274601), -1, sizeof(UTF7Encoding_t2290274601_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable717[3] = 
{
	UTF7Encoding_t2290274601::get_offset_of_allowOptionals_28(),
	UTF7Encoding_t2290274601_StaticFields::get_offset_of_encodingRules_29(),
	UTF7Encoding_t2290274601_StaticFields::get_offset_of_base64Values_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize718 = { sizeof (UTF7Decoder_t2729478382), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable718[1] = 
{
	UTF7Decoder_t2729478382::get_offset_of_leftOver_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize719 = { sizeof (UTF8Encoding_t165736455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable719[1] = 
{
	UTF8Encoding_t165736455::get_offset_of_emitIdentifier_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize720 = { sizeof (UTF8Decoder_t21626472), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable720[2] = 
{
	UTF8Decoder_t21626472::get_offset_of_leftOverBits_2(),
	UTF8Decoder_t21626472::get_offset_of_leftOverCount_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize721 = { sizeof (UnicodeEncoding_t691829365), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable721[2] = 
{
	UnicodeEncoding_t691829365::get_offset_of_bigEndian_28(),
	UnicodeEncoding_t691829365::get_offset_of_byteOrderMark_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize722 = { sizeof (UnicodeDecoder_t586094092), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable722[2] = 
{
	UnicodeDecoder_t586094092::get_offset_of_bigEndian_2(),
	UnicodeDecoder_t586094092::get_offset_of_leftOverByte_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize723 = { sizeof (CompressedStack_t430538020), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable723[1] = 
{
	CompressedStack_t430538020::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize724 = { sizeof (EventResetMode_t299818870)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable724[3] = 
{
	EventResetMode_t299818870::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize725 = { sizeof (EventWaitHandle_t2776147464), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize726 = { sizeof (ExecutionContext_t2272822824), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable726[3] = 
{
	ExecutionContext_t2272822824::get_offset_of__sc_0(),
	ExecutionContext_t2272822824::get_offset_of__suppressFlow_1(),
	ExecutionContext_t2272822824::get_offset_of__capture_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize727 = { sizeof (Interlocked_t2443964739), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize728 = { sizeof (ManualResetEvent_t2959154083), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize729 = { sizeof (Monitor_t3853413118), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize730 = { sizeof (Mutex_t667042861), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize731 = { sizeof (NativeEventCalls_t3566667775), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize732 = { sizeof (SynchronizationContext_t637223515), -1, 0, sizeof(SynchronizationContext_t637223515_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable732[1] = 
{
	THREAD_STATIC_FIELD_OFFSET,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize733 = { sizeof (SynchronizationLockException_t2021586140), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize734 = { sizeof (Thread_t842215656), -1, sizeof(Thread_t842215656_StaticFields), sizeof(Thread_t842215656_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable734[52] = 
{
	Thread_t842215656::get_offset_of_lock_thread_id_0(),
	Thread_t842215656::get_offset_of_system_thread_handle_1(),
	Thread_t842215656::get_offset_of_cached_culture_info_2(),
	Thread_t842215656::get_offset_of_unused0_3(),
	Thread_t842215656::get_offset_of_threadpool_thread_4(),
	Thread_t842215656::get_offset_of_name_5(),
	Thread_t842215656::get_offset_of_name_len_6(),
	Thread_t842215656::get_offset_of_state_7(),
	Thread_t842215656::get_offset_of_abort_exc_8(),
	Thread_t842215656::get_offset_of_abort_state_handle_9(),
	Thread_t842215656::get_offset_of_thread_id_10(),
	Thread_t842215656::get_offset_of_start_notify_11(),
	Thread_t842215656::get_offset_of_stack_ptr_12(),
	Thread_t842215656::get_offset_of_static_data_13(),
	Thread_t842215656::get_offset_of_jit_data_14(),
	Thread_t842215656::get_offset_of_lock_data_15(),
	Thread_t842215656::get_offset_of_current_appcontext_16(),
	Thread_t842215656::get_offset_of_stack_size_17(),
	Thread_t842215656::get_offset_of_start_obj_18(),
	Thread_t842215656::get_offset_of_appdomain_refs_19(),
	Thread_t842215656::get_offset_of_interruption_requested_20(),
	Thread_t842215656::get_offset_of_suspend_event_21(),
	Thread_t842215656::get_offset_of_suspended_event_22(),
	Thread_t842215656::get_offset_of_resume_event_23(),
	Thread_t842215656::get_offset_of_synch_cs_24(),
	Thread_t842215656::get_offset_of_serialized_culture_info_25(),
	Thread_t842215656::get_offset_of_serialized_culture_info_len_26(),
	Thread_t842215656::get_offset_of_serialized_ui_culture_info_27(),
	Thread_t842215656::get_offset_of_serialized_ui_culture_info_len_28(),
	Thread_t842215656::get_offset_of_thread_dump_requested_29(),
	Thread_t842215656::get_offset_of_end_stack_30(),
	Thread_t842215656::get_offset_of_thread_interrupt_requested_31(),
	Thread_t842215656::get_offset_of_apartment_state_32(),
	Thread_t842215656::get_offset_of_critical_region_level_33(),
	Thread_t842215656::get_offset_of_small_id_34(),
	Thread_t842215656::get_offset_of_manage_callback_35(),
	Thread_t842215656::get_offset_of_pending_exception_36(),
	Thread_t842215656::get_offset_of_ec_to_set_37(),
	Thread_t842215656::get_offset_of_interrupt_on_stop_38(),
	Thread_t842215656::get_offset_of_unused3_39(),
	Thread_t842215656::get_offset_of_unused4_40(),
	Thread_t842215656::get_offset_of_unused5_41(),
	Thread_t842215656::get_offset_of_unused6_42(),
	THREAD_STATIC_FIELD_OFFSET,
	THREAD_STATIC_FIELD_OFFSET,
	Thread_t842215656::get_offset_of_threadstart_45(),
	Thread_t842215656::get_offset_of_managed_id_46(),
	Thread_t842215656::get_offset_of__principal_47(),
	Thread_t842215656_StaticFields::get_offset_of_datastorehash_48(),
	Thread_t842215656_StaticFields::get_offset_of_datastore_lock_49(),
	Thread_t842215656::get_offset_of_in_currentculture_50(),
	Thread_t842215656_StaticFields::get_offset_of_culture_lock_51(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize735 = { sizeof (ThreadAbortException_t2592490245), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize736 = { sizeof (ThreadInterruptedException_t139788246), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize737 = { sizeof (ThreadPool_t2365024978), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize738 = { sizeof (ThreadState_t2629301148)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable738[11] = 
{
	ThreadState_t2629301148::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize739 = { sizeof (ThreadStateException_t2155438338), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize740 = { sizeof (Timer_t3733815095), -1, sizeof(Timer_t3733815095_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable740[7] = 
{
	Timer_t3733815095_StaticFields::get_offset_of_scheduler_1(),
	Timer_t3733815095::get_offset_of_callback_2(),
	Timer_t3733815095::get_offset_of_state_3(),
	Timer_t3733815095::get_offset_of_due_time_ms_4(),
	Timer_t3733815095::get_offset_of_period_ms_5(),
	Timer_t3733815095::get_offset_of_next_run_6(),
	Timer_t3733815095::get_offset_of_disposed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize741 = { sizeof (TimerComparer_t3292984772), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize742 = { sizeof (Scheduler_t1543633277), -1, sizeof(Scheduler_t1543633277_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable742[2] = 
{
	Scheduler_t1543633277_StaticFields::get_offset_of_instance_0(),
	Scheduler_t1543633277::get_offset_of_list_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize743 = { sizeof (WaitHandle_t1538001399), -1, sizeof(WaitHandle_t1538001399_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable743[4] = 
{
	0,
	WaitHandle_t1538001399::get_offset_of_safe_wait_handle_2(),
	WaitHandle_t1538001399_StaticFields::get_offset_of_InvalidHandle_3(),
	WaitHandle_t1538001399::get_offset_of_disposed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize744 = { sizeof (AccessViolationException_t3465367224), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize745 = { sizeof (ActivationContext_t204378384), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable745[1] = 
{
	ActivationContext_t204378384::get_offset_of__disposed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize746 = { sizeof (Activator_t976738423), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize747 = { sizeof (AppDomain_t4268980281), -1, sizeof(AppDomain_t4268980281_StaticFields), sizeof(AppDomain_t4268980281_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable747[21] = 
{
	AppDomain_t4268980281::get_offset_of__mono_app_domain_1(),
	AppDomain_t4268980281_StaticFields::get_offset_of__process_guid_2(),
	THREAD_STATIC_FIELD_OFFSET,
	THREAD_STATIC_FIELD_OFFSET,
	THREAD_STATIC_FIELD_OFFSET,
	AppDomain_t4268980281::get_offset_of__evidence_6(),
	AppDomain_t4268980281::get_offset_of__granted_7(),
	AppDomain_t4268980281::get_offset_of__principalPolicy_8(),
	THREAD_STATIC_FIELD_OFFSET,
	AppDomain_t4268980281_StaticFields::get_offset_of_default_domain_10(),
	AppDomain_t4268980281::get_offset_of__domain_manager_11(),
	AppDomain_t4268980281::get_offset_of__activation_12(),
	AppDomain_t4268980281::get_offset_of__applicationIdentity_13(),
	AppDomain_t4268980281::get_offset_of_AssemblyLoad_14(),
	AppDomain_t4268980281::get_offset_of_AssemblyResolve_15(),
	AppDomain_t4268980281::get_offset_of_DomainUnload_16(),
	AppDomain_t4268980281::get_offset_of_ProcessExit_17(),
	AppDomain_t4268980281::get_offset_of_ResourceResolve_18(),
	AppDomain_t4268980281::get_offset_of_TypeResolve_19(),
	AppDomain_t4268980281::get_offset_of_UnhandledException_20(),
	AppDomain_t4268980281::get_offset_of_ReflectionOnlyAssemblyResolve_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize748 = { sizeof (AppDomainManager_t2331159039), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize749 = { sizeof (AppDomainSetup_t2337283408), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable749[22] = 
{
	AppDomainSetup_t2337283408::get_offset_of_application_base_0(),
	AppDomainSetup_t2337283408::get_offset_of_application_name_1(),
	AppDomainSetup_t2337283408::get_offset_of_cache_path_2(),
	AppDomainSetup_t2337283408::get_offset_of_configuration_file_3(),
	AppDomainSetup_t2337283408::get_offset_of_dynamic_base_4(),
	AppDomainSetup_t2337283408::get_offset_of_license_file_5(),
	AppDomainSetup_t2337283408::get_offset_of_private_bin_path_6(),
	AppDomainSetup_t2337283408::get_offset_of_private_bin_path_probe_7(),
	AppDomainSetup_t2337283408::get_offset_of_shadow_copy_directories_8(),
	AppDomainSetup_t2337283408::get_offset_of_shadow_copy_files_9(),
	AppDomainSetup_t2337283408::get_offset_of_publisher_policy_10(),
	AppDomainSetup_t2337283408::get_offset_of_path_changed_11(),
	AppDomainSetup_t2337283408::get_offset_of_loader_optimization_12(),
	AppDomainSetup_t2337283408::get_offset_of_disallow_binding_redirects_13(),
	AppDomainSetup_t2337283408::get_offset_of_disallow_code_downloads_14(),
	AppDomainSetup_t2337283408::get_offset_of__activationArguments_15(),
	AppDomainSetup_t2337283408::get_offset_of_domain_initializer_16(),
	AppDomainSetup_t2337283408::get_offset_of_application_trust_17(),
	AppDomainSetup_t2337283408::get_offset_of_domain_initializer_args_18(),
	AppDomainSetup_t2337283408::get_offset_of_application_trust_xml_19(),
	AppDomainSetup_t2337283408::get_offset_of_disallow_appbase_probe_20(),
	AppDomainSetup_t2337283408::get_offset_of_configuration_bytes_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize750 = { sizeof (ApplicationException_t1659488088), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize751 = { sizeof (ApplicationIdentity_t944841144), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable751[1] = 
{
	ApplicationIdentity_t944841144::get_offset_of__fullName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize752 = { sizeof (ArgumentException_t3496063590), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable752[2] = 
{
	0,
	ArgumentException_t3496063590::get_offset_of_param_name_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize753 = { sizeof (ArgumentNullException_t1531621001), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable753[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize754 = { sizeof (ArgumentOutOfRangeException_t3929619371), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable754[1] = 
{
	ArgumentOutOfRangeException_t3929619371::get_offset_of_actual_value_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize755 = { sizeof (ArithmeticException_t2250265235), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize756 = { sizeof (ArrayTypeMismatchException_t2420559320), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable756[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize757 = { sizeof (AssemblyLoadEventArgs_t1741225557), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize758 = { sizeof (AttributeTargets_t3861788150)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable758[17] = 
{
	AttributeTargets_t3861788150::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize759 = { sizeof (BitConverter_t862681245), -1, sizeof(BitConverter_t862681245_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable759[2] = 
{
	BitConverter_t862681245_StaticFields::get_offset_of_SwappedWordsInDouble_0(),
	BitConverter_t862681245_StaticFields::get_offset_of_IsLittleEndian_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize760 = { sizeof (Buffer_t502732385), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize761 = { sizeof (CharEnumerator_t2141516059), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable761[3] = 
{
	CharEnumerator_t2141516059::get_offset_of_str_0(),
	CharEnumerator_t2141516059::get_offset_of_index_1(),
	CharEnumerator_t2141516059::get_offset_of_length_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize762 = { sizeof (Console_t2118491080), -1, sizeof(Console_t2118491080_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable762[5] = 
{
	Console_t2118491080_StaticFields::get_offset_of_stdout_0(),
	Console_t2118491080_StaticFields::get_offset_of_stderr_1(),
	Console_t2118491080_StaticFields::get_offset_of_stdin_2(),
	Console_t2118491080_StaticFields::get_offset_of_inputEncoding_3(),
	Console_t2118491080_StaticFields::get_offset_of_outputEncoding_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize763 = { sizeof (ContextBoundObject_t1647653499), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize764 = { sizeof (Convert_t3318885590), -1, sizeof(Convert_t3318885590_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable764[2] = 
{
	Convert_t3318885590_StaticFields::get_offset_of_DBNull_0(),
	Convert_t3318885590_StaticFields::get_offset_of_conversionTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize765 = { sizeof (DBNull_t2161236492), -1, sizeof(DBNull_t2161236492_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable765[1] = 
{
	DBNull_t2161236492_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize766 = { sizeof (DateTime_t1736846891)+ sizeof (RuntimeObject), -1, sizeof(DateTime_t1736846891_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable766[15] = 
{
	DateTime_t1736846891::get_offset_of_ticks_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTime_t1736846891::get_offset_of_kind_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTime_t1736846891_StaticFields::get_offset_of_MaxValue_2(),
	DateTime_t1736846891_StaticFields::get_offset_of_MinValue_3(),
	DateTime_t1736846891_StaticFields::get_offset_of_ParseTimeFormats_4(),
	DateTime_t1736846891_StaticFields::get_offset_of_ParseYearDayMonthFormats_5(),
	DateTime_t1736846891_StaticFields::get_offset_of_ParseYearMonthDayFormats_6(),
	DateTime_t1736846891_StaticFields::get_offset_of_ParseDayMonthYearFormats_7(),
	DateTime_t1736846891_StaticFields::get_offset_of_ParseMonthDayYearFormats_8(),
	DateTime_t1736846891_StaticFields::get_offset_of_MonthDayShortFormats_9(),
	DateTime_t1736846891_StaticFields::get_offset_of_DayMonthShortFormats_10(),
	DateTime_t1736846891_StaticFields::get_offset_of_daysmonth_11(),
	DateTime_t1736846891_StaticFields::get_offset_of_daysmonthleap_12(),
	DateTime_t1736846891_StaticFields::get_offset_of_to_local_time_span_object_13(),
	DateTime_t1736846891_StaticFields::get_offset_of_last_now_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize767 = { sizeof (Which_t4213436936)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable767[5] = 
{
	Which_t4213436936::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize768 = { sizeof (DateTimeKind_t537311956)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable768[4] = 
{
	DateTimeKind_t537311956::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize769 = { sizeof (DateTimeOffset_t2878813583)+ sizeof (RuntimeObject), -1, sizeof(DateTimeOffset_t2878813583_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable769[4] = 
{
	DateTimeOffset_t2878813583_StaticFields::get_offset_of_MaxValue_0(),
	DateTimeOffset_t2878813583_StaticFields::get_offset_of_MinValue_1(),
	DateTimeOffset_t2878813583::get_offset_of_dt_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeOffset_t2878813583::get_offset_of_utc_offset_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize770 = { sizeof (DateTimeUtils_t606945647), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize771 = { sizeof (DayOfWeek_t350297983)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable771[8] = 
{
	DayOfWeek_t350297983::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize772 = { sizeof (DelegateData_t1237820514), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable772[2] = 
{
	DelegateData_t1237820514::get_offset_of_target_type_0(),
	DelegateData_t1237820514::get_offset_of_method_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize773 = { sizeof (DelegateSerializationHolder_t3026570387), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable773[1] = 
{
	DelegateSerializationHolder_t3026570387::get_offset_of__delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize774 = { sizeof (DelegateEntry_t468392216), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable774[7] = 
{
	DelegateEntry_t468392216::get_offset_of_type_0(),
	DelegateEntry_t468392216::get_offset_of_assembly_1(),
	DelegateEntry_t468392216::get_offset_of_target_2(),
	DelegateEntry_t468392216::get_offset_of_targetTypeAssembly_3(),
	DelegateEntry_t468392216::get_offset_of_targetTypeName_4(),
	DelegateEntry_t468392216::get_offset_of_methodName_5(),
	DelegateEntry_t468392216::get_offset_of_delegateEntry_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize775 = { sizeof (DivideByZeroException_t271326688), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable775[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize776 = { sizeof (DllNotFoundException_t3007533527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable776[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize777 = { sizeof (EntryPointNotFoundException_t4048575421), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable777[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize778 = { sizeof (MonoEnumInfo_t852766270)+ sizeof (RuntimeObject), -1, sizeof(MonoEnumInfo_t852766270_StaticFields), sizeof(MonoEnumInfo_t852766270_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable778[11] = 
{
	MonoEnumInfo_t852766270::get_offset_of_utype_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t852766270::get_offset_of_values_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t852766270::get_offset_of_names_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t852766270::get_offset_of_name_hash_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	THREAD_STATIC_FIELD_OFFSET,
	MonoEnumInfo_t852766270_StaticFields::get_offset_of_global_cache_5(),
	MonoEnumInfo_t852766270_StaticFields::get_offset_of_global_cache_monitor_6(),
	MonoEnumInfo_t852766270_StaticFields::get_offset_of_sbyte_comparer_7(),
	MonoEnumInfo_t852766270_StaticFields::get_offset_of_short_comparer_8(),
	MonoEnumInfo_t852766270_StaticFields::get_offset_of_int_comparer_9(),
	MonoEnumInfo_t852766270_StaticFields::get_offset_of_long_comparer_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize779 = { sizeof (SByteComparer_t550617552), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize780 = { sizeof (ShortComparer_t3445461946), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize781 = { sizeof (IntComparer_t2811315210), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize782 = { sizeof (LongComparer_t4136535228), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize783 = { sizeof (Environment_t2603688850), -1, sizeof(Environment_t2603688850_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable783[2] = 
{
	0,
	Environment_t2603688850_StaticFields::get_offset_of_os_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize784 = { sizeof (SpecialFolder_t4015662803)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable784[24] = 
{
	SpecialFolder_t4015662803::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize785 = { sizeof (EventArgs_t696663806), -1, sizeof(EventArgs_t696663806_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable785[1] = 
{
	EventArgs_t696663806_StaticFields::get_offset_of_Empty_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize786 = { sizeof (ExecutionEngineException_t2114024528), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize787 = { sizeof (FieldAccessException_t526134110), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize788 = { sizeof (FlagsAttribute_t2156000871), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize789 = { sizeof (FormatException_t2341376708), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable789[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize790 = { sizeof (GC_t1009681288), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize791 = { sizeof (Guid_t)+ sizeof (RuntimeObject), sizeof(Guid_t ), sizeof(Guid_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable791[14] = 
{
	Guid_t::get_offset_of__a_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__b_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__c_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__d_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__e_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__f_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__g_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__h_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__i_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__j_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__k_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t_StaticFields::get_offset_of_Empty_11(),
	Guid_t_StaticFields::get_offset_of__rngAccess_12(),
	Guid_t_StaticFields::get_offset_of__rng_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize792 = { sizeof (GuidParser_t2022458249), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable792[3] = 
{
	GuidParser_t2022458249::get_offset_of__src_0(),
	GuidParser_t2022458249::get_offset_of__length_1(),
	GuidParser_t2022458249::get_offset_of__cur_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize793 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize794 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize795 = { sizeof (IndexOutOfRangeException_t266859322), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize796 = { sizeof (InvalidCastException_t721587147), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable796[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize797 = { sizeof (InvalidOperationException_t2934239458), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable797[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize798 = { sizeof (LoaderOptimization_t949653382)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable798[7] = 
{
	LoaderOptimization_t949653382::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize799 = { sizeof (LocalDataStoreSlot_t1069832959), -1, sizeof(LocalDataStoreSlot_t1069832959_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable799[5] = 
{
	LocalDataStoreSlot_t1069832959::get_offset_of_slot_0(),
	LocalDataStoreSlot_t1069832959::get_offset_of_thread_local_1(),
	LocalDataStoreSlot_t1069832959_StaticFields::get_offset_of_lock_obj_2(),
	LocalDataStoreSlot_t1069832959_StaticFields::get_offset_of_slot_bitmap_thread_3(),
	LocalDataStoreSlot_t1069832959_StaticFields::get_offset_of_slot_bitmap_context_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
