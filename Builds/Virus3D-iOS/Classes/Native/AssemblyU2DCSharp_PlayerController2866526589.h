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
	// System.Single PlayerController::speed
	float ___speed_3;
	// UnityEngine.UI.Text PlayerController::countText
	Text_t9039225 * ___countText_4;
	// UnityEngine.UI.Text PlayerController::winText
	Text_t9039225 * ___winText_5;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t3346577219 * ___rb_6;
	// System.Int32 PlayerController::count
	int32_t ___count_7;
	// System.Boolean PlayerController::fatCollision
	bool ___fatCollision_8;

public:
	inline static int32_t get_offset_of_penaltySeconds_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___penaltySeconds_2)); }
	inline float get_penaltySeconds_2() const { return ___penaltySeconds_2; }
	inline float* get_address_of_penaltySeconds_2() { return &___penaltySeconds_2; }
	inline void set_penaltySeconds_2(float value)
	{
		___penaltySeconds_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_countText_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___countText_4)); }
	inline Text_t9039225 * get_countText_4() const { return ___countText_4; }
	inline Text_t9039225 ** get_address_of_countText_4() { return &___countText_4; }
	inline void set_countText_4(Text_t9039225 * value)
	{
		___countText_4 = value;
		Il2CppCodeGenWriteBarrier(&___countText_4, value);
	}

	inline static int32_t get_offset_of_winText_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___winText_5)); }
	inline Text_t9039225 * get_winText_5() const { return ___winText_5; }
	inline Text_t9039225 ** get_address_of_winText_5() { return &___winText_5; }
	inline void set_winText_5(Text_t9039225 * value)
	{
		___winText_5 = value;
		Il2CppCodeGenWriteBarrier(&___winText_5, value);
	}

	inline static int32_t get_offset_of_rb_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rb_6)); }
	inline Rigidbody_t3346577219 * get_rb_6() const { return ___rb_6; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_6() { return &___rb_6; }
	inline void set_rb_6(Rigidbody_t3346577219 * value)
	{
		___rb_6 = value;
		Il2CppCodeGenWriteBarrier(&___rb_6, value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_fatCollision_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___fatCollision_8)); }
	inline bool get_fatCollision_8() const { return ___fatCollision_8; }
	inline bool* get_address_of_fatCollision_8() { return &___fatCollision_8; }
	inline void set_fatCollision_8(bool value)
	{
		___fatCollision_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
