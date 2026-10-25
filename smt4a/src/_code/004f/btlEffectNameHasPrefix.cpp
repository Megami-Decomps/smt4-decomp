#include "battle/btlEffect.h"
#include "battle/btlDebug.h"

extern "C" {

s32 libc_strncmp(u32 slot, u32 a, u32 b);
u32 libc_strlen(u32 value);

extern BtlEffectGlobals g_btlEffect;

u32 btlEffectNameHasPrefix(u32 unused, u32 slot)
{
    u32 value;

    if (slot != 0) {
        value = libc_strlen(g_btlEffect.unk00);
        if (libc_strncmp(slot, g_btlEffect.unk00, value) == 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
