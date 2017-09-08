﻿#include "il2cpp-config.h"

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

// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t1898882937;
// UnityEngine.Camera[]
struct CameraU5BU5D_t3967832798;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1272799222;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t2212213199;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t2356093413;
// UnityEngine.Transform
struct Transform_t259628202;
// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct RequestAtlasCallback_t1202206050;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t3055699183;
// System.String
struct String_t;
// UnityEngine.Gyroscope
struct Gyroscope_t2550068312;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t2941058055;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t1732026093;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t3600969292;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t1098468114;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_t2118213074;
// System.Text.RegularExpressions.Regex
struct Regex_t1661680828;
// UnityEngine.ILogger
struct ILogger_t1587061144;
// System.Type
struct Type_t;
// System.Void
struct Void_t3254505899;
// System.Char[]
struct CharU5BU5D_t2836172046;
// UnityEngine.GameObject
struct GameObject_t3921449449;
// UnityEngine.Camera
struct Camera_t2530026151;
// UnityEngine.Collider
struct Collider_t4287738085;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1237820514;
// UnityEngine.CharacterController
struct CharacterController_t1418507179;
// UnityEngine.Rigidbody
struct Rigidbody_t2491674829;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t648492152;
// UnityEngine.Display[]
struct DisplayU5BU5D_t2194636802;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t1399422997;
// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t1770141939;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3415377758;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t3869666800;
// System.Single[]
struct SingleU5BU5D_t3979485698;
// System.IAsyncResult
struct IAsyncResult_t1068663224;
// System.AsyncCallback
struct AsyncCallback_t3343868185;
// UnityEngine.RectTransform
struct RectTransform_t2793294648;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t2167780484;

struct ContactPoint_t2107093397 ;



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
#ifndef YIELDINSTRUCTION_T3250054451_H
#define YIELDINSTRUCTION_T3250054451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t3250054451  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t3250054451_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t3250054451_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T3250054451_H
#ifndef SENDMOUSEEVENTS_T801656530_H
#define SENDMOUSEEVENTS_T801656530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t801656530  : public RuntimeObject
{
public:

public:
};

struct SendMouseEvents_t801656530_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t1898882937* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t1898882937* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t1898882937* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t3967832798* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t801656530_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t801656530_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t1898882937* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t1898882937** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t1898882937* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastHit_1), value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t801656530_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t1898882937* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t1898882937** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t1898882937* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseDownHit_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t801656530_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t1898882937* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t1898882937** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t1898882937* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentHit_3), value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t801656530_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t3967832798* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t3967832798** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t3967832798* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cameras_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T801656530_H
#ifndef SCENEMANAGER_T120967433_H
#define SCENEMANAGER_T120967433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.SceneManager
struct  SceneManager_t120967433  : public RuntimeObject
{
public:

public:
};

struct SceneManager_t120967433_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> UnityEngine.SceneManagement.SceneManager::sceneLoaded
	UnityAction_2_t1272799222 * ___sceneLoaded_0;
	// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::sceneUnloaded
	UnityAction_1_t2212213199 * ___sceneUnloaded_1;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::activeSceneChanged
	UnityAction_2_t2356093413 * ___activeSceneChanged_2;

