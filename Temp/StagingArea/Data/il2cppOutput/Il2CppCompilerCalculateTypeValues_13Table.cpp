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

// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct Dictionary_2_t948199360;
// System.Byte[]
struct ByteU5BU5D_t1907542542;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>
struct List_1_t343878909;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct ConnectionChangeEvent_t3719024766;
// System.String
struct String_t;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_t2482290380;
// UnityEngine.Experimental.Rendering.IRenderPipelineAsset
struct IRenderPipelineAsset_t2950131913;
// UnityEngine.Experimental.Rendering.IRenderPipeline
struct IRenderPipeline_t1171149579;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t1146447432;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3575321141;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t3704882108;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t504330813;
// System.IntPtr[]
struct IntPtrU5BU5D_t3796628252;
// System.Collections.IDictionary
struct IDictionary_t1193578411;
// UnityEngine.Object
struct Object_t1620542549;
// System.Char[]
struct CharU5BU5D_t2836172046;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1247106334;
// System.Object[]
struct ObjectU5BU5D_t2358992757;
// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Queue_1_t1981215361;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t1361349763;
// UnityEngine.Events.UnityAction
struct UnityAction_t4280400156;
// System.Void
struct Void_t3254505899;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1237820514;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t3824291779;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t2434550967;
// System.Type
struct Type_t;
// UnityEngine.ILogHandler
struct ILogHandler_t3716742924;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_t1603667790;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t19590929;
// System.IAsyncResult
struct IAsyncResult_t1068663224;
// System.AsyncCallback
struct AsyncCallback_t3343868185;

struct Object_t1620542549_marshaled_com;



#ifndef U3CMODULEU3E_T23800722_H
#define U3CMODULEU3E_T23800722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t23800722 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T23800722_H
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
#ifndef NATIVE_T1539421353_H
#define NATIVE_T1539421353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.Native
struct  Native_t1539421353  : public RuntimeObject
{
public:

public:
};

struct Native_t1539421353_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference> UnityEngine.CSSLayout.Native::s_MeasureFunctions
	Dictionary_2_t948199360 * ___s_MeasureFunctions_0;

public:
	inline static int32_t get_offset_of_s_MeasureFunctions_0() { return static_cast<int32_t>(offsetof(Native_t1539421353_StaticFields, ___s_MeasureFunctions_0)); }
	inline Dictionary_2_t948199360 * get_s_MeasureFunctions_0() const { return ___s_MeasureFunctions_0; }
	inline Dictionary_2_t948199360 ** get_address_of_s_MeasureFunctions_0() { return &___s_MeasureFunctions_0; }
	inline void set_s_MeasureFunctions_0(Dictionary_2_t948199360 * value)
	{
		___s_MeasureFunctions_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_MeasureFunctions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVE_T1539421353_H
#ifndef MESSAGEEVENTARGS_T1731811105_H
#define MESSAGEEVENTARGS_T1731811105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct  MessageEventArgs_t1731811105  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Networking.PlayerConnection.MessageEventArgs::playerId
	int32_t ___playerId_0;
	// System.Byte[] UnityEngine.Networking.PlayerConnection.MessageEventArgs::data
	ByteU5BU5D_t1907542542* ___data_1;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1731811105, ___playerId_0)); }
	inline int32_t get_playerId_0() const { return ___playerId_0; }
	inline int32_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(int32_t value)
	{
		___playerId_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1731811105, ___data_1)); }
	inline ByteU5BU5D_t1907542542* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t1907542542** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t1907542542* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENTARGS_T1731811105_H
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
#ifndef PLAYEREDITORCONNECTIONEVENTS_T1603667790_H
#define PLAYEREDITORCONNECTIONEVENTS_T1603667790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct  PlayerEditorConnectionEvents_t1603667790  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers> UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::messageTypeSubscribers
	List_1_t343878909 * ___messageTypeSubscribers_0;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::connectionEvent
	ConnectionChangeEvent_t3719024766 * ___connectionEvent_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::disconnectionEvent
	ConnectionChangeEvent_t3719024766 * ___disconnectionEvent_2;

