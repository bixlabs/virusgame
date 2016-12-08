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

// CameraController
struct CameraController_t3473169601;
// LoopBugMoving
struct LoopBugMoving_t438316414;
// PlayerController
struct PlayerController_t2866526589;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// System.Object
struct Il2CppObject;
// UnityEngine.Collider
struct Collider_t2939674232;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// UnityEngine.Collision
struct Collision_t2494107688;
// Rotator
struct Rotator_t3048826765;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_CameraController3473169601.h"
#include "AssemblyU2DCSharp_CameraController3473169601MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "AssemblyU2DCSharp_LoopBugMoving438316414.h"
#include "AssemblyU2DCSharp_LoopBugMoving438316414MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Boolean476798718.h"
#include "AssemblyU2DCSharp_PlayerController2866526589.h"
#include "AssemblyU2DCSharp_PlayerController2866526589MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "UnityEngine_UnityEngine_Resources2918352667MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Resources2918352667.h"
#include "UnityEngine_UnityEngine_Collision2494107688.h"
#include "UnityEngine_UnityEngine_Collision2494107688MethodDeclarations.h"
#include "mscorlib_System_Int321153838500MethodDeclarations.h"
#include "AssemblyU2DCSharp_Rotator3048826765.h"
#include "AssemblyU2DCSharp_Rotator3048826765MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, method) ((  Rigidbody_t3346577219 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0[] UnityEngine.Resources::FindObjectsOfTypeAll<System.Object>()
extern "C"  ObjectU5BU5D_t1108656482* Resources_FindObjectsOfTypeAll_TisIl2CppObject_m3296764611_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define Resources_FindObjectsOfTypeAll_TisIl2CppObject_m3296764611(__this /* static, unused */, method) ((  ObjectU5BU5D_t1108656482* (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Resources_FindObjectsOfTypeAll_TisIl2CppObject_m3296764611_gshared)(__this /* static, unused */, method)
// !!0[] UnityEngine.Resources::FindObjectsOfTypeAll<UnityEngine.GameObject>()
#define Resources_FindObjectsOfTypeAll_TisGameObject_t3674682005_m1679537941(__this /* static, unused */, method) ((  GameObjectU5BU5D_t2662109048* (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Resources_FindObjectsOfTypeAll_TisIl2CppObject_m3296764611_gshared)(__this /* static, unused */, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraController::.ctor()
extern "C"  void CameraController__ctor_m1305907962 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C"  void CameraController_Start_m253045754 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_2 = __this->get_player_2();
		NullCheck(L_2);
		Transform_t1659122786 * L_3 = GameObject_get_transform_m1278640159(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->set_offset_3(L_5);
		return;
	}
}
// System.Void CameraController::LateUpdate()
extern "C"  void CameraController_LateUpdate_m786793369 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_1 = __this->get_player_2();
		NullCheck(L_1);
		Transform_t1659122786 * L_2 = GameObject_get_transform_m1278640159(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t4282066566  L_3 = Transform_get_position_m2211398607(L_2, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = __this->get_offset_3();
		Vector3_t4282066566  L_5 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m3111394108(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoopBugMoving::.ctor()
extern "C"  void LoopBugMoving__ctor_m1436713389 (LoopBugMoving_t438316414 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoopBugMoving::Start()
extern "C"  void LoopBugMoving_Start_m383851181 (LoopBugMoving_t438316414 * __this, const MethodInfo* method)
{
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_1();
		__this->set_initialX_2(L_2);
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_z_3();
		__this->set_initialZ_3(L_5);
		return;
	}
}
// System.Void LoopBugMoving::Update()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral83766110;
extern Il2CppCodeGenString* _stringLiteral83766111;
extern Il2CppCodeGenString* _stringLiteral83766112;
extern Il2CppCodeGenString* _stringLiteral3811810094;
extern const uint32_t LoopBugMoving_Update_m3315304192_MetadataUsageId;
extern "C"  void LoopBugMoving_Update_m3315304192 (LoopBugMoving_t438316414 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (LoopBugMoving_Update_m3315304192_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t4282066566  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		GameObject_t3674682005 * L_0 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = GameObject_get_tag_m211612200(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_1, _stringLiteral83766110, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_006b;
		}
	}
	{
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t4282066566  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6 = (&V_0)->get_x_1();
		Transform_t1659122786 * L_7 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t4282066566  L_8 = Transform_get_position_m2211398607(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = (&V_1)->get_y_2();
		float L_10 = __this->get_initialZ_3();
		float L_11 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_12 = Mathf_PingPong_m763741129(NULL /*static, unused*/, L_11, (2.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m2926210380(&L_13, L_6, L_9, ((float)((float)L_10+(float)L_12)), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_m3111394108(L_3, L_13, /*hidden argument*/NULL);
		goto IL_0186;
	}

IL_006b:
	{
		GameObject_t3674682005 * L_14 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = GameObject_get_tag_m211612200(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_16 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_15, _stringLiteral83766111, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00d9;
		}
	}
	{
		Transform_t1659122786 * L_17 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_18 = __this->get_initialX_2();
		float L_19 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_20 = Mathf_PingPong_m763741129(NULL /*static, unused*/, L_19, (1.5f), /*hidden argument*/NULL);
		Transform_t1659122786 * L_21 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t4282066566  L_22 = Transform_get_position_m2211398607(L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		float L_23 = (&V_2)->get_y_2();
		float L_24 = __this->get_initialZ_3();
		float L_25 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_26 = Mathf_PingPong_m763741129(NULL /*static, unused*/, L_25, (1.5f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Vector3__ctor_m2926210380(&L_27, ((float)((float)L_18+(float)L_20)), L_23, ((float)((float)L_24+(float)L_26)), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_m3111394108(L_17, L_27, /*hidden argument*/NULL);
		goto IL_0186;
	}

IL_00d9:
	{
		GameObject_t3674682005 * L_28 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		String_t* L_29 = GameObject_get_tag_m211612200(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_29, _stringLiteral83766112, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0147;
		}
	}
	{
		Transform_t1659122786 * L_31 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_32 = __this->get_initialX_2();
		float L_33 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_34 = Mathf_PingPong_m763741129(NULL /*static, unused*/, L_33, (3.0f), /*hidden argument*/NULL);
		Transform_t1659122786 * L_35 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_t4282066566  L_36 = Transform_get_position_m2211398607(L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		float L_37 = (&V_3)->get_y_2();
		float L_38 = __this->get_initialZ_3();
		float L_39 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_40 = Mathf_PingPong_m763741129(NULL /*static, unused*/, L_39, (3.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_41;
		memset(&L_41, 0, sizeof(L_41));
		Vector3__ctor_m2926210380(&L_41, ((float)((float)L_32+(float)L_34)), L_37, ((float)((float)L_38-(float)L_40)), /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_position_m3111394108(L_31, L_41, /*hidden argument*/NULL);
		goto IL_0186;
	}

IL_0147:
	{
		GameObject_t3674682005 * L_42 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		String_t* L_43 = GameObject_get_tag_m211612200(L_42, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_44 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_43, _stringLiteral3811810094, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0186;
		}
	}
	{
		Transform_t1659122786 * L_45 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_46 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_47;
		memset(&L_47, 0, sizeof(L_47));
		Vector3__ctor_m2926210380(&L_47, (0.0f), ((float)((float)L_46*(float)(120.0f))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_Rotate_m637363399(L_45, L_47, /*hidden argument*/NULL);
	}

IL_0186:
	{
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2658519486 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	{
		__this->set_penaltySeconds_2((2.5f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var;
extern const uint32_t PlayerController_Start_m1605657278_MetadataUsageId;
extern "C"  void PlayerController_Start_m1605657278 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m1605657278_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t3346577219 * L_0 = Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var);
		__this->set_rb_6(L_0);
		__this->set_count_7(0);
		PlayerController_SetCountText_m1021738208(__this, /*hidden argument*/NULL);
		Text_t9039225 * L_1 = __this->get_winText_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const uint32_t PlayerController_FixedUpdate_m270852281_MetadataUsageId;
extern "C"  void PlayerController_FixedUpdate_m270852281 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_FixedUpdate_m270852281_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t4282066566  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t4282066566  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		Vector3_t4282066566  L_0 = Input_get_acceleration_m3697865796(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_0;
		float L_1 = (&V_3)->get_x_1();
		V_0 = ((float)((float)L_1*(float)(2.0f)));
		Vector3_t4282066566  L_2 = Input_get_acceleration_m3697865796(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_2;
		float L_3 = (&V_4)->get_y_2();
		V_1 = ((float)((float)L_3*(float)(2.0f)));
		float L_4 = V_0;
		float L_5 = V_1;
		Vector3__ctor_m2926210380((&V_2), L_4, (0.0f), L_5, /*hidden argument*/NULL);
		bool L_6 = __this->get_fatCollision_8();
		if (!L_6)
		{
			goto IL_0095;
		}
	}
	{
		Rigidbody_t3346577219 * L_7 = __this->get_rb_6();
		Vector3_t4282066566  L_8 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody_set_angularVelocity_m3510265645(L_7, L_8, /*hidden argument*/NULL);
		Rigidbody_t3346577219 * L_9 = __this->get_rb_6();
		Vector3_t4282066566  L_10 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody_set_velocity_m799562119(L_9, L_10, /*hidden argument*/NULL);
		float L_11 = __this->get_penaltySeconds_2();
		float L_12 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_penaltySeconds_2(((float)((float)L_11-(float)L_12)));
		float L_13 = __this->get_penaltySeconds_2();
		if ((!(((double)(((double)((double)L_13)))) <= ((double)(0.0)))))
		{
			goto IL_0090;
		}
	}
	{
		__this->set_fatCollision_8((bool)0);
	}

IL_0090:
	{
		goto IL_00c1;
	}

IL_0095:
	{
		__this->set_penaltySeconds_2((2.5f));
		Rigidbody_t3346577219 * L_14 = __this->get_rb_6();
		Vector3_t4282066566  L_15 = V_2;
		float L_16 = __this->get_speed_3();
		Vector3_t4282066566  L_17 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		Vector3_t4282066566  L_18 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_17, (2.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Rigidbody_AddForce_m3682301239(L_14, L_18, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Resources_FindObjectsOfTypeAll_TisGameObject_t3674682005_m1679537941_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1086561018;
extern Il2CppCodeGenString* _stringLiteral2439994602;
extern Il2CppCodeGenString* _stringLiteral70393;
extern Il2CppCodeGenString* _stringLiteral83766110;
extern Il2CppCodeGenString* _stringLiteral83766111;
extern Il2CppCodeGenString* _stringLiteral83766112;
extern Il2CppCodeGenString* _stringLiteral3811810094;
extern const uint32_t PlayerController_OnTriggerEnter_m3392021114_MetadataUsageId;
extern "C"  void PlayerController_OnTriggerEnter_m3392021114 (PlayerController_t2866526589 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnTriggerEnter_m3392021114_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObjectU5BU5D_t2662109048* V_0 = NULL;
	GameObject_t3674682005 * V_1 = NULL;
	GameObjectU5BU5D_t2662109048* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Collider_t2939674232 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t3674682005 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_CompareTag_m3153977471(L_1, _stringLiteral1086561018, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		Collider_t2939674232 * L_3 = ___other0;
		NullCheck(L_3);
		GameObject_t3674682005 * L_4 = Component_get_gameObject_m1170635899(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m3538205401(L_4, (bool)0, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_count_7();
		__this->set_count_7(((int32_t)((int32_t)L_5+(int32_t)1)));
		PlayerController_SetCountText_m1021738208(__this, /*hidden argument*/NULL);
		goto IL_018e;
	}

IL_003a:
	{
		Collider_t2939674232 * L_6 = ___other0;
		NullCheck(L_6);
		GameObject_t3674682005 * L_7 = Component_get_gameObject_m1170635899(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8 = GameObject_CompareTag_m3153977471(L_7, _stringLiteral2439994602, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		Collider_t2939674232 * L_9 = ___other0;
		NullCheck(L_9);
		GameObject_t3674682005 * L_10 = Component_get_gameObject_m1170635899(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m3538205401(L_10, (bool)0, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_count_7();
		__this->set_count_7(((int32_t)((int32_t)L_11+(int32_t)1)));
		PlayerController_SetCountText_m1021738208(__this, /*hidden argument*/NULL);
		goto IL_018e;
	}

IL_0074:
	{
		Collider_t2939674232 * L_12 = ___other0;
		NullCheck(L_12);
		GameObject_t3674682005 * L_13 = Component_get_gameObject_m1170635899(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14 = GameObject_CompareTag_m3153977471(L_13, _stringLiteral70393, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0095;
		}
	}
	{
		__this->set_fatCollision_8((bool)1);
		goto IL_018e;
	}

IL_0095:
	{
		Collider_t2939674232 * L_15 = ___other0;
		NullCheck(L_15);
		GameObject_t3674682005 * L_16 = Component_get_gameObject_m1170635899(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		bool L_17 = GameObject_CompareTag_m3153977471(L_16, _stringLiteral83766110, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00e9;
		}
	}
	{
		Collider_t2939674232 * L_18 = ___other0;
		NullCheck(L_18);
		GameObject_t3674682005 * L_19 = Component_get_gameObject_m1170635899(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_20 = GameObject_CompareTag_m3153977471(L_19, _stringLiteral83766111, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00e9;
		}
	}
	{
		Collider_t2939674232 * L_21 = ___other0;
		NullCheck(L_21);
		GameObject_t3674682005 * L_22 = Component_get_gameObject_m1170635899(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		bool L_23 = GameObject_CompareTag_m3153977471(L_22, _stringLiteral83766112, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00e9;
		}
	}
	{
		Collider_t2939674232 * L_24 = ___other0;
		NullCheck(L_24);
		GameObject_t3674682005 * L_25 = Component_get_gameObject_m1170635899(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		bool L_26 = GameObject_CompareTag_m3153977471(L_25, _stringLiteral3811810094, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_018e;
		}
	}

IL_00e9:
	{
		Transform_t1659122786 * L_27 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_28;
		memset(&L_28, 0, sizeof(L_28));
		Vector3__ctor_m2926210380(&L_28, (0.0f), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_position_m3111394108(L_27, L_28, /*hidden argument*/NULL);
		Rigidbody_t3346577219 * L_29 = __this->get_rb_6();
		Vector3_t4282066566  L_30 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		Rigidbody_set_angularVelocity_m3510265645(L_29, L_30, /*hidden argument*/NULL);
		Rigidbody_t3346577219 * L_31 = __this->get_rb_6();
		Vector3_t4282066566  L_32 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_31);
		Rigidbody_set_velocity_m799562119(L_31, L_32, /*hidden argument*/NULL);
		__this->set_fatCollision_8((bool)0);
		__this->set_penaltySeconds_2((2.5f));
		GameObjectU5BU5D_t2662109048* L_33 = Resources_FindObjectsOfTypeAll_TisGameObject_t3674682005_m1679537941(NULL /*static, unused*/, /*hidden argument*/Resources_FindObjectsOfTypeAll_TisGameObject_t3674682005_m1679537941_MethodInfo_var);
		V_0 = L_33;
		GameObjectU5BU5D_t2662109048* L_34 = V_0;
		V_2 = L_34;
		V_3 = 0;
		goto IL_0185;
	}

IL_0149:
	{
		GameObjectU5BU5D_t2662109048* L_35 = V_2;
		int32_t L_36 = V_3;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		int32_t L_37 = L_36;
		GameObject_t3674682005 * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_1 = L_38;
		GameObject_t3674682005 * L_39 = V_1;
		NullCheck(L_39);
		bool L_40 = GameObject_get_activeSelf_m3858025161(L_39, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0181;
		}
	}
	{
		GameObject_t3674682005 * L_41 = V_1;
		NullCheck(L_41);
		String_t* L_42 = GameObject_get_tag_m211612200(L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_43 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_42, _stringLiteral2439994602, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0181;
		}
	}
	{
		GameObject_t3674682005 * L_44 = V_1;
		NullCheck(L_44);
		GameObject_SetActive_m3538205401(L_44, (bool)1, /*hidden argument*/NULL);
		__this->set_count_7(0);
		PlayerController_SetCountText_m1021738208(__this, /*hidden argument*/NULL);
	}

IL_0181:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)((int32_t)L_45+(int32_t)1));
	}

IL_0185:
	{
		int32_t L_46 = V_3;
		GameObjectU5BU5D_t2662109048* L_47 = V_2;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_47)->max_length)))))))
		{
			goto IL_0149;
		}
	}

IL_018e:
	{
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter(UnityEngine.Collision)
extern Il2CppCodeGenString* _stringLiteral70393;
extern const uint32_t PlayerController_OnCollisionEnter_m387453836_MetadataUsageId;
extern "C"  void PlayerController_OnCollisionEnter_m387453836 (PlayerController_t2866526589 * __this, Collision_t2494107688 * ___collision0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnCollisionEnter_m387453836_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision_t2494107688 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t3674682005 * L_1 = Collision_get_gameObject_m4245316464(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_CompareTag_m3153977471(L_1, _stringLiteral70393, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		__this->set_fatCollision_8((bool)1);
		Rigidbody_t3346577219 * L_3 = __this->get_rb_6();
		Vector3_t4282066566  L_4 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody_set_angularVelocity_m3510265645(L_3, L_4, /*hidden argument*/NULL);
		Rigidbody_t3346577219 * L_5 = __this->get_rb_6();
		Vector3_t4282066566  L_6 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody_set_velocity_m799562119(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void PlayerController::SetCountText()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2622482517;
extern Il2CppCodeGenString* _stringLiteral3601817446;
extern const uint32_t PlayerController_SetCountText_m1021738208_MetadataUsageId;
extern "C"  void PlayerController_SetCountText_m1021738208 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_SetCountText_m1021738208_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t9039225 * L_0 = __this->get_countText_4();
		int32_t* L_1 = __this->get_address_of_count_7();
		String_t* L_2 = Int32_ToString_m1286526384(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral2622482517, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		int32_t L_4 = __this->get_count_7();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)9))))
		{
			goto IL_003d;
		}
	}
	{
		Text_t9039225 * L_5 = __this->get_winText_5();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral3601817446);
	}

IL_003d:
	{
		return;
	}
}
// System.Void Rotator::.ctor()
extern "C"  void Rotator__ctor_m1971779198 (Rotator_t3048826765 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rotator::Update()
extern "C"  void Rotator_Update_m2722475087 (Rotator_t3048826765 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m2926210380(&L_1, (15.0f), (30.0f), (45.0f), /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_3 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_3, (4.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m637363399(L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
