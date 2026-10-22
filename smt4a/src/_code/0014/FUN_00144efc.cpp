#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"

extern "C" {

extern AsdTextDefaultsA g_asdTextDefaults;

/* Stores `value` in the word at 0x28 of the global block at 0x005b3d54. */
void FUN_00144efc(u32 value)
{
    g_asdTextDefaults.unk28 = value;
}

} /* extern "C" */
