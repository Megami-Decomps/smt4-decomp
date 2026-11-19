#include "common.h"

extern "C" {

extern u32 g_btlAux;

s32 btlPollVersionedEffectTexture(u32 value);

/* Script condition: btlPollVersionedEffectTexture accepts the battle aux value. */
s32 FUN_003802a4(void)
{
    return btlPollVersionedEffectTexture(g_btlAux) != 0;
}

} /* extern "C" */