public:
	inline static int32_t get_offset_of_sceneLoaded_0() { return static_cast<int32_t>(offsetof(SceneManager_t120967433_StaticFields, ___sceneLoaded_0)); }
	inline UnityAction_2_t1272799222 * get_sceneLoaded_0() const { return ___sceneLoaded_0; }
	inline UnityAction_2_t1272799222 ** get_address_of_sceneLoaded_0() { return &___sceneLoaded_0; }
	inline void set_sceneLoaded_0(UnityAction_2_t1272799222 * value)
	{
		___sceneLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneLoaded_0), value);
	}

	inline static int32_t get_offset_of_sceneUnloaded_1() { return static_cast<int32_t>(offsetof(SceneManager_t120967433_StaticFields, ___sceneUnloaded_1)); }
	inline UnityAction_1_t2212213199 * get_sceneUnloaded_1() const { return ___sceneUnloaded_1; }
	inline UnityAction_1_t2212213199 ** get_address_of_sceneUnloaded_1() { return &___sceneUnloaded_1; }
	inline void set_sceneUnloaded_1(UnityAction_1_t2212213199 * value)
	{
		___sceneUnloaded_1 = value;
		Il2CppCodeGenWriteBarrier((&___sceneUnloaded_1), value);
	}

	inline static int32_t get_offset_of_activeSceneChanged_2() { return static_cast<int32_t>(offsetof(SceneManager_t120967433_StaticFields, ___activeSceneChanged_2)); }
	inline UnityAction_2_t2356093413 * get_activeSceneChanged_2() const { return ___activeSceneChanged_2; }
	inline UnityAction_2_t2356093413 ** get_address_of_activeSceneChanged_2() { return &___activeSceneChanged_2; }
	inline void set_activeSceneChanged_2(UnityAction_2_t2356093413 * value)
	{
		___activeSceneChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeSceneChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEMANAGER_T120967433_H
#ifndef TIME_T3200159200_H
#define TIME_T3200159200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Time
struct  Time_t3200159200  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIME_T3200159200_H
#ifndef ENUMERATOR_T1816009183_H
#define ENUMERATOR_T1816009183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform/Enumerator
struct  Enumerator_t1816009183  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Transform/Enumerator::outer
	Transform_t259628202 * ___outer_0;
	// System.Int32 UnityEngine.Transform/Enumerator::currentIndex
	int32_t ___currentIndex_1;

public:
	inline static int32_t get_offset_of_outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t1816009183, ___outer_0)); }
	inline Transform_t259628202 * get_outer_0() const { return ___outer_0; }
	inline Transform_t259628202 ** get_address_of_outer_0() { return &___outer_0; }
	inline void set_outer_0(Transform_t259628202 * value)
	{
		___outer_0 = value;
		Il2CppCodeGenWriteBarrier((&___outer_0), value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t1816009183, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1816009183_H
#ifndef RESOURCES_T2348649577_H
#define RESOURCES_T2348649577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t2348649577  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T2348649577_H
#ifndef SPRITEATLASMANAGER_T3728022972_H
#define SPRITEATLASMANAGER_T3728022972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager
struct  SpriteAtlasManager_t3728022972  : public RuntimeObject
{
public:

public:
};

struct SpriteAtlasManager_t3728022972_StaticFields
{
public:
	// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback UnityEngine.U2D.SpriteAtlasManager::atlasRequested
	RequestAtlasCallback_t1202206050 * ___atlasRequested_0;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.U2D.SpriteAtlasManager::<>f__mg$cache0
	Action_1_t3055699183 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_atlasRequested_0() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t3728022972_StaticFields, ___atlasRequested_0)); }
	inline RequestAtlasCallback_t1202206050 * get_atlasRequested_0() const { return ___atlasRequested_0; }
	inline RequestAtlasCallback_t1202206050 ** get_address_of_atlasRequested_0() { return &___atlasRequested_0; }
	inline void set_atlasRequested_0(RequestAtlasCallback_t1202206050 * value)
	{
		___atlasRequested_0 = value;
		Il2CppCodeGenWriteBarrier((&___atlasRequested_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t3728022972_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Action_1_t3055699183 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Action_1_t3055699183 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Action_1_t3055699183 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLASMANAGER_T3728022972_H
#ifndef STACKTRACEUTILITY_T1405714663_H
#define STACKTRACEUTILITY_T1405714663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t1405714663  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t1405714663_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t1405714663_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T1405714663_H
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
#ifndef CLASSLIBRARYINITIALIZER_T1448733779_H
#define CLASSLIBRARYINITIALIZER_T1448733779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ClassLibraryInitializer
struct  ClassLibraryInitializer_t1448733779  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSLIBRARYINITIALIZER_T1448733779_H
#ifndef INPUT_T3139545311_H
#define INPUT_T3139545311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t3139545311  : public RuntimeObject
{
public:

public:
};

struct Input_t3139545311_StaticFields
{
public:
	// UnityEngine.Gyroscope UnityEngine.Input::m_MainGyro
	Gyroscope_t2550068312 * ___m_MainGyro_0;

public:
	inline static int32_t get_offset_of_m_MainGyro_0() { return static_cast<int32_t>(offsetof(Input_t3139545311_StaticFields, ___m_MainGyro_0)); }
	inline Gyroscope_t2550068312 * get_m_MainGyro_0() const { return ___m_MainGyro_0; }
	inline Gyroscope_t2550068312 ** get_address_of_m_MainGyro_0() { return &___m_MainGyro_0; }
	inline void set_m_MainGyro_0(Gyroscope_t2550068312 * value)
	{
		___m_MainGyro_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MainGyro_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUT_T3139545311_H
#ifndef SETUPCOROUTINE_T3287504771_H
#define SETUPCOROUTINE_T3287504771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SetupCoroutine
struct  SetupCoroutine_t3287504771  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETUPCOROUTINE_T3287504771_H
#ifndef AUDIOPLAYABLEGRAPHEXTENSIONS_T1488270305_H
#define AUDIOPLAYABLEGRAPHEXTENSIONS_T1488270305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.AudioPlayableGraphExtensions
struct  AudioPlayableGraphExtensions_t1488270305  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEGRAPHEXTENSIONS_T1488270305_H
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
#ifndef PHYSICS_T2173356494_H
#define PHYSICS_T2173356494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics
struct  Physics_t2173356494  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS_T2173356494_H
#ifndef AUDIOSETTINGS_T2721050524_H
#define AUDIOSETTINGS_T2721050524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings
struct  AudioSettings_t2721050524  : public RuntimeObject
{
public:

public:
};

struct AudioSettings_t2721050524_StaticFields
{
public:
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_t2941058055 * ___OnAudioConfigurationChanged_0;

public:
	inline static int32_t get_offset_of_OnAudioConfigurationChanged_0() { return static_cast<int32_t>(offsetof(AudioSettings_t2721050524_StaticFields, ___OnAudioConfigurationChanged_0)); }
	inline AudioConfigurationChangeHandler_t2941058055 * get_OnAudioConfigurationChanged_0() const { return ___OnAudioConfigurationChanged_0; }
	inline AudioConfigurationChangeHandler_t2941058055 ** get_address_of_OnAudioConfigurationChanged_0() { return &___OnAudioConfigurationChanged_0; }
	inline void set_OnAudioConfigurationChanged_0(AudioConfigurationChangeHandler_t2941058055 * value)
	{
		___OnAudioConfigurationChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnAudioConfigurationChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSETTINGS_T2721050524_H
#ifndef ATTRIBUTEHELPERENGINE_T4144772337_H
#define ATTRIBUTEHELPERENGINE_T4144772337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t4144772337  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t4144772337_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t1732026093* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t3600969292* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t1098468114* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t4144772337_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t1732026093* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t1732026093** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t1732026093* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____disallowMultipleComponentArray_0), value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t4144772337_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_t3600969292* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_t3600969292** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_t3600969292* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____executeInEditModeArray_1), value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t4144772337_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t1098468114* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t1098468114** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t1098468114* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((&____requireComponentArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEHELPERENGINE_T4144772337_H
#ifndef REMOTESETTINGS_T2548211685_H
#define REMOTESETTINGS_T2548211685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings
struct  RemoteSettings_t2548211685  : public RuntimeObject
{
public:

public:
};

struct RemoteSettings_t2548211685_StaticFields
{
public:
	// UnityEngine.RemoteSettings/UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_t2118213074 * ___Updated_0;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RemoteSettings_t2548211685_StaticFields, ___Updated_0)); }
	inline UpdatedEventHandler_t2118213074 * get_Updated_0() const { return ___Updated_0; }
	inline UpdatedEventHandler_t2118213074 ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(UpdatedEventHandler_t2118213074 * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((&___Updated_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTESETTINGS_T2548211685_H
#ifndef WEBREQUESTUTILS_T4282249538_H
#define WEBREQUESTUTILS_T4282249538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.WebRequestUtils
struct  WebRequestUtils_t4282249538  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_t4282249538_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_t1661680828 * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_t4282249538_StaticFields, ___domainRegex_0)); }
	inline Regex_t1661680828 * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_t1661680828 ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_t1661680828 * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((&___domainRegex_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTUTILS_T4282249538_H
#ifndef GYROSCOPE_T2550068312_H
#define GYROSCOPE_T2550068312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gyroscope
struct  Gyroscope_t2550068312  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROSCOPE_T2550068312_H
#ifndef DEBUG_T3391067356_H
#define DEBUG_T3391067356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Debug
struct  Debug_t3391067356  : public RuntimeObject
{
public:

public:
};

struct Debug_t3391067356_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t3391067356_StaticFields, ___s_Logger_0)); }
	inline RuntimeObject* get_s_Logger_0() const { return ___s_Logger_0; }
	inline RuntimeObject** get_address_of_s_Logger_0() { return &___s_Logger_0; }
	inline void set_s_Logger_0(RuntimeObject* value)
	{
		___s_Logger_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Logger_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUG_T3391067356_H
#ifndef DEBUGLOGHANDLER_T4093626886_H
#define DEBUGLOGHANDLER_T4093626886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DebugLogHandler
struct  DebugLogHandler_t4093626886  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLOGHANDLER_T4093626886_H
#ifndef SCENE_T2319138534_H
#define SCENE_T2319138534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2319138534 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2319138534, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2319138534_H
#ifndef GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T3226794001_H
#define GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T3226794001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.GeneratedByOldBindingsGeneratorAttribute
struct  GeneratedByOldBindingsGeneratorAttribute_t3226794001  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T3226794001_H
#ifndef WRITABLEATTRIBUTE_T2883042283_H
#define WRITABLEATTRIBUTE_T2883042283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WritableAttribute
struct  WritableAttribute_t2883042283  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITABLEATTRIBUTE_T2883042283_H
#ifndef REQUIRECOMPONENT_T1698787203_H
#define REQUIRECOMPONENT_T1698787203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RequireComponent
struct  RequireComponent_t1698787203  : public Attribute_t3344439798
{
public:
	// System.Type UnityEngine.RequireComponent::m_Type0
	Type_t * ___m_Type0_0;
	// System.Type UnityEngine.RequireComponent::m_Type1
	Type_t * ___m_Type1_1;
	// System.Type UnityEngine.RequireComponent::m_Type2
	Type_t * ___m_Type2_2;

public:
	inline static int32_t get_offset_of_m_Type0_0() { return static_cast<int32_t>(offsetof(RequireComponent_t1698787203, ___m_Type0_0)); }
	inline Type_t * get_m_Type0_0() const { return ___m_Type0_0; }
	inline Type_t ** get_address_of_m_Type0_0() { return &___m_Type0_0; }
	inline void set_m_Type0_0(Type_t * value)
	{
		___m_Type0_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type0_0), value);
	}

	inline static int32_t get_offset_of_m_Type1_1() { return static_cast<int32_t>(offsetof(RequireComponent_t1698787203, ___m_Type1_1)); }
	inline Type_t * get_m_Type1_1() const { return ___m_Type1_1; }
	inline Type_t ** get_address_of_m_Type1_1() { return &___m_Type1_1; }
	inline void set_m_Type1_1(Type_t * value)
	{
		___m_Type1_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type1_1), value);
	}

	inline static int32_t get_offset_of_m_Type2_2() { return static_cast<int32_t>(offsetof(RequireComponent_t1698787203, ___m_Type2_2)); }
	inline Type_t * get_m_Type2_2() const { return ___m_Type2_2; }
	inline Type_t ** get_address_of_m_Type2_2() { return &___m_Type2_2; }
	inline void set_m_Type2_2(Type_t * value)
	{
		___m_Type2_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIRECOMPONENT_T1698787203_H
#ifndef NATIVECLASSATTRIBUTE_T1616309980_H
#define NATIVECLASSATTRIBUTE_T1616309980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NativeClassAttribute
struct  NativeClassAttribute_t1616309980  : public Attribute_t3344439798
{
public:
	// System.String UnityEngine.NativeClassAttribute::<QualifiedNativeName>k__BackingField
	String_t* ___U3CQualifiedNativeNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeClassAttribute_t1616309980, ___U3CQualifiedNativeNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CQualifiedNativeNameU3Ek__BackingField_0() const { return ___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return &___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline void set_U3CQualifiedNativeNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CQualifiedNativeNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CQualifiedNativeNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECLASSATTRIBUTE_T1616309980_H
#ifndef DEFAULTEXECUTIONORDER_T2322641541_H
#define DEFAULTEXECUTIONORDER_T2322641541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DefaultExecutionOrder
struct  DefaultExecutionOrder_t2322641541  : public Attribute_t3344439798
{
public:
	// System.Int32 UnityEngine.DefaultExecutionOrder::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CorderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DefaultExecutionOrder_t2322641541, ___U3CorderU3Ek__BackingField_0)); }
	inline int32_t get_U3CorderU3Ek__BackingField_0() const { return ___U3CorderU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CorderU3Ek__BackingField_0() { return &___U3CorderU3Ek__BackingField_0; }
	inline void set_U3CorderU3Ek__BackingField_0(int32_t value)
	{
		___U3CorderU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEXECUTIONORDER_T2322641541_H
#ifndef DISALLOWMULTIPLECOMPONENT_T2802569860_H
#define DISALLOWMULTIPLECOMPONENT_T2802569860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DisallowMultipleComponent
struct  DisallowMultipleComponent_t2802569860  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISALLOWMULTIPLECOMPONENT_T2802569860_H
#ifndef CONTEXTMENU_T3667609747_H
#define CONTEXTMENU_T3667609747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContextMenu
struct  ContextMenu_t3667609747  : public Attribute_t3344439798
{
public:
	// System.String UnityEngine.ContextMenu::menuItem
	String_t* ___menuItem_0;
	// System.Boolean UnityEngine.ContextMenu::validate
	bool ___validate_1;
	// System.Int32 UnityEngine.ContextMenu::priority
	int32_t ___priority_2;

public:
	inline static int32_t get_offset_of_menuItem_0() { return static_cast<int32_t>(offsetof(ContextMenu_t3667609747, ___menuItem_0)); }
	inline String_t* get_menuItem_0() const { return ___menuItem_0; }
	inline String_t** get_address_of_menuItem_0() { return &___menuItem_0; }
	inline void set_menuItem_0(String_t* value)
	{
		___menuItem_0 = value;
		Il2CppCodeGenWriteBarrier((&___menuItem_0), value);
	}

	inline static int32_t get_offset_of_validate_1() { return static_cast<int32_t>(offsetof(ContextMenu_t3667609747, ___validate_1)); }
	inline bool get_validate_1() const { return ___validate_1; }
	inline bool* get_address_of_validate_1() { return &___validate_1; }
	inline void set_validate_1(bool value)
	{
		___validate_1 = value;
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(ContextMenu_t3667609747, ___priority_2)); }
	inline int32_t get_priority_2() const { return ___priority_2; }
	inline int32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(int32_t value)
	{
		___priority_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTMENU_T3667609747_H
#ifndef ASSEMBLYISEDITORASSEMBLY_T4183523076_H
#define ASSEMBLYISEDITORASSEMBLY_T4183523076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssemblyIsEditorAssembly
struct  AssemblyIsEditorAssembly_t4183523076  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYISEDITORASSEMBLY_T4183523076_H
#ifndef EXECUTEINEDITMODE_T707126609_H
#define EXECUTEINEDITMODE_T707126609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExecuteInEditMode
struct  ExecuteInEditMode_t707126609  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEINEDITMODE_T707126609_H
#ifndef CULLINGGROUPEVENT_T3421790847_H
#define CULLINGGROUPEVENT_T3421790847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroupEvent
struct  CullingGroupEvent_t3421790847 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t3421790847, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t3421790847, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t3421790847, ___m_ThisState_2)); }
	inline uint8_t get_m_ThisState_2() const { return ___m_ThisState_2; }
	inline uint8_t* get_address_of_m_ThisState_2() { return &___m_ThisState_2; }
	inline void set_m_ThisState_2(uint8_t value)
	{
		___m_ThisState_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULLINGGROUPEVENT_T3421790847_H
#ifndef KEYFRAME_T2850792274_H
#define KEYFRAME_T2850792274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t2850792274 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t2850792274, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t2850792274, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t2850792274, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t2850792274, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T2850792274_H
#ifndef VECTOR3_T2349381726_H
#define VECTOR3_T2349381726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2349381726 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t2349381726, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t2349381726, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t2349381726, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t2349381726_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2349381726  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2349381726  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2349381726  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2349381726  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2349381726  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2349381726  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2349381726  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2349381726  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2349381726  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2349381726  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t2349381726_StaticFields, ___zeroVector_3)); }
	inline Vector3_t2349381726  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t2349381726 * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t2349381726  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2349381726_StaticFields, ___oneVector_4)); }
	inline Vector3_t2349381726  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t2349381726 * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t2349381726  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2349381726_StaticFields, ___upVector_5)); }
	inline Vector3_t2349381726  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t2349381726 * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t2349381726  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2349381726_StaticFields, ___downVector_6)); }
	inline Vector3_t2349381726  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t2349381726 * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t2349381726  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2349381726_StaticFields, ___leftVector_7)); }
	inline Vector3_t2349381726  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t2349381726 * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t2349381726  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2349381726_StaticFields, ___rightVector_8)); }
	inline Vector3_t2349381726  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t2349381726 * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t2349381726  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2349381726_StaticFields, ___forwardVector_9)); }
	inline Vector3_t2349381726  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t2349381726 * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t2349381726  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2349381726_StaticFields, ___backVector_10)); }
	inline Vector3_t2349381726  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t2349381726 * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t2349381726  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2349381726_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t2349381726  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t2349381726 * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t2349381726  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2349381726_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t2349381726  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t2349381726 * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t2349381726  value)
	{
		___negativeInfinityVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2349381726_H
#ifndef QUATERNION_T3199073233_H
#define QUATERNION_T3199073233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t3199073233 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t3199073233, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t3199073233, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t3199073233, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t3199073233, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t3199073233_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t3199073233  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t3199073233_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t3199073233  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t3199073233 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t3199073233  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T3199073233_H
#ifndef MATHF_T3727329693_H
#define MATHF_T3727329693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t3727329693 
{
public:

public:
};

struct Mathf_t3727329693_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t3727329693_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHF_T3727329693_H
#ifndef PREFERBINARYSERIALIZATION_T3703623093_H
#define PREFERBINARYSERIALIZATION_T3703623093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t3703623093  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T3703623093_H
#ifndef SERIALIZEFIELD_T1424939273_H
#define SERIALIZEFIELD_T1424939273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t1424939273  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T1424939273_H
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
#ifndef SERIALIZEPRIVATEVARIABLES_T712758694_H
#define SERIALIZEPRIVATEVARIABLES_T712758694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t712758694  : public Attribute_t3344439798
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T712758694_H
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
#ifndef HITINFO_T2611971048_H
#define HITINFO_T2611971048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t2611971048 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t3921449449 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t2530026151 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t2611971048, ___target_0)); }
	inline GameObject_t3921449449 * get_target_0() const { return ___target_0; }
	inline GameObject_t3921449449 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t3921449449 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t2611971048, ___camera_1)); }
	inline Camera_t2530026151 * get_camera_1() const { return ___camera_1; }
	inline Camera_t2530026151 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t2530026151 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t2611971048_marshaled_pinvoke
{
	GameObject_t3921449449 * ___target_0;
	Camera_t2530026151 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t2611971048_marshaled_com
{
	GameObject_t3921449449 * ___target_0;
	Camera_t2530026151 * ___camera_1;
};
#endif // HITINFO_T2611971048_H
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
#ifndef BOOLEAN_T2371164754_H
#define BOOLEAN_T2371164754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t2371164754 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t2371164754, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t2371164754_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t2371164754_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t2371164754_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T2371164754_H
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
#ifndef RECT_T3763860324_H
#define RECT_T3763860324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t3763860324 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t3763860324, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t3763860324, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t3763860324, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t3763860324, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T3763860324_H
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
#ifndef ASYNCOPERATION_T3156960784_H
#define ASYNCOPERATION_T3156960784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t3156960784  : public YieldInstruction_t3250054451
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t3156960784, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t3156960784_marshaled_pinvoke : public YieldInstruction_t3250054451_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t3156960784_marshaled_com : public YieldInstruction_t3250054451_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ASYNCOPERATION_T3156960784_H
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
#ifndef RAY_T3869700495_H
#define RAY_T3869700495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3869700495 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t2349381726  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t2349381726  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3869700495, ___m_Origin_0)); }
	inline Vector3_t2349381726  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t2349381726 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t2349381726  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3869700495, ___m_Direction_1)); }
	inline Vector3_t2349381726  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t2349381726 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t2349381726  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3869700495_H