public:
	inline static int32_t get_offset_of_messageTypeSubscribers_0() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t1603667790, ___messageTypeSubscribers_0)); }
	inline List_1_t343878909 * get_messageTypeSubscribers_0() const { return ___messageTypeSubscribers_0; }
	inline List_1_t343878909 ** get_address_of_messageTypeSubscribers_0() { return &___messageTypeSubscribers_0; }
	inline void set_messageTypeSubscribers_0(List_1_t343878909 * value)
	{
		___messageTypeSubscribers_0 = value;
		Il2CppCodeGenWriteBarrier((&___messageTypeSubscribers_0), value);
	}

	inline static int32_t get_offset_of_connectionEvent_1() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t1603667790, ___connectionEvent_1)); }
	inline ConnectionChangeEvent_t3719024766 * get_connectionEvent_1() const { return ___connectionEvent_1; }
	inline ConnectionChangeEvent_t3719024766 ** get_address_of_connectionEvent_1() { return &___connectionEvent_1; }
	inline void set_connectionEvent_1(ConnectionChangeEvent_t3719024766 * value)
	{
		___connectionEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___connectionEvent_1), value);
	}

	inline static int32_t get_offset_of_disconnectionEvent_2() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t1603667790, ___disconnectionEvent_2)); }
	inline ConnectionChangeEvent_t3719024766 * get_disconnectionEvent_2() const { return ___disconnectionEvent_2; }
	inline ConnectionChangeEvent_t3719024766 ** get_address_of_disconnectionEvent_2() { return &___disconnectionEvent_2; }
	inline void set_disconnectionEvent_2(ConnectionChangeEvent_t3719024766 * value)
	{
		___disconnectionEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disconnectionEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYEREDITORCONNECTIONEVENTS_T1603667790_H
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
#ifndef MESSAGETYPESUBSCRIBERS_T802655831_H
#define MESSAGETYPESUBSCRIBERS_T802655831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct  MessageTypeSubscribers_t802655831  : public RuntimeObject
{
public:
	// System.String UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::m_messageTypeId
	String_t* ___m_messageTypeId_0;
	// System.Int32 UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::subscriberCount
	int32_t ___subscriberCount_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::messageCallback
	MessageEvent_t2482290380 * ___messageCallback_2;

public:
	inline static int32_t get_offset_of_m_messageTypeId_0() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t802655831, ___m_messageTypeId_0)); }
	inline String_t* get_m_messageTypeId_0() const { return ___m_messageTypeId_0; }
	inline String_t** get_address_of_m_messageTypeId_0() { return &___m_messageTypeId_0; }
	inline void set_m_messageTypeId_0(String_t* value)
	{
		___m_messageTypeId_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_messageTypeId_0), value);
	}

	inline static int32_t get_offset_of_subscriberCount_1() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t802655831, ___subscriberCount_1)); }
	inline int32_t get_subscriberCount_1() const { return ___subscriberCount_1; }
	inline int32_t* get_address_of_subscriberCount_1() { return &___subscriberCount_1; }
	inline void set_subscriberCount_1(int32_t value)
	{
		___subscriberCount_1 = value;
	}

	inline static int32_t get_offset_of_messageCallback_2() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t802655831, ___messageCallback_2)); }
	inline MessageEvent_t2482290380 * get_messageCallback_2() const { return ___messageCallback_2; }
	inline MessageEvent_t2482290380 ** get_address_of_messageCallback_2() { return &___messageCallback_2; }
	inline void set_messageCallback_2(MessageEvent_t2482290380 * value)
	{
		___messageCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___messageCallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGETYPESUBSCRIBERS_T802655831_H
#ifndef RENDERPIPELINEMANAGER_T3956697607_H
#define RENDERPIPELINEMANAGER_T3956697607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.RenderPipelineManager
struct  RenderPipelineManager_t3956697607  : public RuntimeObject
{
public:

public:
};

struct RenderPipelineManager_t3956697607_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.IRenderPipelineAsset UnityEngine.Experimental.Rendering.RenderPipelineManager::s_CurrentPipelineAsset
	RuntimeObject* ___s_CurrentPipelineAsset_0;
	// UnityEngine.Experimental.Rendering.IRenderPipeline UnityEngine.Experimental.Rendering.RenderPipelineManager::<currentPipeline>k__BackingField
	RuntimeObject* ___U3CcurrentPipelineU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_CurrentPipelineAsset_0() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t3956697607_StaticFields, ___s_CurrentPipelineAsset_0)); }
	inline RuntimeObject* get_s_CurrentPipelineAsset_0() const { return ___s_CurrentPipelineAsset_0; }
	inline RuntimeObject** get_address_of_s_CurrentPipelineAsset_0() { return &___s_CurrentPipelineAsset_0; }
	inline void set_s_CurrentPipelineAsset_0(RuntimeObject* value)
	{
		___s_CurrentPipelineAsset_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_CurrentPipelineAsset_0), value);
	}

	inline static int32_t get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t3956697607_StaticFields, ___U3CcurrentPipelineU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CcurrentPipelineU3Ek__BackingField_1() const { return ___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CcurrentPipelineU3Ek__BackingField_1() { return &___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline void set_U3CcurrentPipelineU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CcurrentPipelineU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcurrentPipelineU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERPIPELINEMANAGER_T3956697607_H
#ifndef PLAYABLEEXTENSIONS_T1111419346_H
#define PLAYABLEEXTENSIONS_T1111419346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableExtensions
struct  PlayableExtensions_t1111419346  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEEXTENSIONS_T1111419346_H
#ifndef UNITYSTRING_T1908011940_H
#define UNITYSTRING_T1908011940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityString
struct  UnityString_t1908011940  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSTRING_T1908011940_H
#ifndef PLAYABLEBEHAVIOUR_T1192816734_H
#define PLAYABLEBEHAVIOUR_T1192816734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t1192816734  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEBEHAVIOUR_T1192816734_H
#ifndef UNITYEVENTBASE_T259893748_H
#define UNITYEVENTBASE_T259893748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t259893748  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t1146447432 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3575321141 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t259893748, ___m_Calls_0)); }
	inline InvokableCallList_t1146447432 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t1146447432 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t1146447432 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t259893748, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3575321141 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3575321141 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3575321141 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t259893748, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t259893748, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T259893748_H
#ifndef INVOKABLECALLLIST_T1146447432_H
#define INVOKABLECALLLIST_T1146447432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCallList
struct  InvokableCallList_t1146447432  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t3704882108 * ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t3704882108 * ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t3704882108 * ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;

public:
	inline static int32_t get_offset_of_m_PersistentCalls_0() { return static_cast<int32_t>(offsetof(InvokableCallList_t1146447432, ___m_PersistentCalls_0)); }
	inline List_1_t3704882108 * get_m_PersistentCalls_0() const { return ___m_PersistentCalls_0; }
	inline List_1_t3704882108 ** get_address_of_m_PersistentCalls_0() { return &___m_PersistentCalls_0; }
	inline void set_m_PersistentCalls_0(List_1_t3704882108 * value)
	{
		___m_PersistentCalls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_0), value);
	}

	inline static int32_t get_offset_of_m_RuntimeCalls_1() { return static_cast<int32_t>(offsetof(InvokableCallList_t1146447432, ___m_RuntimeCalls_1)); }
	inline List_1_t3704882108 * get_m_RuntimeCalls_1() const { return ___m_RuntimeCalls_1; }
	inline List_1_t3704882108 ** get_address_of_m_RuntimeCalls_1() { return &___m_RuntimeCalls_1; }
	inline void set_m_RuntimeCalls_1(List_1_t3704882108 * value)
	{
		___m_RuntimeCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_RuntimeCalls_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutingCalls_2() { return static_cast<int32_t>(offsetof(InvokableCallList_t1146447432, ___m_ExecutingCalls_2)); }
	inline List_1_t3704882108 * get_m_ExecutingCalls_2() const { return ___m_ExecutingCalls_2; }
	inline List_1_t3704882108 ** get_address_of_m_ExecutingCalls_2() { return &___m_ExecutingCalls_2; }
	inline void set_m_ExecutingCalls_2(List_1_t3704882108 * value)
	{
		___m_ExecutingCalls_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutingCalls_2), value);
	}

	inline static int32_t get_offset_of_m_NeedsUpdate_3() { return static_cast<int32_t>(offsetof(InvokableCallList_t1146447432, ___m_NeedsUpdate_3)); }
	inline bool get_m_NeedsUpdate_3() const { return ___m_NeedsUpdate_3; }
	inline bool* get_address_of_m_NeedsUpdate_3() { return &___m_NeedsUpdate_3; }
	inline void set_m_NeedsUpdate_3(bool value)
	{
		___m_NeedsUpdate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALLLIST_T1146447432_H
#ifndef PERSISTENTCALLGROUP_T3575321141_H
#define PERSISTENTCALLGROUP_T3575321141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCallGroup
struct  PersistentCallGroup_t3575321141  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t504330813 * ___m_Calls_0;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(PersistentCallGroup_t3575321141, ___m_Calls_0)); }
	inline List_1_t504330813 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline List_1_t504330813 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(List_1_t504330813 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALLGROUP_T3575321141_H
#ifndef NETFXCOREEXTENSIONS_T2082136736_H
#define NETFXCOREEXTENSIONS_T2082136736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.NetFxCoreExtensions
struct  NetFxCoreExtensions_t2082136736  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETFXCOREEXTENSIONS_T2082136736_H
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
#ifndef BASEINVOKABLECALL_T4163659030_H
#define BASEINVOKABLECALL_T4163659030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t4163659030  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T4163659030_H
#ifndef ARGUMENTCACHE_T3824291779_H
#define ARGUMENTCACHE_T3824291779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t3824291779  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_t1620542549 * ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t3824291779, ___m_ObjectArgument_0)); }
	inline Object_t1620542549 * get_m_ObjectArgument_0() const { return ___m_ObjectArgument_0; }
	inline Object_t1620542549 ** get_address_of_m_ObjectArgument_0() { return &___m_ObjectArgument_0; }
	inline void set_m_ObjectArgument_0(Object_t1620542549 * value)
	{
		___m_ObjectArgument_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgument_0), value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(ArgumentCache_t3824291779, ___m_ObjectArgumentAssemblyTypeName_1)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_1() const { return ___m_ObjectArgumentAssemblyTypeName_1; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_1() { return &___m_ObjectArgumentAssemblyTypeName_1; }
	inline void set_m_ObjectArgumentAssemblyTypeName_1(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgumentAssemblyTypeName_1), value);
	}

	inline static int32_t get_offset_of_m_IntArgument_2() { return static_cast<int32_t>(offsetof(ArgumentCache_t3824291779, ___m_IntArgument_2)); }
	inline int32_t get_m_IntArgument_2() const { return ___m_IntArgument_2; }
	inline int32_t* get_address_of_m_IntArgument_2() { return &___m_IntArgument_2; }
	inline void set_m_IntArgument_2(int32_t value)
	{
		___m_IntArgument_2 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t3824291779, ___m_FloatArgument_3)); }
	inline float get_m_FloatArgument_3() const { return ___m_FloatArgument_3; }
	inline float* get_address_of_m_FloatArgument_3() { return &___m_FloatArgument_3; }
	inline void set_m_FloatArgument_3(float value)
	{
		___m_FloatArgument_3 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t3824291779, ___m_StringArgument_4)); }
	inline String_t* get_m_StringArgument_4() const { return ___m_StringArgument_4; }
	inline String_t** get_address_of_m_StringArgument_4() { return &___m_StringArgument_4; }
	inline void set_m_StringArgument_4(String_t* value)
	{
		___m_StringArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringArgument_4), value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t3824291779, ___m_BoolArgument_5)); }
	inline bool get_m_BoolArgument_5() const { return ___m_BoolArgument_5; }
	inline bool* get_address_of_m_BoolArgument_5() { return &___m_BoolArgument_5; }
	inline void set_m_BoolArgument_5(bool value)
	{
		___m_BoolArgument_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTCACHE_T3824291779_H
#ifndef FORMERLYSERIALIZEDASATTRIBUTE_T1754410019_H
#define FORMERLYSERIALIZEDASATTRIBUTE_T1754410019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct  FormerlySerializedAsAttribute_t1754410019  : public Attribute_t3344439798
{
public:
	// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::m_oldName
	String_t* ___m_oldName_0;

public:
	inline static int32_t get_offset_of_m_oldName_0() { return static_cast<int32_t>(offsetof(FormerlySerializedAsAttribute_t1754410019, ___m_oldName_0)); }
	inline String_t* get_m_oldName_0() const { return ___m_oldName_0; }
	inline String_t** get_address_of_m_oldName_0() { return &___m_oldName_0; }
	inline void set_m_oldName_0(String_t* value)
	{
		___m_oldName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_oldName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMERLYSERIALIZEDASATTRIBUTE_T1754410019_H
#ifndef USEDBYNATIVECODEATTRIBUTE_T1090883118_H
#define USEDBYNATIVECODEATTRIBUTE_T1090883118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.UsedByNativeCodeAttribute
struct  UsedByNativeCodeAttribute_t1090883118  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USEDBYNATIVECODEATTRIBUTE_T1090883118_H
#ifndef VOID_T3254505899_H
#define VOID_T3254505899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3254505899 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3254505899_H
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
#ifndef EXCLUDEFROMDOCSATTRIBUTE_T187332190_H
#define EXCLUDEFROMDOCSATTRIBUTE_T187332190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.ExcludeFromDocsAttribute
struct  ExcludeFromDocsAttribute_t187332190  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMDOCSATTRIBUTE_T187332190_H
#ifndef DEFAULTVALUEATTRIBUTE_T205655631_H
#define DEFAULTVALUEATTRIBUTE_T205655631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.DefaultValueAttribute
struct  DefaultValueAttribute_t205655631  : public Attribute_t3344439798
{
public:
	// System.Object UnityEngine.Internal.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t205655631, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T205655631_H
#ifndef CSSSIZE_T3233540236_H
#define CSSSIZE_T3233540236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSSize
struct  CSSSize_t3233540236 
{
public:
	// System.Single UnityEngine.CSSLayout.CSSSize::width
	float ___width_0;
	// System.Single UnityEngine.CSSLayout.CSSSize::height
	float ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(CSSSize_t3233540236, ___width_0)); }
	inline float get_width_0() const { return ___width_0; }
	inline float* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(float value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(CSSSize_t3233540236, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSSIZE_T3233540236_H
#ifndef TYPEINFERENCERULEATTRIBUTE_T3449052103_H
#define TYPEINFERENCERULEATTRIBUTE_T3449052103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRuleAttribute
struct  TypeInferenceRuleAttribute_t3449052103  : public Attribute_t3344439798
{
public:
	// System.String UnityEngineInternal.TypeInferenceRuleAttribute::_rule
	String_t* ____rule_0;

public:
	inline static int32_t get_offset_of__rule_0() { return static_cast<int32_t>(offsetof(TypeInferenceRuleAttribute_t3449052103, ____rule_0)); }
	inline String_t* get__rule_0() const { return ____rule_0; }
	inline String_t** get_address_of__rule_0() { return &____rule_0; }
	inline void set__rule_0(String_t* value)
	{
		____rule_0 = value;
		Il2CppCodeGenWriteBarrier((&____rule_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFERENCERULEATTRIBUTE_T3449052103_H
#ifndef REQUIREDBYNATIVECODEATTRIBUTE_T2674156466_H
#define REQUIREDBYNATIVECODEATTRIBUTE_T2674156466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.RequiredByNativeCodeAttribute
struct  RequiredByNativeCodeAttribute_t2674156466  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIREDBYNATIVECODEATTRIBUTE_T2674156466_H
#ifndef UNITYEXCEPTION_T1889255670_H
#define UNITYEXCEPTION_T1889255670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t1889255670  : public Exception_t1284369516
{
public:
	// System.String UnityEngine.UnityException::unityStackTrace
	String_t* ___unityStackTrace_12;

public:
	inline static int32_t get_offset_of_unityStackTrace_12() { return static_cast<int32_t>(offsetof(UnityException_t1889255670, ___unityStackTrace_12)); }
	inline String_t* get_unityStackTrace_12() const { return ___unityStackTrace_12; }
	inline String_t** get_address_of_unityStackTrace_12() { return &___unityStackTrace_12; }
	inline void set_unityStackTrace_12(String_t* value)
	{
		___unityStackTrace_12 = value;
		Il2CppCodeGenWriteBarrier((&___unityStackTrace_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T1889255670_H
#ifndef THREADANDSERIALIZATIONSAFEATTRIBUTE_T3298466094_H
#define THREADANDSERIALIZATIONSAFEATTRIBUTE_T3298466094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ThreadAndSerializationSafeAttribute
struct  ThreadAndSerializationSafeAttribute_t3298466094  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADANDSERIALIZATIONSAFEATTRIBUTE_T3298466094_H
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
#ifndef UNITYEVENT_T2530476334_H
#define UNITYEVENT_T2530476334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2530476334  : public UnityEventBase_t259893748
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2358992757* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2530476334, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2358992757* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2358992757** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2358992757* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2530476334_H
#ifndef UNITYSYNCHRONIZATIONCONTEXT_T4011902324_H
#define UNITYSYNCHRONIZATIONCONTEXT_T4011902324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext
struct  UnitySynchronizationContext_t4011902324  : public SynchronizationContext_t637223515
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest> UnityEngine.UnitySynchronizationContext::m_AsyncWorkQueue
	Queue_1_t1981215361 * ___m_AsyncWorkQueue_1;

public:
	inline static int32_t get_offset_of_m_AsyncWorkQueue_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t4011902324, ___m_AsyncWorkQueue_1)); }
	inline Queue_1_t1981215361 * get_m_AsyncWorkQueue_1() const { return ___m_AsyncWorkQueue_1; }
	inline Queue_1_t1981215361 ** get_address_of_m_AsyncWorkQueue_1() { return &___m_AsyncWorkQueue_1; }
	inline void set_m_AsyncWorkQueue_1(Queue_1_t1981215361 * value)
	{
		___m_AsyncWorkQueue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncWorkQueue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSYNCHRONIZATIONCONTEXT_T4011902324_H
#ifndef WORKREQUEST_T1512441528_H
#define WORKREQUEST_T1512441528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t1512441528 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t1361349763 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t1512441528, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t1361349763 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t1361349763 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t1361349763 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t1512441528, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1512441528_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1512441528_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
};
#endif // WORKREQUEST_T1512441528_H
#ifndef VECTOR2_T390938811_H
#define VECTOR2_T390938811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t390938811 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t390938811, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t390938811, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t390938811_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t390938811  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t390938811  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t390938811  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t390938811  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t390938811  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t390938811  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t390938811  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t390938811  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t390938811_StaticFields, ___zeroVector_2)); }
	inline Vector2_t390938811  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t390938811 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t390938811  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t390938811_StaticFields, ___oneVector_3)); }
	inline Vector2_t390938811  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t390938811 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t390938811  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t390938811_StaticFields, ___upVector_4)); }
	inline Vector2_t390938811  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t390938811 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t390938811  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t390938811_StaticFields, ___downVector_5)); }
	inline Vector2_t390938811  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t390938811 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t390938811  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t390938811_StaticFields, ___leftVector_6)); }
	inline Vector2_t390938811  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t390938811 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t390938811  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t390938811_StaticFields, ___rightVector_7)); }
	inline Vector2_t390938811  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t390938811 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t390938811  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t390938811_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t390938811  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t390938811 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t390938811  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t390938811_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t390938811  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t390938811 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t390938811  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T390938811_H
