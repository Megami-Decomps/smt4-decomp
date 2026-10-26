/* NON_MATCHING: only the order of the conditional moveq/andne pair differs. */
#include "common.h"

extern "C" {
s32 nw_snd_internal_Util_BitFlag_GetValue(u8 *flags, u32 *value, s32 index);

u32 FUN_0014d234(u8 *flags)
{
    u32 value;
    return nw_snd_internal_Util_BitFlag_GetValue(flags + 4, &value, 2) ? (value & 0xFF) : 0x40;
}
}