#ifndef SENDMESSAGEOPTIONS_T3643670493_H
#define SENDMESSAGEOPTIONS_T3643670493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t3643670493 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SendMessageOptions_t3643670493, ___value___1)); }
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
#endif // SENDMESSAGEOPTIONS_T3643670493_H
#ifndef MATHFINTERNAL_T1326958317_H
#define MATHFINTERNAL_T1326958317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t1326958317 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t1326958317__padding[1];
	};

public:
};

struct MathfInternal_t1326958317_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t1326958317_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t1326958317_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t1326958317_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T1326958317_H
#ifndef SPACE_T1978934573_H
#define SPACE_T1978934573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t1978934573 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t1978934573, ___value___1)); }
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
#endif // SPACE_T1978934573_H
#ifndef CAMERACLEARFLAGS_T882771006_H
#define CAMERACLEARFLAGS_T882771006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t882771006 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraClearFlags_t882771006, ___value___1)); }
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
#endif // CAMERACLEARFLAGS_T882771006_H
#ifndef RAYCASTHIT_T803534334_H
#define RAYCASTHIT_T803534334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t803534334 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t2349381726  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t2349381726  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t390938811  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t4287738085 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t803534334, ___m_Point_0)); }
	inline Vector3_t2349381726  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t2349381726 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t2349381726  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t803534334, ___m_Normal_1)); }
	inline Vector3_t2349381726  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t2349381726 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t2349381726  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t803534334, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t803534334, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t803534334, ___m_UV_4)); }
	inline Vector2_t390938811  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t390938811 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t390938811  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t803534334, ___m_Collider_5)); }
	inline Collider_t4287738085 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t4287738085 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t4287738085 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t803534334_marshaled_pinvoke
{
	Vector3_t2349381726  ___m_Point_0;
	Vector3_t2349381726  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t390938811  ___m_UV_4;
	Collider_t4287738085 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t803534334_marshaled_com
{
	Vector3_t2349381726  ___m_Point_0;
	Vector3_t2349381726  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t390938811  ___m_UV_4;
	Collider_t4287738085 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T803534334_H
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
#ifndef PLAYABLEGRAPH_T988649617_H
#define PLAYABLEGRAPH_T988649617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t988649617 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableGraph::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t988649617, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t988649617, ___m_Version_1)); }
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
#endif // PLAYABLEGRAPH_T988649617_H
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
#ifndef PLAYABLEHANDLE_T2430779974_H
#define PLAYABLEHANDLE_T2430779974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t2430779974 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t2430779974, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t2430779974, ___m_Version_1)); }
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
#endif // PLAYABLEHANDLE_T2430779974_H
#ifndef CONTROLLERCOLLIDERHIT_T226174367_H
#define CONTROLLERCOLLIDERHIT_T226174367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ControllerColliderHit
struct  ControllerColliderHit_t226174367  : public RuntimeObject
{
public:
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t1418507179 * ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t4287738085 * ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t2349381726  ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t2349381726  ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t2349381726  ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;

public:
	inline static int32_t get_offset_of_m_Controller_0() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t226174367, ___m_Controller_0)); }
	inline CharacterController_t1418507179 * get_m_Controller_0() const { return ___m_Controller_0; }
	inline CharacterController_t1418507179 ** get_address_of_m_Controller_0() { return &___m_Controller_0; }
	inline void set_m_Controller_0(CharacterController_t1418507179 * value)
	{
		___m_Controller_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Controller_0), value);
	}

	inline static int32_t get_offset_of_m_Collider_1() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t226174367, ___m_Collider_1)); }
	inline Collider_t4287738085 * get_m_Collider_1() const { return ___m_Collider_1; }
	inline Collider_t4287738085 ** get_address_of_m_Collider_1() { return &___m_Collider_1; }
	inline void set_m_Collider_1(Collider_t4287738085 * value)
	{
		___m_Collider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_1), value);
	}

	inline static int32_t get_offset_of_m_Point_2() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t226174367, ___m_Point_2)); }
	inline Vector3_t2349381726  get_m_Point_2() const { return ___m_Point_2; }
	inline Vector3_t2349381726 * get_address_of_m_Point_2() { return &___m_Point_2; }
	inline void set_m_Point_2(Vector3_t2349381726  value)
	{
		___m_Point_2 = value;
	}

	inline static int32_t get_offset_of_m_Normal_3() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t226174367, ___m_Normal_3)); }
	inline Vector3_t2349381726  get_m_Normal_3() const { return ___m_Normal_3; }
	inline Vector3_t2349381726 * get_address_of_m_Normal_3() { return &___m_Normal_3; }
	inline void set_m_Normal_3(Vector3_t2349381726  value)
	{
		___m_Normal_3 = value;
	}

	inline static int32_t get_offset_of_m_MoveDirection_4() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t226174367, ___m_MoveDirection_4)); }
	inline Vector3_t2349381726  get_m_MoveDirection_4() const { return ___m_MoveDirection_4; }
	inline Vector3_t2349381726 * get_address_of_m_MoveDirection_4() { return &___m_MoveDirection_4; }
	inline void set_m_MoveDirection_4(Vector3_t2349381726  value)
	{
		___m_MoveDirection_4 = value;
	}

	inline static int32_t get_offset_of_m_MoveLength_5() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t226174367, ___m_MoveLength_5)); }
	inline float get_m_MoveLength_5() const { return ___m_MoveLength_5; }
	inline float* get_address_of_m_MoveLength_5() { return &___m_MoveLength_5; }
	inline void set_m_MoveLength_5(float value)
	{
		___m_MoveLength_5 = value;
	}

	inline static int32_t get_offset_of_m_Push_6() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t226174367, ___m_Push_6)); }
	inline int32_t get_m_Push_6() const { return ___m_Push_6; }
	inline int32_t* get_address_of_m_Push_6() { return &___m_Push_6; }
	inline void set_m_Push_6(int32_t value)
	{
		___m_Push_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t226174367_marshaled_pinvoke
{
	CharacterController_t1418507179 * ___m_Controller_0;
	Collider_t4287738085 * ___m_Collider_1;
	Vector3_t2349381726  ___m_Point_2;
	Vector3_t2349381726  ___m_Normal_3;
	Vector3_t2349381726  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t226174367_marshaled_com
{
	CharacterController_t1418507179 * ___m_Controller_0;
	Collider_t4287738085 * ___m_Collider_1;
	Vector3_t2349381726  ___m_Point_2;
	Vector3_t2349381726  ___m_Normal_3;
	Vector3_t2349381726  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
#endif // CONTROLLERCOLLIDERHIT_T226174367_H
#ifndef COLLISION_T2697892477_H
#define COLLISION_T2697892477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t2697892477  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t2349381726  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t2349381726  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t2491674829 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t4287738085 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t648492152* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t2697892477, ___m_Impulse_0)); }
	inline Vector3_t2349381726  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t2349381726 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t2349381726  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t2697892477, ___m_RelativeVelocity_1)); }
	inline Vector3_t2349381726  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t2349381726 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t2349381726  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t2697892477, ___m_Rigidbody_2)); }
	inline Rigidbody_t2491674829 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t2491674829 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t2491674829 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_2), value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t2697892477, ___m_Collider_3)); }
	inline Collider_t4287738085 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t4287738085 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t4287738085 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_3), value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t2697892477, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t648492152* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t648492152** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t648492152* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t2697892477_marshaled_pinvoke
{
	Vector3_t2349381726  ___m_Impulse_0;
	Vector3_t2349381726  ___m_RelativeVelocity_1;
	Rigidbody_t2491674829 * ___m_Rigidbody_2;
	Collider_t4287738085 * ___m_Collider_3;
	ContactPoint_t2107093397 * ___m_Contacts_4;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t2697892477_marshaled_com
{
	Vector3_t2349381726  ___m_Impulse_0;
	Vector3_t2349381726  ___m_RelativeVelocity_1;
	Rigidbody_t2491674829 * ___m_Rigidbody_2;
	Collider_t4287738085 * ___m_Collider_3;
	ContactPoint_t2107093397 * ___m_Contacts_4;
};
#endif // COLLISION_T2697892477_H
#ifndef QUERYTRIGGERINTERACTION_T1782477281_H
#define QUERYTRIGGERINTERACTION_T1782477281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.QueryTriggerInteraction
struct  QueryTriggerInteraction_t1782477281 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t1782477281, ___value___1)); }
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
#endif // QUERYTRIGGERINTERACTION_T1782477281_H
#ifndef CONTACTPOINT_T2107093397_H
#define CONTACTPOINT_T2107093397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint
struct  ContactPoint_t2107093397 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t2349381726  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t2349381726  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_t2107093397, ___m_Point_0)); }
	inline Vector3_t2349381726  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t2349381726 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t2349381726  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_t2107093397, ___m_Normal_1)); }
	inline Vector3_t2349381726  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t2349381726 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t2349381726  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_t2107093397, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_t2107093397, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_t2107093397, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT_T2107093397_H
