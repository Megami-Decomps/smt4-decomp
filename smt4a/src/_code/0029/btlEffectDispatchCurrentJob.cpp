/* Dispatch the active battle effect with this job's work buffer, or return zero when no effect is active. */
#include "battle/btlEffect.h"
#include "shard/JobWork.h"

extern "C" {

extern BtlEffectGlobals g_btlEffect;

extern s32 FUN_004fa828(void *target, u32 value);

s32 btlEffectDispatchCurrentJob(u32 job)
{
    u32 value = reinterpret_cast<u32>(jobGetWork(job));

    if (g_btlEffect.data != NULL) {
        return FUN_004fa828(g_btlEffect.data, value);
    }
    return 0;
}

}
