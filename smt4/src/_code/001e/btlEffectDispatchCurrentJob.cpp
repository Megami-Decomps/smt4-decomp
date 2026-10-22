/* Calls FUN_003dd1a4 with the global's field at +0x18 and the jobGetWork value, if that field is set; returns its result or 0. */
#include "battle/btlEffect.h"

extern "C" {

extern BtlEffectGlobals g_btlEffect;

extern u32 jobGetWork(void);
extern s32 FUN_003dd1a4(void *target, u32 value);

s32 btlEffectDispatchCurrentJob(void)
{
    u32 value = jobGetWork();

    if (g_btlEffect.data != NULL) {
        return FUN_003dd1a4(g_btlEffect.data, value);
    }
    return 0;
}

}