#ifndef PLAYSTATE_T1873363665_H
#define PLAYSTATE_T1873363665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayState
struct  PlayState_t1873363665 
{
public:
	// System.Int32 UnityEngine.Playables.PlayState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlayState_t1873363665, ___value___1)); }
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
#endif // PLAYSTATE_T1873363665_H
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
#ifndef SCRIPTABLERENDERCONTEXT_T480992141_H
#define SCRIPTABLERENDERCONTEXT_T480992141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_t480992141 
{
public:
	// System.IntPtr UnityEngine.Experimental.Rendering.ScriptableRenderContext::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t480992141, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTABLERENDERCONTEXT_T480992141_H
#ifndef HIDEFLAGS_T2974394345_H
#define HIDEFLAGS_T2974394345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t2974394345 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t2974394345, ___value___1)); }
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
#endif // HIDEFLAGS_T2974394345_H
#ifndef ANIMATIONCURVE_T810054146_H
#define ANIMATIONCURVE_T810054146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t810054146  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t810054146, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t810054146_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t810054146_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T810054146_H
#ifndef BOUNDS_T2040275591_H
#define BOUNDS_T2040275591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2040275591 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t2349381726  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t2349381726  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2040275591, ___m_Center_0)); }
	inline Vector3_t2349381726  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t2349381726 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t2349381726  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2040275591, ___m_Extents_1)); }
	inline Vector3_t2349381726  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t2349381726 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t2349381726  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2040275591_H
