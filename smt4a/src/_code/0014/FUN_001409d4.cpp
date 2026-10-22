#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"

extern "C" {

extern AsdTextDefaultsA g_asdTextDefaults;

/* Stores `value` in the word at 0x34 of the global block at 0x005b3d54. */
void FUN_001409d4(u32 value)
{
    g_asdTextDefaults.unk34 = value;
}

} /* extern "C" */
