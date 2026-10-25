#include "battle/btlReflect.h"
#include "shard/JobWork.h"
extern "C" {
u32 FUN_00344f5c(ReflectContext *reflection);

/* Processes the battle reflection state when present. */
void FUN_002eb5b4(u32 job)
{
    jobGetWork(job);
    if (g_btlActionReflect != NULL) {
        FUN_00344f5c(g_btlActionReflect);
    }
}
}