#ifndef GRADIENT_T3197796022_H
#define GRADIENT_T3197796022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t3197796022  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t3197796022, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t3197796022_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t3197796022_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T3197796022_H
#ifndef DISPLAY_T644417875_H
#define DISPLAY_T644417875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display
struct  Display_t644417875  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t644417875, ___nativeDisplay_0)); }
	inline IntPtr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline IntPtr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(IntPtr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t644417875_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t2194636802* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t644417875 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t1399422997 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t644417875_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t2194636802* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t2194636802** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t2194636802* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((&___displays_1), value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t644417875_StaticFields, ____mainDisplay_2)); }
	inline Display_t644417875 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t644417875 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t644417875 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&____mainDisplay_2), value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t644417875_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_t1399422997 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_t1399422997 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_t1399422997 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDisplaysUpdated_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T644417875_H
#ifndef CULLINGGROUP_T1195177474_H
#define CULLINGGROUP_T1195177474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup
struct  CullingGroup_t1195177474  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.CullingGroup::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.CullingGroup/StateChanged UnityEngine.CullingGroup::m_OnStateChanged
	StateChanged_t1770141939 * ___m_OnStateChanged_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CullingGroup_t1195177474, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_OnStateChanged_1() { return static_cast<int32_t>(offsetof(CullingGroup_t1195177474, ___m_OnStateChanged_1)); }
	inline StateChanged_t1770141939 * get_m_OnStateChanged_1() const { return ___m_OnStateChanged_1; }
	inline StateChanged_t1770141939 ** get_address_of_m_OnStateChanged_1() { return &___m_OnStateChanged_1; }
	inline void set_m_OnStateChanged_1(StateChanged_t1770141939 * value)
	{
		___m_OnStateChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnStateChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CullingGroup
struct CullingGroup_t1195177474_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
// Native definition for COM marshalling of UnityEngine.CullingGroup
struct CullingGroup_t1195177474_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
#endif // CULLINGGROUP_T1195177474_H
#ifndef LOADSCENEMODE_T1235844343_H
#define LOADSCENEMODE_T1235844343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t1235844343 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadSceneMode_t1235844343, ___value___1)); }
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
#endif // LOADSCENEMODE_T1235844343_H
#ifndef RESOURCEREQUEST_T4266145488_H
#define RESOURCEREQUEST_T4266145488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ResourceRequest
struct  ResourceRequest_t4266145488  : public AsyncOperation_t3156960784
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_1;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_2;

public:
	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(ResourceRequest_t4266145488, ___m_Path_1)); }
	inline String_t* get_m_Path_1() const { return ___m_Path_1; }
	inline String_t** get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(String_t* value)
	{
		___m_Path_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_1), value);
	}

	inline static int32_t get_offset_of_m_Type_2() { return static_cast<int32_t>(offsetof(ResourceRequest_t4266145488, ___m_Type_2)); }
	inline Type_t * get_m_Type_2() const { return ___m_Type_2; }
	inline Type_t ** get_address_of_m_Type_2() { return &___m_Type_2; }
	inline void set_m_Type_2(Type_t * value)
	{
		___m_Type_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t4266145488_marshaled_pinvoke : public AsyncOperation_t3156960784_marshaled_pinvoke
{
	char* ___m_Path_1;
	Type_t * ___m_Type_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t4266145488_marshaled_com : public AsyncOperation_t3156960784_marshaled_com
{
	Il2CppChar* ___m_Path_1;
	Type_t * ___m_Type_2;
};
#endif // RESOURCEREQUEST_T4266145488_H
#ifndef MESH_T3570230259_H
#define MESH_T3570230259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3570230259  : public Object_t1620542549
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3570230259_H
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
#ifndef GAMEOBJECT_T3921449449_H
#define GAMEOBJECT_T3921449449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t3921449449  : public Object_t1620542549
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T3921449449_H
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
#ifndef PLAYABLE_T514186957_H
#define PLAYABLE_T514186957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t514186957 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t2430779974  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t514186957, ___m_Handle_0)); }
	inline PlayableHandle_t2430779974  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2430779974 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2430779974  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t514186957_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t514186957  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t514186957_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t514186957  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t514186957 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t514186957  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T514186957_H
#ifndef PLAYABLEOUTPUT_T1075971196_H
#define PLAYABLEOUTPUT_T1075971196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t1075971196 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t4259131898  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t1075971196, ___m_Handle_0)); }
	inline PlayableOutputHandle_t4259131898  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t4259131898 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t4259131898  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t1075971196_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t1075971196  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t1075971196_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t1075971196  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t1075971196 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t1075971196  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUT_T1075971196_H
#ifndef TEXTURE_T249942752_H
#define TEXTURE_T249942752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t249942752  : public Object_t1620542549
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T249942752_H
#ifndef PHYSICMATERIAL_T401735288_H
#define PHYSICMATERIAL_T401735288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PhysicMaterial
struct  PhysicMaterial_t401735288  : public Object_t1620542549
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICMATERIAL_T401735288_H
#ifndef AUDIOCLIPPLAYABLE_T3555883501_H
#define AUDIOCLIPPLAYABLE_T3555883501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioClipPlayable
struct  AudioClipPlayable_t3555883501 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t2430779974  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioClipPlayable_t3555883501, ___m_Handle_0)); }
	inline PlayableHandle_t2430779974  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2430779974 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2430779974  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIPPLAYABLE_T3555883501_H