#ifndef INVOKABLECALL_T698893671_H
#define INVOKABLECALL_T698893671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t698893671  : public BaseInvokableCall_t4163659030
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t4280400156 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t698893671, ___Delegate_0)); }
	inline UnityAction_t4280400156 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t4280400156 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t4280400156 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T698893671_H
#ifndef READONLYATTRIBUTE_T248434753_H
#define READONLYATTRIBUTE_T248434753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadOnlyAttribute
struct  ReadOnlyAttribute_t248434753  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T248434753_H
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
#ifndef READWRITEATTRIBUTE_T3967081296_H
#define READWRITEATTRIBUTE_T3967081296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadWriteAttribute
struct  ReadWriteAttribute_t3967081296  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READWRITEATTRIBUTE_T3967081296_H
#ifndef DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3228136677_H
#define DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3228136677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.DeallocateOnJobCompletionAttribute
struct  DeallocateOnJobCompletionAttribute_t3228136677  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3228136677_H
#ifndef NATIVECONTAINERATTRIBUTE_T2261452756_H
#define NATIVECONTAINERATTRIBUTE_T2261452756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerAttribute
struct  NativeContainerAttribute_t2261452756  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERATTRIBUTE_T2261452756_H
#ifndef NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T2839594338_H
#define NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T2839594338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsAtomicWriteAttribute
struct  NativeContainerSupportsAtomicWriteAttribute_t2839594338  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T2839594338_H
#ifndef NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T2690315961_H
#define NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T2690315961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsMinMaxWriteRestrictionAttribute
struct  NativeContainerSupportsMinMaxWriteRestrictionAttribute_t2690315961  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T2690315961_H
#ifndef UNITYEVENT_1_T630401499_H
#define UNITYEVENT_1_T630401499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t630401499  : public UnityEventBase_t259893748
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2358992757* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t630401499, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2358992757* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2358992757** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2358992757* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T630401499_H
#ifndef UNITYEVENT_1_T1883844753_H
#define UNITYEVENT_1_T1883844753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct  UnityEvent_1_t1883844753  : public UnityEventBase_t259893748
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2358992757* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t1883844753, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2358992757* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2358992757** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2358992757* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T1883844753_H
#ifndef WRITEONLYATTRIBUTE_T2068924472_H
#define WRITEONLYATTRIBUTE_T2068924472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.WriteOnlyAttribute
struct  WriteOnlyAttribute_t2068924472  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEONLYATTRIBUTE_T2068924472_H
#ifndef SINGLE_T4044722003_H
#define SINGLE_T4044722003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t4044722003 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t4044722003, ___m_value_7)); }
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
#endif // SINGLE_T4044722003_H
#ifndef DELEGATE_T430756854_H
#define DELEGATE_T430756854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t430756854  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1237820514 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t430756854, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t430756854, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t430756854, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t430756854, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t430756854, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t430756854, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t430756854, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t430756854, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t430756854, ___data_8)); }
	inline DelegateData_t1237820514 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1237820514 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1237820514 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T430756854_H
