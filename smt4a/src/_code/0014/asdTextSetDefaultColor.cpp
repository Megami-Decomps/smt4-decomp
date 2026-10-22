#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"

extern "C" {

extern AsdTextDefaultsA g_asdTextDefaults;

/* Stores `value` with its low byte cleared in the word at 0x8 of the global block at 0x5B3D54. */
void asdTextSetDefaultColor(u32 value)
{
    g_asdTextDefaults.color = value & 0xFFFFFF00;
}

} /* extern "C" */