#ifndef AUDIOCLIP_T2303641896_H
#define AUDIOCLIP_T2303641896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t2303641896  : public Object_t1620542549
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3415377758 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t3869666800 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t2303641896, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t3415377758 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t3415377758 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t3415377758 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t2303641896, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t3869666800 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t3869666800 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t3869666800 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T2303641896_H
#ifndef SPRITEATLAS_T2460370103_H
#define SPRITEATLAS_T2460370103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlas
struct  SpriteAtlas_t2460370103  : public Object_t1620542549
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLAS_T2460370103_H
#ifndef AUDIOPLAYABLEOUTPUT_T2173928017_H
#define AUDIOPLAYABLEOUTPUT_T2173928017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioPlayableOutput
struct  AudioPlayableOutput_t2173928017 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_t4259131898  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioPlayableOutput_t2173928017, ___m_Handle_0)); }
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
#endif // AUDIOPLAYABLEOUTPUT_T2173928017_H
#ifndef AUDIOMIXERPLAYABLE_T4246198824_H
#define AUDIOMIXERPLAYABLE_T4246198824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixerPlayable
struct  AudioMixerPlayable_t4246198824 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t2430779974  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioMixerPlayable_t4246198824, ___m_Handle_0)); }
	inline PlayableHandle_t2430779974  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2430779974 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2430779974  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXERPLAYABLE_T4246198824_H
#ifndef PCMREADERCALLBACK_T3415377758_H
#define PCMREADERCALLBACK_T3415377758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMReaderCallback
struct  PCMReaderCallback_t3415377758  : public MulticastDelegate_t3137754623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMREADERCALLBACK_T3415377758_H
#ifndef AUDIOCONFIGURATIONCHANGEHANDLER_T2941058055_H
#define AUDIOCONFIGURATIONCHANGEHANDLER_T2941058055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct  AudioConfigurationChangeHandler_t2941058055  : public MulticastDelegate_t3137754623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCONFIGURATIONCHANGEHANDLER_T2941058055_H
#ifndef TRANSFORM_T259628202_H
#define TRANSFORM_T259628202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t259628202  : public Component_t2262572850
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T259628202_H
#ifndef PCMSETPOSITIONCALLBACK_T3869666800_H
#define PCMSETPOSITIONCALLBACK_T3869666800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMSetPositionCallback
struct  PCMSetPositionCallback_t3869666800  : public MulticastDelegate_t3137754623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMSETPOSITIONCALLBACK_T3869666800_H
#ifndef DISPLAYSUPDATEDDELEGATE_T1399422997_H
#define DISPLAYSUPDATEDDELEGATE_T1399422997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display/DisplaysUpdatedDelegate
struct  DisplaysUpdatedDelegate_t1399422997  : public MulticastDelegate_t3137754623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYSUPDATEDDELEGATE_T1399422997_H
#ifndef STATECHANGED_T1770141939_H
#define STATECHANGED_T1770141939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup/StateChanged
struct  StateChanged_t1770141939  : public MulticastDelegate_t3137754623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATECHANGED_T1770141939_H
#ifndef COLLIDER_T4287738085_H
#define COLLIDER_T4287738085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t4287738085  : public Component_t2262572850
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T4287738085_H
#ifndef RIGIDBODY_T2491674829_H
#define RIGIDBODY_T2491674829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t2491674829  : public Component_t2262572850
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T2491674829_H
#ifndef UPDATEDEVENTHANDLER_T2118213074_H
#define UPDATEDEVENTHANDLER_T2118213074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings/UpdatedEventHandler
struct  UpdatedEventHandler_t2118213074  : public MulticastDelegate_t3137754623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEDEVENTHANDLER_T2118213074_H
#ifndef REQUESTATLASCALLBACK_T1202206050_H
#define REQUESTATLASCALLBACK_T1202206050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct  RequestAtlasCallback_t1202206050  : public MulticastDelegate_t3137754623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTATLASCALLBACK_T1202206050_H
#ifndef REAPPLYDRIVENPROPERTIES_T2167780484_H
#define REAPPLYDRIVENPROPERTIES_T2167780484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/ReapplyDrivenProperties
struct  ReapplyDrivenProperties_t2167780484  : public MulticastDelegate_t3137754623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REAPPLYDRIVENPROPERTIES_T2167780484_H
#ifndef RENDERTEXTURE_T4230730810_H
#define RENDERTEXTURE_T4230730810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t4230730810  : public Texture_t249942752
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T4230730810_H
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
#ifndef CHARACTERCONTROLLER_T1418507179_H
#define CHARACTERCONTROLLER_T1418507179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterController
struct  CharacterController_t1418507179  : public Collider_t4287738085
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCONTROLLER_T1418507179_H
#ifndef CAPSULECOLLIDER_T2779419971_H
#define CAPSULECOLLIDER_T2779419971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CapsuleCollider
struct  CapsuleCollider_t2779419971  : public Collider_t4287738085
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPSULECOLLIDER_T2779419971_H
#ifndef GUIELEMENT_T2485470008_H
#define GUIELEMENT_T2485470008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t2485470008  : public Behaviour_t3664298688
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T2485470008_H
#ifndef GUILAYER_T2843691270_H
#define GUILAYER_T2843691270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayer
struct  GUILayer_t2843691270  : public Behaviour_t3664298688
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYER_T2843691270_H
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
#ifndef AUDIOSOURCE_T762626051_H
#define AUDIOSOURCE_T762626051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t762626051  : public Behaviour_t3664298688
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T762626051_H
#ifndef BOXCOLLIDER_T2940475791_H
#define BOXCOLLIDER_T2940475791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t2940475791  : public Collider_t4287738085
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T2940475791_H
#ifndef RECTTRANSFORM_T2793294648_H
#define RECTTRANSFORM_T2793294648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t2793294648  : public Transform_t259628202
{
public:

public:
};

