#include "common.h"

extern "C" {
s32 nw_snd_internal_Util_BitFlag_GetValue(u8 *flags, u32 *value, s32 index);

u32 FUN_00508758(u8 *flags)
{
    u32 value;
    return nw_snd_internal_Util_BitFlag_GetValue(flags + 24, &value, 1) ? value : 0;
}
}
