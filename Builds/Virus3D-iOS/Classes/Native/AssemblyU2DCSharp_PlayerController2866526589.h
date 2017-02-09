#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "mscorlib_System_DateTime4283661327.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t667441552
{
public:
	// System.Single PlayerController::penaltySeconds
	float ___penaltySeconds_2;
	// System.Single PlayerController::reviveSeconds
	float ___reviveSeconds_3;
	// System.Single PlayerController::speed
	float ___speed_4;
	// UnityEngine.UI.Text PlayerController::countText
	Text_t9039225 * ___countText_5;
	// UnityEngine.UI.Text PlayerController::winText
	Text_t9039225 * ___winText_6;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t3346577219 * ___rb_7;
	// System.Int32 PlayerController::count
	int32_t ___count_8;
	// System.DateTime PlayerController::start
	DateTime_t4283661327  ___start_9;
	// System.Boolean PlayerController::fatCollision
	bool ___fatCollision_10;
	// System.Boolean PlayerController::restart
	bool ___restart_11;

public:
	inline static int32_t get_offset_of_penaltySeconds_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___penaltySeconds_2)); }
	inline float get_penaltySeconds_2() const { return ___penaltySeconds_2; }
	inline float* get_address_of_penaltySeconds_2() { return &___penaltySeconds_2; }
	inline void set_penaltySeconds_2(float value)
	{
		___penaltySeconds_2 = value;
	}

	inline static int32_t get_offset_of_reviveSeconds_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___reviveSeconds_3)); }
	inline float get_reviveSeconds_3() const { return ___reviveSeconds_3; }
	inline float* get_address_of_reviveSeconds_3() { return &___reviveSeconds_3; }
	inline void set_reviveSeconds_3(float value)
	{
		___reviveSeconds_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_countText_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___countText_5)); }
	inline Text_t9039225 * get_countText_5() const { return ___countText_5; }
	inline Text_t9039225 ** get_address_of_countText_5() { return &___countText_5; }
	inline void set_countText_5(Text_t9039225 * value)
	{
		___countText_5 = value;
		Il2CppCodeGenWriteBarrier(&___countText_5, value);
	}

	inline static int32_t get_offset_of_winText_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___winText_6)); }
	inline Text_t9039225 * get_winText_6() const { return ___winText_6; }
	inline Text_t9039225 ** get_address_of_winText_6() { return &___winText_6; }
	inline void set_winText_6(Text_t9039225 * value)
	{
		___winText_6 = value;
		Il2CppCodeGenWriteBarrier(&___winText_6, value);
	}

	inline static int32_t get_offset_of_rb_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rb_7)); }
	inline Rigidbody_t3346577219 * get_rb_7() const { return ___rb_7; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_7() { return &___rb_7; }
	inline void set_rb_7(Rigidbody_t3346577219 * value)
	{
		___rb_7 = value;
		Il2CppCodeGenWriteBarrier(&___rb_7, value);
	}

	inline static int32_t get_offset_of_count_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___count_8)); }
	inline int32_t get_count_8() const { return ___count_8; }
	inline int32_t* get_address_of_count_8() { return &___count_8; }
	inline void set_count_8(int32_t value)
	{
		___count_8 = value;
	}

	inline static int32_t get_offset_of_start_9() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___start_9)); }
	inline DateTime_t4283661327  get_start_9() const { return ___start_9; }
	inline DateTime_t4283661327 * get_address_of_start_9() { return &___start_9; }
	inline void set_start_9(DateTime_t4283661327  value)
	{
		___start_9 = value;
	}

	inline static int32_t get_offset_of_fatCollision_10() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___fatCollision_10)); }
	inline bool get_fatCollision_10() const { return ___fatCollision_10; }
	inline bool* get_address_of_fatCollision_10() { return &___fatCollision_10; }
	inline void set_fatCollision_10(bool value)
	{
		___fatCollision_10 = value;
	}

	inline static int32_t get_offset_of_restart_11() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___restart_11)); }
	inline bool get_restart_11() const { return ___restart_11; }
	inline bool* get_address_of_restart_11() { return &___restart_11; }
	inline void set_restart_11(bool value)
	{
		___restart_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