struct RectTransform_t2793294648_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t2167780484 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t2793294648_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t2167780484 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t2167780484 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t2167780484 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T2793294648_H
#ifndef SPHERECOLLIDER_T274917986_H
#define SPHERECOLLIDER_T274917986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SphereCollider
struct  SphereCollider_t274917986  : public Collider_t4287738085
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPHERECOLLIDER_T274917986_H
#ifndef MESHCOLLIDER_T2927926691_H
#define MESHCOLLIDER_T2927926691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t2927926691  : public Collider_t4287738085
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T2927926691_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1200 = { sizeof (CullingGroupEvent_t3421790847)+ sizeof (RuntimeObject), sizeof(CullingGroupEvent_t3421790847 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1200[3] = 
{
	CullingGroupEvent_t3421790847::get_offset_of_m_Index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t3421790847::get_offset_of_m_PrevState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t3421790847::get_offset_of_m_ThisState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1201 = { sizeof (CullingGroup_t1195177474), sizeof(CullingGroup_t1195177474_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1201[2] = 
{
	CullingGroup_t1195177474::get_offset_of_m_Ptr_0(),
	CullingGroup_t1195177474::get_offset_of_m_OnStateChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1202 = { sizeof (StateChanged_t1770141939), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1203 = { sizeof (DebugLogHandler_t4093626886), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1204 = { sizeof (Debug_t3391067356), -1, sizeof(Debug_t3391067356_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1204[1] = 
{
	Debug_t3391067356_StaticFields::get_offset_of_s_Logger_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1205 = { sizeof (Display_t644417875), -1, sizeof(Display_t644417875_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1205[4] = 
{
	Display_t644417875::get_offset_of_nativeDisplay_0(),
	Display_t644417875_StaticFields::get_offset_of_displays_1(),
	Display_t644417875_StaticFields::get_offset_of__mainDisplay_2(),
	Display_t644417875_StaticFields::get_offset_of_onDisplaysUpdated_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1206 = { sizeof (DisplaysUpdatedDelegate_t1399422997), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1207 = { sizeof (GameObject_t3921449449), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1208 = { sizeof (Gradient_t3197796022), sizeof(Gradient_t3197796022_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1208[1] = 
{
	Gradient_t3197796022::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1209 = { sizeof (GUIElement_t2485470008), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1210 = { sizeof (GUILayer_t2843691270), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1211 = { sizeof (Gyroscope_t2550068312), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1212 = { sizeof (Input_t3139545311), -1, sizeof(Input_t3139545311_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1212[1] = 
{
	Input_t3139545311_StaticFields::get_offset_of_m_MainGyro_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1213 = { sizeof (Vector3_t2349381726)+ sizeof (RuntimeObject), sizeof(Vector3_t2349381726 ), sizeof(Vector3_t2349381726_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1213[13] = 
{
	Vector3_t2349381726::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t2349381726::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t2349381726::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t2349381726_StaticFields::get_offset_of_zeroVector_3(),
	Vector3_t2349381726_StaticFields::get_offset_of_oneVector_4(),
	Vector3_t2349381726_StaticFields::get_offset_of_upVector_5(),
	Vector3_t2349381726_StaticFields::get_offset_of_downVector_6(),
	Vector3_t2349381726_StaticFields::get_offset_of_leftVector_7(),
	Vector3_t2349381726_StaticFields::get_offset_of_rightVector_8(),
	Vector3_t2349381726_StaticFields::get_offset_of_forwardVector_9(),
	Vector3_t2349381726_StaticFields::get_offset_of_backVector_10(),
	Vector3_t2349381726_StaticFields::get_offset_of_positiveInfinityVector_11(),
	Vector3_t2349381726_StaticFields::get_offset_of_negativeInfinityVector_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1214 = { sizeof (Quaternion_t3199073233)+ sizeof (RuntimeObject), sizeof(Quaternion_t3199073233 ), sizeof(Quaternion_t3199073233_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1214[5] = 
{
	Quaternion_t3199073233::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t3199073233::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t3199073233::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t3199073233::get_offset_of_w_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t3199073233_StaticFields::get_offset_of_identityQuaternion_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1215 = { sizeof (Bounds_t2040275591)+ sizeof (RuntimeObject), sizeof(Bounds_t2040275591 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1215[2] = 
{
	Bounds_t2040275591::get_offset_of_m_Center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Bounds_t2040275591::get_offset_of_m_Extents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1216 = { sizeof (Mathf_t3727329693)+ sizeof (RuntimeObject), sizeof(Mathf_t3727329693 ), sizeof(Mathf_t3727329693_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1216[1] = 
{
	Mathf_t3727329693_StaticFields::get_offset_of_Epsilon_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1217 = { sizeof (Keyframe_t2850792274)+ sizeof (RuntimeObject), sizeof(Keyframe_t2850792274 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1217[4] = 
{
	Keyframe_t2850792274::get_offset_of_m_Time_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t2850792274::get_offset_of_m_Value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t2850792274::get_offset_of_m_InTangent_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t2850792274::get_offset_of_m_OutTangent_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1218 = { sizeof (AnimationCurve_t810054146), sizeof(AnimationCurve_t810054146_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1218[1] = 
{
	AnimationCurve_t810054146::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1219 = { sizeof (Mesh_t3570230259), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1220 = { sizeof (MonoBehaviour_t1596581039), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1221 = { sizeof (ResourceRequest_t4266145488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1221[2] = 
{
	ResourceRequest_t4266145488::get_offset_of_m_Path_1(),
	ResourceRequest_t4266145488::get_offset_of_m_Type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1222 = { sizeof (Resources_t2348649577), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1223 = { sizeof (Texture_t249942752), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1224 = { sizeof (RenderTexture_t4230730810), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1225 = { sizeof (Time_t3200159200), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1226 = { sizeof (HideFlags_t2974394345)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1226[10] = 
{
	HideFlags_t2974394345::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1227 = { sizeof (Object_t1620542549), sizeof(Object_t1620542549_marshaled_pinvoke), sizeof(Object_t1620542549_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1227[2] = 
{
	Object_t1620542549::get_offset_of_m_CachedPtr_0(),
	Object_t1620542549_StaticFields::get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1228 = { sizeof (YieldInstruction_t3250054451), sizeof(YieldInstruction_t3250054451_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1229 = { sizeof (PlayState_t1873363665)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1229[3] = 
{
	PlayState_t1873363665::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1230 = { sizeof (PlayableHandle_t2430779974)+ sizeof (RuntimeObject), sizeof(PlayableHandle_t2430779974 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1230[2] = 
{
	PlayableHandle_t2430779974::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableHandle_t2430779974::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1231 = { sizeof (Playable_t514186957)+ sizeof (RuntimeObject), sizeof(Playable_t514186957 ), sizeof(Playable_t514186957_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1231[2] = 
{
	Playable_t514186957::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Playable_t514186957_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1232 = { sizeof (DataStreamType_t2000581714)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1232[5] = 
{
	DataStreamType_t2000581714::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1233 = { sizeof (PlayableGraph_t988649617)+ sizeof (RuntimeObject), sizeof(PlayableGraph_t988649617 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1233[2] = 
{
	PlayableGraph_t988649617::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableGraph_t988649617::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1234 = { sizeof (PlayableOutputHandle_t4259131898)+ sizeof (RuntimeObject), sizeof(PlayableOutputHandle_t4259131898 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1234[2] = 
{
	PlayableOutputHandle_t4259131898::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutputHandle_t4259131898::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1235 = { sizeof (PlayableOutput_t1075971196)+ sizeof (RuntimeObject), sizeof(PlayableOutput_t1075971196 ), sizeof(PlayableOutput_t1075971196_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1235[2] = 
{
	PlayableOutput_t1075971196::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutput_t1075971196_StaticFields::get_offset_of_m_NullPlayableOutput_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1236 = { sizeof (Scene_t2319138534)+ sizeof (RuntimeObject), sizeof(Scene_t2319138534 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1236[1] = 
{
	Scene_t2319138534::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1237 = { sizeof (LoadSceneMode_t1235844343)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1237[3] = 
{
	LoadSceneMode_t1235844343::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1238 = { sizeof (SceneManager_t120967433), -1, sizeof(SceneManager_t120967433_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1238[3] = 
{
	SceneManager_t120967433_StaticFields::get_offset_of_sceneLoaded_0(),
	SceneManager_t120967433_StaticFields::get_offset_of_sceneUnloaded_1(),
	SceneManager_t120967433_StaticFields::get_offset_of_activeSceneChanged_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1239 = { sizeof (ScriptableRenderContext_t480992141)+ sizeof (RuntimeObject), sizeof(ScriptableRenderContext_t480992141 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1239[1] = 
{
	ScriptableRenderContext_t480992141::get_offset_of_m_Ptr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1240 = { sizeof (Transform_t259628202), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1241 = { sizeof (Enumerator_t1816009183), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1241[2] = 
{
	Enumerator_t1816009183::get_offset_of_outer_0(),
	Enumerator_t1816009183::get_offset_of_currentIndex_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1242 = { sizeof (RectTransform_t2793294648), -1, sizeof(RectTransform_t2793294648_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1242[1] = 
{
	RectTransform_t2793294648_StaticFields::get_offset_of_reapplyDrivenProperties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1243 = { sizeof (ReapplyDrivenProperties_t2167780484), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1244 = { sizeof (SpriteAtlasManager_t3728022972), -1, sizeof(SpriteAtlasManager_t3728022972_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1244[2] = 
{
	SpriteAtlasManager_t3728022972_StaticFields::get_offset_of_atlasRequested_0(),
	SpriteAtlasManager_t3728022972_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1245 = { sizeof (RequestAtlasCallback_t1202206050), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1246 = { sizeof (SpriteAtlas_t2460370103), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1247 = { sizeof (ControllerColliderHit_t226174367), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1247[7] = 
{
	ControllerColliderHit_t226174367::get_offset_of_m_Controller_0(),
	ControllerColliderHit_t226174367::get_offset_of_m_Collider_1(),
	ControllerColliderHit_t226174367::get_offset_of_m_Point_2(),
	ControllerColliderHit_t226174367::get_offset_of_m_Normal_3(),
	ControllerColliderHit_t226174367::get_offset_of_m_MoveDirection_4(),
	ControllerColliderHit_t226174367::get_offset_of_m_MoveLength_5(),
	ControllerColliderHit_t226174367::get_offset_of_m_Push_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1248 = { sizeof (Collision_t2697892477), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1248[5] = 
{
	Collision_t2697892477::get_offset_of_m_Impulse_0(),
	Collision_t2697892477::get_offset_of_m_RelativeVelocity_1(),
	Collision_t2697892477::get_offset_of_m_Rigidbody_2(),
	Collision_t2697892477::get_offset_of_m_Collider_3(),
	Collision_t2697892477::get_offset_of_m_Contacts_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1249 = { sizeof (QueryTriggerInteraction_t1782477281)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1249[4] = 
{
	QueryTriggerInteraction_t1782477281::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1250 = { sizeof (Physics_t2173356494), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1251 = { sizeof (ContactPoint_t2107093397)+ sizeof (RuntimeObject), sizeof(ContactPoint_t2107093397 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1251[5] = 
{
	ContactPoint_t2107093397::get_offset_of_m_Point_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t2107093397::get_offset_of_m_Normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t2107093397::get_offset_of_m_ThisColliderInstanceID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t2107093397::get_offset_of_m_OtherColliderInstanceID_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t2107093397::get_offset_of_m_Separation_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1252 = { sizeof (Rigidbody_t2491674829), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1253 = { sizeof (Collider_t4287738085), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1254 = { sizeof (BoxCollider_t2940475791), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1255 = { sizeof (SphereCollider_t274917986), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1256 = { sizeof (MeshCollider_t2927926691), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1257 = { sizeof (CapsuleCollider_t2779419971), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1258 = { sizeof (RaycastHit_t803534334)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1258[6] = 
{
	RaycastHit_t803534334::get_offset_of_m_Point_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t803534334::get_offset_of_m_Normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t803534334::get_offset_of_m_FaceID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t803534334::get_offset_of_m_Distance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t803534334::get_offset_of_m_UV_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t803534334::get_offset_of_m_Collider_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1259 = { sizeof (PhysicMaterial_t401735288), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1260 = { sizeof (CharacterController_t1418507179), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1261 = { sizeof (AudioPlayableOutput_t2173928017)+ sizeof (RuntimeObject), sizeof(AudioPlayableOutput_t2173928017 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1261[1] = 
{
	AudioPlayableOutput_t2173928017::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1262 = { sizeof (AudioClipPlayable_t3555883501)+ sizeof (RuntimeObject), sizeof(AudioClipPlayable_t3555883501 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1262[1] = 
{
	AudioClipPlayable_t3555883501::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1263 = { sizeof (AudioMixerPlayable_t4246198824)+ sizeof (RuntimeObject), sizeof(AudioMixerPlayable_t4246198824 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1263[1] = 
{
	AudioMixerPlayable_t4246198824::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1264 = { sizeof (AudioSettings_t2721050524), -1, sizeof(AudioSettings_t2721050524_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1264[1] = 
{
	AudioSettings_t2721050524_StaticFields::get_offset_of_OnAudioConfigurationChanged_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1265 = { sizeof (AudioConfigurationChangeHandler_t2941058055), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1266 = { sizeof (AudioClip_t2303641896), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1266[2] = 
{
	AudioClip_t2303641896::get_offset_of_m_PCMReaderCallback_2(),
	AudioClip_t2303641896::get_offset_of_m_PCMSetPositionCallback_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1267 = { sizeof (PCMReaderCallback_t3415377758), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1268 = { sizeof (PCMSetPositionCallback_t3869666800), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1269 = { sizeof (AudioSource_t762626051), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1270 = { sizeof (AudioPlayableGraphExtensions_t1488270305), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1271 = { sizeof (WebRequestUtils_t4282249538), -1, sizeof(WebRequestUtils_t4282249538_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1271[1] = 
{
	WebRequestUtils_t4282249538_StaticFields::get_offset_of_domainRegex_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1272 = { sizeof (RemoteSettings_t2548211685), -1, sizeof(RemoteSettings_t2548211685_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1272[1] = 
{
	RemoteSettings_t2548211685_StaticFields::get_offset_of_Updated_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1273 = { sizeof (UpdatedEventHandler_t2118213074), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1274 = { sizeof (AttributeHelperEngine_t4144772337), -1, sizeof(AttributeHelperEngine_t4144772337_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1274[3] = 
{
	AttributeHelperEngine_t4144772337_StaticFields::get_offset_of__disallowMultipleComponentArray_0(),
	AttributeHelperEngine_t4144772337_StaticFields::get_offset_of__executeInEditModeArray_1(),
	AttributeHelperEngine_t4144772337_StaticFields::get_offset_of__requireComponentArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1275 = { sizeof (DisallowMultipleComponent_t2802569860), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1276 = { sizeof (RequireComponent_t1698787203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1276[3] = 
{
	RequireComponent_t1698787203::get_offset_of_m_Type0_0(),
	RequireComponent_t1698787203::get_offset_of_m_Type1_1(),
	RequireComponent_t1698787203::get_offset_of_m_Type2_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1277 = { sizeof (ContextMenu_t3667609747), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1277[3] = 
{
	ContextMenu_t3667609747::get_offset_of_menuItem_0(),
	ContextMenu_t3667609747::get_offset_of_validate_1(),
	ContextMenu_t3667609747::get_offset_of_priority_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1278 = { sizeof (ExecuteInEditMode_t707126609), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1279 = { sizeof (DefaultExecutionOrder_t2322641541), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1279[1] = 
{
	DefaultExecutionOrder_t2322641541::get_offset_of_U3CorderU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1280 = { sizeof (NativeClassAttribute_t1616309980), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1280[1] = 
{
	NativeClassAttribute_t1616309980::get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1281 = { sizeof (AssemblyIsEditorAssembly_t4183523076), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1282 = { sizeof (WritableAttribute_t2883042283), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1283 = { sizeof (GeneratedByOldBindingsGeneratorAttribute_t3226794001), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1284 = { sizeof (SendMessageOptions_t3643670493)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1284[3] = 
{
	SendMessageOptions_t3643670493::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1285 = { sizeof (Space_t1978934573)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1285[3] = 
{
	Space_t1978934573::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1286 = { sizeof (LogType_t254095981)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1286[6] = 
{
	LogType_t254095981::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1287 = { sizeof (ClassLibraryInitializer_t1448733779), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1288 = { sizeof (SetupCoroutine_t3287504771), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1289 = { sizeof (CameraClearFlags_t882771006)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1289[6] = 
{
	CameraClearFlags_t882771006::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1290 = { sizeof (MathfInternal_t1326958317)+ sizeof (RuntimeObject), sizeof(MathfInternal_t1326958317 ), sizeof(MathfInternal_t1326958317_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1290[3] = 
{
	MathfInternal_t1326958317_StaticFields::get_offset_of_FloatMinNormal_0(),
	MathfInternal_t1326958317_StaticFields::get_offset_of_FloatMinDenormal_1(),
	MathfInternal_t1326958317_StaticFields::get_offset_of_IsFlushToZeroEnabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1291 = { sizeof (SendMouseEvents_t801656530), -1, sizeof(SendMouseEvents_t801656530_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1291[5] = 
{
	SendMouseEvents_t801656530_StaticFields::get_offset_of_s_MouseUsed_0(),
	SendMouseEvents_t801656530_StaticFields::get_offset_of_m_LastHit_1(),
	SendMouseEvents_t801656530_StaticFields::get_offset_of_m_MouseDownHit_2(),
	SendMouseEvents_t801656530_StaticFields::get_offset_of_m_CurrentHit_3(),
	SendMouseEvents_t801656530_StaticFields::get_offset_of_m_Cameras_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1292 = { sizeof (HitInfo_t2611971048)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1292[2] = 
{
	HitInfo_t2611971048::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitInfo_t2611971048::get_offset_of_camera_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1293 = { sizeof (Ray_t3869700495)+ sizeof (RuntimeObject), sizeof(Ray_t3869700495 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1293[2] = 
{
	Ray_t3869700495::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray_t3869700495::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1294 = { sizeof (Rect_t3763860324)+ sizeof (RuntimeObject), sizeof(Rect_t3763860324 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1294[4] = 
{
	Rect_t3763860324::get_offset_of_m_XMin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3763860324::get_offset_of_m_YMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3763860324::get_offset_of_m_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3763860324::get_offset_of_m_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1295 = { sizeof (SerializePrivateVariables_t712758694), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1296 = { sizeof (SerializeField_t1424939273), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1297 = { sizeof (PreferBinarySerialization_t3703623093), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1298 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1299 = { sizeof (StackTraceUtility_t1405714663), -1, sizeof(StackTraceUtility_t1405714663_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1299[1] = 
{
	StackTraceUtility_t1405714663_StaticFields::get_offset_of_projectFolder_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