#ifndef OBJECT_T1620542549_H
#define OBJECT_T1620542549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1620542549  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1620542549, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1620542549_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1620542549_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t1620542549_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1620542549_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1620542549_H
#ifndef DATASTREAMTYPE_T2000581714_H
#define DATASTREAMTYPE_T2000581714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t2000581714 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t2000581714, ___value___1)); }
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
#endif // DATASTREAMTYPE_T2000581714_H
#ifndef PLAYABLEOUTPUTHANDLE_T4259131898_H
#define PLAYABLEOUTPUTHANDLE_T4259131898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t4259131898 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t4259131898, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t4259131898, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T4259131898_H
#ifndef LOGTYPE_T254095981_H
#define LOGTYPE_T254095981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t254095981 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t254095981, ___value___1)); }
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
#endif // LOGTYPE_T254095981_H
#ifndef MESSAGEEVENT_T2482290380_H
#define MESSAGEEVENT_T2482290380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct  MessageEvent_t2482290380  : public UnityEvent_1_t1883844753
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENT_T2482290380_H
#ifndef CSSMEASUREMODE_T1968206667_H
#define CSSMEASUREMODE_T1968206667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSMeasureMode
struct  CSSMeasureMode_t1968206667 
{
public:
	// System.Int32 UnityEngine.CSSLayout.CSSMeasureMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CSSMeasureMode_t1968206667, ___value___1)); }
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
#endif // CSSMEASUREMODE_T1968206667_H
#ifndef PERSISTENTLISTENERMODE_T2893635133_H
#define PERSISTENTLISTENERMODE_T2893635133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentListenerMode
struct  PersistentListenerMode_t2893635133 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t2893635133, ___value___1)); }
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
#endif // PERSISTENTLISTENERMODE_T2893635133_H
#ifndef TYPEINFERENCERULES_T3958923700_H
#define TYPEINFERENCERULES_T3958923700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRules
struct  TypeInferenceRules_t3958923700 
{
public:
	// System.Int32 UnityEngineInternal.TypeInferenceRules::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeInferenceRules_t3958923700, ___value___1)); }
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
#endif // TYPEINFERENCERULES_T3958923700_H
#ifndef UNITYEVENTCALLSTATE_T612397810_H
#define UNITYEVENTCALLSTATE_T612397810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventCallState
struct  UnityEventCallState_t612397810 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityEventCallState_t612397810, ___value___1)); }
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
#endif // UNITYEVENTCALLSTATE_T612397810_H
#ifndef U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T1196175367_H
#define U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T1196175367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0
struct  U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t1196175367  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t1196175367, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T1196175367_H
#ifndef CONNECTIONCHANGEEVENT_T3719024766_H
#define CONNECTIONCHANGEEVENT_T3719024766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct  ConnectionChangeEvent_t3719024766  : public UnityEvent_1_t630401499
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCHANGEEVENT_T3719024766_H
#ifndef FLAGS_T3939732282_H
#define FLAGS_T3939732282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData/Flags
struct  Flags_t3939732282 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData/Flags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Flags_t3939732282, ___value___1)); }
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
#endif // FLAGS_T3939732282_H
#ifndef PERSISTENTCALL_T963107735_H
#define PERSISTENTCALL_T963107735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t963107735  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t1620542549 * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_1;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_2;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t3824291779 * ___m_Arguments_3;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(PersistentCall_t963107735, ___m_Target_0)); }
	inline Object_t1620542549 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t1620542549 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t1620542549 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodName_1() { return static_cast<int32_t>(offsetof(PersistentCall_t963107735, ___m_MethodName_1)); }
	inline String_t* get_m_MethodName_1() const { return ___m_MethodName_1; }
	inline String_t** get_address_of_m_MethodName_1() { return &___m_MethodName_1; }
	inline void set_m_MethodName_1(String_t* value)
	{
		___m_MethodName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodName_1), value);
	}

	inline static int32_t get_offset_of_m_Mode_2() { return static_cast<int32_t>(offsetof(PersistentCall_t963107735, ___m_Mode_2)); }
	inline int32_t get_m_Mode_2() const { return ___m_Mode_2; }
	inline int32_t* get_address_of_m_Mode_2() { return &___m_Mode_2; }
	inline void set_m_Mode_2(int32_t value)
	{
		___m_Mode_2 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_3() { return static_cast<int32_t>(offsetof(PersistentCall_t963107735, ___m_Arguments_3)); }
	inline ArgumentCache_t3824291779 * get_m_Arguments_3() const { return ___m_Arguments_3; }
	inline ArgumentCache_t3824291779 ** get_address_of_m_Arguments_3() { return &___m_Arguments_3; }
	inline void set_m_Arguments_3(ArgumentCache_t3824291779 * value)
	{
		___m_Arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arguments_3), value);
	}

	inline static int32_t get_offset_of_m_CallState_4() { return static_cast<int32_t>(offsetof(PersistentCall_t963107735, ___m_CallState_4)); }
	inline int32_t get_m_CallState_4() const { return ___m_CallState_4; }
	inline int32_t* get_address_of_m_CallState_4() { return &___m_CallState_4; }
	inline void set_m_CallState_4(int32_t value)
	{
		___m_CallState_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALL_T963107735_H
#ifndef FRAMEDATA_T3127611074_H
#define FRAMEDATA_T3127611074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData
struct  FrameData_t3127611074 
{
public:
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_4;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_5;

public:
	inline static int32_t get_offset_of_m_FrameID_0() { return static_cast<int32_t>(offsetof(FrameData_t3127611074, ___m_FrameID_0)); }
	inline uint64_t get_m_FrameID_0() const { return ___m_FrameID_0; }
	inline uint64_t* get_address_of_m_FrameID_0() { return &___m_FrameID_0; }
	inline void set_m_FrameID_0(uint64_t value)
	{
		___m_FrameID_0 = value;
	}

	inline static int32_t get_offset_of_m_DeltaTime_1() { return static_cast<int32_t>(offsetof(FrameData_t3127611074, ___m_DeltaTime_1)); }
	inline double get_m_DeltaTime_1() const { return ___m_DeltaTime_1; }
	inline double* get_address_of_m_DeltaTime_1() { return &___m_DeltaTime_1; }
	inline void set_m_DeltaTime_1(double value)
	{
		___m_DeltaTime_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight_2() { return static_cast<int32_t>(offsetof(FrameData_t3127611074, ___m_Weight_2)); }
	inline float get_m_Weight_2() const { return ___m_Weight_2; }
	inline float* get_address_of_m_Weight_2() { return &___m_Weight_2; }
	inline void set_m_Weight_2(float value)
	{
		___m_Weight_2 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveWeight_3() { return static_cast<int32_t>(offsetof(FrameData_t3127611074, ___m_EffectiveWeight_3)); }
	inline float get_m_EffectiveWeight_3() const { return ___m_EffectiveWeight_3; }
	inline float* get_address_of_m_EffectiveWeight_3() { return &___m_EffectiveWeight_3; }
	inline void set_m_EffectiveWeight_3(float value)
	{
		___m_EffectiveWeight_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveSpeed_4() { return static_cast<int32_t>(offsetof(FrameData_t3127611074, ___m_EffectiveSpeed_4)); }
	inline float get_m_EffectiveSpeed_4() const { return ___m_EffectiveSpeed_4; }
	inline float* get_address_of_m_EffectiveSpeed_4() { return &___m_EffectiveSpeed_4; }
	inline void set_m_EffectiveSpeed_4(float value)
	{
		___m_EffectiveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_Flags_5() { return static_cast<int32_t>(offsetof(FrameData_t3127611074, ___m_Flags_5)); }
	inline int32_t get_m_Flags_5() const { return ___m_Flags_5; }
	inline int32_t* get_address_of_m_Flags_5() { return &___m_Flags_5; }
	inline void set_m_Flags_5(int32_t value)
	{
		___m_Flags_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEDATA_T3127611074_H
#ifndef PLAYABLEBINDING_T2456175874_H
#define PLAYABLEBINDING_T2456175874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t2456175874 
{
public:
	union
	{
		struct
		{
			// System.String UnityEngine.Playables.PlayableBinding::<streamName>k__BackingField
			String_t* ___U3CstreamNameU3Ek__BackingField_2;
			// UnityEngine.Playables.DataStreamType UnityEngine.Playables.PlayableBinding::<streamType>k__BackingField
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			// UnityEngine.Object UnityEngine.Playables.PlayableBinding::<sourceObject>k__BackingField
			Object_t1620542549 * ___U3CsourceObjectU3Ek__BackingField_4;
			// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t2456175874__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t2456175874, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t2456175874, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t2456175874, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t1620542549 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t1620542549 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t1620542549 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t2456175874, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t2456175874_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t2434550967* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t2456175874_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t2434550967* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t2434550967** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t2434550967* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t2456175874_StaticFields, ___DefaultDuration_1)); }
	inline double get_DefaultDuration_1() const { return ___DefaultDuration_1; }
	inline double* get_address_of_DefaultDuration_1() { return &___DefaultDuration_1; }
	inline void set_DefaultDuration_1(double value)
	{
		___DefaultDuration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t2456175874_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t1620542549_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t2456175874__padding[1];
	};
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t2456175874_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t1620542549_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t2456175874__padding[1];
	};
};
#endif // PLAYABLEBINDING_T2456175874_H
#ifndef SCRIPTABLEOBJECT_T809317230_H
#define SCRIPTABLEOBJECT_T809317230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t809317230  : public Object_t1620542549
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t809317230_marshaled_pinvoke : public Object_t1620542549_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t809317230_marshaled_com : public Object_t1620542549_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T809317230_H
#ifndef SCRIPTPLAYABLEOUTPUT_T1221889173_H
#define SCRIPTPLAYABLEOUTPUT_T1221889173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.ScriptPlayableOutput
struct  ScriptPlayableOutput_t1221889173 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_t4259131898  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayableOutput_t1221889173, ___m_Handle_0)); }
	inline PlayableOutputHandle_t4259131898  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t4259131898 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t4259131898  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPLAYABLEOUTPUT_T1221889173_H
#ifndef LOGGER_T2400575163_H
#define LOGGER_T2400575163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Logger
struct  Logger_t2400575163  : public RuntimeObject
{
public:
	// UnityEngine.ILogHandler UnityEngine.Logger::<logHandler>k__BackingField
	RuntimeObject* ___U3ClogHandlerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Logger::<logEnabled>k__BackingField
	bool ___U3ClogEnabledU3Ek__BackingField_1;
	// UnityEngine.LogType UnityEngine.Logger::<filterLogType>k__BackingField
	int32_t ___U3CfilterLogTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ClogHandlerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Logger_t2400575163, ___U3ClogHandlerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3ClogHandlerU3Ek__BackingField_0() const { return ___U3ClogHandlerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3ClogHandlerU3Ek__BackingField_0() { return &___U3ClogHandlerU3Ek__BackingField_0; }
	inline void set_U3ClogHandlerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3ClogHandlerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClogHandlerU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ClogEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Logger_t2400575163, ___U3ClogEnabledU3Ek__BackingField_1)); }
	inline bool get_U3ClogEnabledU3Ek__BackingField_1() const { return ___U3ClogEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3ClogEnabledU3Ek__BackingField_1() { return &___U3ClogEnabledU3Ek__BackingField_1; }
	inline void set_U3ClogEnabledU3Ek__BackingField_1(bool value)
	{
		___U3ClogEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Logger_t2400575163, ___U3CfilterLogTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CfilterLogTypeU3Ek__BackingField_2() const { return ___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CfilterLogTypeU3Ek__BackingField_2() { return &___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline void set_U3CfilterLogTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CfilterLogTypeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T2400575163_H
#ifndef MULTICASTDELEGATE_T3137754623_H
#define MULTICASTDELEGATE_T3137754623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3137754623  : public Delegate_t430756854
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3137754623 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3137754623 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3137754623, ___prev_9)); }
	inline MulticastDelegate_t3137754623 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3137754623 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3137754623 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3137754623, ___kpm_next_10)); }
	inline MulticastDelegate_t3137754623 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3137754623 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3137754623 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3137754623_H
#ifndef COMPONENT_T2262572850_H
#define COMPONENT_T2262572850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t2262572850  : public Object_t1620542549
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T2262572850_H
#ifndef PLAYABLEASSET_T1913918221_H
#define PLAYABLEASSET_T1913918221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t1913918221  : public ScriptableObject_t809317230
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEASSET_T1913918221_H
#ifndef PLAYERCONNECTION_T1248512054_H
#define PLAYERCONNECTION_T1248512054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct  PlayerConnection_t1248512054  : public ScriptableObject_t809317230
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents UnityEngine.Networking.PlayerConnection.PlayerConnection::m_PlayerEditorConnectionEvents
	PlayerEditorConnectionEvents_t1603667790 * ___m_PlayerEditorConnectionEvents_2;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Networking.PlayerConnection.PlayerConnection::m_connectedPlayers
	List_1_t19590929 * ___m_connectedPlayers_3;

public:
	inline static int32_t get_offset_of_m_PlayerEditorConnectionEvents_2() { return static_cast<int32_t>(offsetof(PlayerConnection_t1248512054, ___m_PlayerEditorConnectionEvents_2)); }
	inline PlayerEditorConnectionEvents_t1603667790 * get_m_PlayerEditorConnectionEvents_2() const { return ___m_PlayerEditorConnectionEvents_2; }
	inline PlayerEditorConnectionEvents_t1603667790 ** get_address_of_m_PlayerEditorConnectionEvents_2() { return &___m_PlayerEditorConnectionEvents_2; }
	inline void set_m_PlayerEditorConnectionEvents_2(PlayerEditorConnectionEvents_t1603667790 * value)
	{
		___m_PlayerEditorConnectionEvents_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerEditorConnectionEvents_2), value);
	}

	inline static int32_t get_offset_of_m_connectedPlayers_3() { return static_cast<int32_t>(offsetof(PlayerConnection_t1248512054, ___m_connectedPlayers_3)); }
	inline List_1_t19590929 * get_m_connectedPlayers_3() const { return ___m_connectedPlayers_3; }
	inline List_1_t19590929 ** get_address_of_m_connectedPlayers_3() { return &___m_connectedPlayers_3; }
	inline void set_m_connectedPlayers_3(List_1_t19590929 * value)
	{
		___m_connectedPlayers_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_connectedPlayers_3), value);
	}
};

