#include "battle/btlEffect.h"

extern "C" {

s32 FUN_0019a37c(u32 slot, u32 a, u32 b);
u32 wstrlen(u32 value);

extern BtlEffectGlobals g_btlEffect;

u32 FUN_004f5710(u32 unused, u32 slot)
{
    u32 value;

    if (slot != 0) {
        value = wstrlen(g_btlEffect.unk00);
        if (FUN_0019a37c(slot, g_btlEffect.unk00, value) == 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
