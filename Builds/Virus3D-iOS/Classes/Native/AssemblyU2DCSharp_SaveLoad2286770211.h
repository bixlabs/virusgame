#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameData
struct GameData_t2589969116;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SaveLoad
struct  SaveLoad_t2286770211  : public Il2CppObject
{
public:

public:
};

struct SaveLoad_t2286770211_StaticFields
{
public:
	// GameData SaveLoad::gameData
	GameData_t2589969116 * ___gameData_0;

public:
	inline static int32_t get_offset_of_gameData_0() { return static_cast<int32_t>(offsetof(SaveLoad_t2286770211_StaticFields, ___gameData_0)); }
	inline GameData_t2589969116 * get_gameData_0() const { return ___gameData_0; }
	inline GameData_t2589969116 ** get_address_of_gameData_0() { return &___gameData_0; }
	inline void set_gameData_0(GameData_t2589969116 * value)
	{
		___gameData_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameData_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
