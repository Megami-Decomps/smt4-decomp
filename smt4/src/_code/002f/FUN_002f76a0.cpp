#include "common.h"

extern "C" {

extern u32 DAT_00435d18;

s32 btlPollVersionedEffectTexture(u32 value);

/* Script condition: btlPollVersionedEffectTexture accepts DAT_00435d18. */
s32 FUN_002f76a0(void)
{
    return btlPollVersionedEffectTexture(DAT_00435d18) != 0;
}

} /* extern "C" */