struct PlayerConnection_t1248512054_StaticFields
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::s_Instance
	PlayerConnection_t1248512054 * ___s_Instance_4;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(PlayerConnection_t1248512054_StaticFields, ___s_Instance_4)); }
	inline PlayerConnection_t1248512054 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline PlayerConnection_t1248512054 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(PlayerConnection_t1248512054 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONNECTION_T1248512054_H
#ifndef UNITYACTION_T4280400156_H
#define UNITYACTION_T4280400156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t4280400156  : public MulticastDelegate_t3137754623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T4280400156_H
#ifndef BEHAVIOUR_T3664298688_H
#define BEHAVIOUR_T3664298688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t3664298688  : public Component_t2262572850
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T3664298688_H
#ifndef CSSMEASUREFUNC_T3669125838_H
#define CSSMEASUREFUNC_T3669125838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSMeasureFunc
struct  CSSMeasureFunc_t3669125838  : public MulticastDelegate_t3137754623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSMEASUREFUNC_T3669125838_H
#ifndef MONOBEHAVIOUR_T1596581039_H
#define MONOBEHAVIOUR_T1596581039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1596581039  : public Behaviour_t3664298688
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1596581039_H
#ifndef CAMERACONTROL_T1763135986_H
#define CAMERACONTROL_T1763135986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cameraControl
struct  cameraControl_t1763135986  : public MonoBehaviour_t1596581039
{
public:
	// System.Single cameraControl::rotateSpeed
	float ___rotateSpeed_2;

public:
	inline static int32_t get_offset_of_rotateSpeed_2() { return static_cast<int32_t>(offsetof(cameraControl_t1763135986, ___rotateSpeed_2)); }
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
#endif // CAMERACONTROL_T1763135986_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1300 = { sizeof (UnityException_t1889255670), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1300[2] = 
{
	0,
	UnityException_t1889255670::get_offset_of_unityStackTrace_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1301 = { sizeof (PersistentListenerMode_t2893635133)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1301[8] = 
{
	PersistentListenerMode_t2893635133::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1302 = { sizeof (ArgumentCache_t3824291779), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1302[6] = 
{
	ArgumentCache_t3824291779::get_offset_of_m_ObjectArgument_0(),
	ArgumentCache_t3824291779::get_offset_of_m_ObjectArgumentAssemblyTypeName_1(),
	ArgumentCache_t3824291779::get_offset_of_m_IntArgument_2(),
	ArgumentCache_t3824291779::get_offset_of_m_FloatArgument_3(),
	ArgumentCache_t3824291779::get_offset_of_m_StringArgument_4(),
	ArgumentCache_t3824291779::get_offset_of_m_BoolArgument_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1303 = { sizeof (BaseInvokableCall_t4163659030), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1304 = { sizeof (InvokableCall_t698893671), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1304[1] = 
{
	InvokableCall_t698893671::get_offset_of_Delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1305 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1305[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1306 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1306[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1307 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1307[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1308 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1308[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1309 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1309[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1310 = { sizeof (UnityEventCallState_t612397810)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1310[4] = 
{
	UnityEventCallState_t612397810::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1311 = { sizeof (PersistentCall_t963107735), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1311[5] = 
{
	PersistentCall_t963107735::get_offset_of_m_Target_0(),
	PersistentCall_t963107735::get_offset_of_m_MethodName_1(),
	PersistentCall_t963107735::get_offset_of_m_Mode_2(),
	PersistentCall_t963107735::get_offset_of_m_Arguments_3(),
	PersistentCall_t963107735::get_offset_of_m_CallState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1312 = { sizeof (PersistentCallGroup_t3575321141), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1312[1] = 
{
	PersistentCallGroup_t3575321141::get_offset_of_m_Calls_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1313 = { sizeof (InvokableCallList_t1146447432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1313[4] = 
{
	InvokableCallList_t1146447432::get_offset_of_m_PersistentCalls_0(),
	InvokableCallList_t1146447432::get_offset_of_m_RuntimeCalls_1(),
	InvokableCallList_t1146447432::get_offset_of_m_ExecutingCalls_2(),
	InvokableCallList_t1146447432::get_offset_of_m_NeedsUpdate_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1314 = { sizeof (UnityEventBase_t259893748), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1314[4] = 
{
	UnityEventBase_t259893748::get_offset_of_m_Calls_0(),
	UnityEventBase_t259893748::get_offset_of_m_PersistentCalls_1(),
	UnityEventBase_t259893748::get_offset_of_m_TypeName_2(),
	UnityEventBase_t259893748::get_offset_of_m_CallsDirty_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1315 = { sizeof (UnityAction_t4280400156), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1316 = { sizeof (UnityEvent_t2530476334), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1316[1] = 
{
	UnityEvent_t2530476334::get_offset_of_m_InvokeArray_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1317 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1318 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1318[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1319 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1320 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1320[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1321 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1322 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1322[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1323 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1324 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1324[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1325 = { sizeof (UnityString_t1908011940), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1326 = { sizeof (UnitySynchronizationContext_t4011902324), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1326[1] = 
{
	UnitySynchronizationContext_t4011902324::get_offset_of_m_AsyncWorkQueue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1327 = { sizeof (WorkRequest_t1512441528)+ sizeof (RuntimeObject), sizeof(WorkRequest_t1512441528_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1327[2] = 
{
	WorkRequest_t1512441528::get_offset_of_m_DelagateCallback_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WorkRequest_t1512441528::get_offset_of_m_DelagateState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1328 = { sizeof (Vector2_t390938811)+ sizeof (RuntimeObject), sizeof(Vector2_t390938811 ), sizeof(Vector2_t390938811_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1328[10] = 
{
	Vector2_t390938811::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t390938811::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t390938811_StaticFields::get_offset_of_zeroVector_2(),
	Vector2_t390938811_StaticFields::get_offset_of_oneVector_3(),
	Vector2_t390938811_StaticFields::get_offset_of_upVector_4(),
	Vector2_t390938811_StaticFields::get_offset_of_downVector_5(),
	Vector2_t390938811_StaticFields::get_offset_of_leftVector_6(),
	Vector2_t390938811_StaticFields::get_offset_of_rightVector_7(),
	Vector2_t390938811_StaticFields::get_offset_of_positiveInfinityVector_8(),
	Vector2_t390938811_StaticFields::get_offset_of_negativeInfinityVector_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1329 = { sizeof (ThreadAndSerializationSafeAttribute_t3298466094), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1330 = { sizeof (ReadOnlyAttribute_t248434753), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1331 = { sizeof (ReadWriteAttribute_t3967081296), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1332 = { sizeof (WriteOnlyAttribute_t2068924472), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1333 = { sizeof (DeallocateOnJobCompletionAttribute_t3228136677), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1334 = { sizeof (NativeContainerAttribute_t2261452756), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1335 = { sizeof (NativeContainerSupportsAtomicWriteAttribute_t2839594338), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1336 = { sizeof (NativeContainerSupportsMinMaxWriteRestrictionAttribute_t2690315961), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1337 = { sizeof (FrameData_t3127611074)+ sizeof (RuntimeObject), sizeof(FrameData_t3127611074 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1337[6] = 
{
	FrameData_t3127611074::get_offset_of_m_FrameID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3127611074::get_offset_of_m_DeltaTime_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3127611074::get_offset_of_m_Weight_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3127611074::get_offset_of_m_EffectiveWeight_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3127611074::get_offset_of_m_EffectiveSpeed_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3127611074::get_offset_of_m_Flags_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1338 = { sizeof (Flags_t3939732282)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1338[5] = 
{
	Flags_t3939732282::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1339 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1340 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1341 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1342 = { sizeof (PlayableBinding_t2456175874)+ sizeof (RuntimeObject), -1, sizeof(PlayableBinding_t2456175874_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1342[6] = 
{
	PlayableBinding_t2456175874_StaticFields::get_offset_of_None_0(),
	PlayableBinding_t2456175874_StaticFields::get_offset_of_DefaultDuration_1(),
	PlayableBinding_t2456175874::get_offset_of_U3CstreamNameU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t2456175874::get_offset_of_U3CstreamTypeU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t2456175874::get_offset_of_U3CsourceObjectU3Ek__BackingField_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t2456175874::get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1343 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1344 = { sizeof (PlayableAsset_t1913918221), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1345 = { sizeof (PlayableBehaviour_t1192816734), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1346 = { sizeof (PlayableExtensions_t1111419346), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1347 = { sizeof (ScriptPlayableOutput_t1221889173)+ sizeof (RuntimeObject), sizeof(ScriptPlayableOutput_t1221889173 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1347[1] = 
{
	ScriptPlayableOutput_t1221889173::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1348 = { sizeof (DefaultValueAttribute_t205655631), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1348[1] = 
{
	DefaultValueAttribute_t205655631::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1349 = { sizeof (ExcludeFromDocsAttribute_t187332190), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1350 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1351 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1352 = { sizeof (Logger_t2400575163), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1352[3] = 
{
	Logger_t2400575163::get_offset_of_U3ClogHandlerU3Ek__BackingField_0(),
	Logger_t2400575163::get_offset_of_U3ClogEnabledU3Ek__BackingField_1(),
	Logger_t2400575163::get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1353 = { sizeof (MessageEventArgs_t1731811105), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1353[2] = 
{
	MessageEventArgs_t1731811105::get_offset_of_playerId_0(),
	MessageEventArgs_t1731811105::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1354 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1355 = { sizeof (PlayerConnection_t1248512054), -1, sizeof(PlayerConnection_t1248512054_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1355[3] = 
{
	PlayerConnection_t1248512054::get_offset_of_m_PlayerEditorConnectionEvents_2(),
	PlayerConnection_t1248512054::get_offset_of_m_connectedPlayers_3(),
	PlayerConnection_t1248512054_StaticFields::get_offset_of_s_Instance_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1356 = { sizeof (PlayerEditorConnectionEvents_t1603667790), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1356[3] = 
{
	PlayerEditorConnectionEvents_t1603667790::get_offset_of_messageTypeSubscribers_0(),
	PlayerEditorConnectionEvents_t1603667790::get_offset_of_connectionEvent_1(),
	PlayerEditorConnectionEvents_t1603667790::get_offset_of_disconnectionEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1357 = { sizeof (MessageEvent_t2482290380), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1358 = { sizeof (ConnectionChangeEvent_t3719024766), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1359 = { sizeof (MessageTypeSubscribers_t802655831), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1359[3] = 
{
	MessageTypeSubscribers_t802655831::get_offset_of_m_messageTypeId_0(),
	MessageTypeSubscribers_t802655831::get_offset_of_subscriberCount_1(),
	MessageTypeSubscribers_t802655831::get_offset_of_messageCallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1360 = { sizeof (U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t1196175367), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1360[1] = 
{
	U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t1196175367::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1361 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1362 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1363 = { sizeof (RenderPipelineManager_t3956697607), -1, sizeof(RenderPipelineManager_t3956697607_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1363[2] = 
{
	RenderPipelineManager_t3956697607_StaticFields::get_offset_of_s_CurrentPipelineAsset_0(),
	RenderPipelineManager_t3956697607_StaticFields::get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1364 = { sizeof (UsedByNativeCodeAttribute_t1090883118), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1365 = { sizeof (RequiredByNativeCodeAttribute_t2674156466), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1366 = { sizeof (FormerlySerializedAsAttribute_t1754410019), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1366[1] = 
{
	FormerlySerializedAsAttribute_t1754410019::get_offset_of_m_oldName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1367 = { sizeof (TypeInferenceRules_t3958923700)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1367[5] = 
{
	TypeInferenceRules_t3958923700::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1368 = { sizeof (TypeInferenceRuleAttribute_t3449052103), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1368[1] = 
{
	TypeInferenceRuleAttribute_t3449052103::get_offset_of__rule_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1369 = { sizeof (NetFxCoreExtensions_t2082136736), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1370 = { sizeof (CSSMeasureFunc_t3669125838), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1371 = { sizeof (CSSMeasureMode_t1968206667)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1371[4] = 
{
	CSSMeasureMode_t1968206667::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1372 = { sizeof (CSSSize_t3233540236)+ sizeof (RuntimeObject), sizeof(CSSSize_t3233540236 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1372[2] = 
{
	CSSSize_t3233540236::get_offset_of_width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CSSSize_t3233540236::get_offset_of_height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1373 = { sizeof (Native_t1539421353), -1, sizeof(Native_t1539421353_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1373[1] = 
{
	Native_t1539421353_StaticFields::get_offset_of_s_MeasureFunctions_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1374 = { sizeof (U3CModuleU3E_t23800722), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1375 = { sizeof (cameraControl_t1763135986), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1375[1] = 
{
	cameraControl_t1763135986::get_offset_of_rotateSpeed_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
