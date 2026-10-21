#include "common.h"

extern "C" {
void *jobGetWork(u32 job);
u32 FUN_00344f5c(s32 *reflection);
extern s32 *g_btlActionReflect;

/* Processes the battle reflection state when present. */
void FUN_002eb5b4(u32 job)
{
    jobGetWork(job);
    if (g_btlActionReflect != NULL) {
        FUN_00344f5c(g_btlActionReflect);
    }
}
}
