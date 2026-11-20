#include "common.h"

extern "C" {

extern u32 g_btlAux;

s32 btlPollVersionedEffectTexture(u32 value);

/* Script condition: btlPollVersionedEffectTexture accepts g_btlAux. */
s32 FUN_002f76a0(void)
{
    return btlPollVersionedEffectTexture(g_btlAux) != 0;
}

} /* extern "C" */
