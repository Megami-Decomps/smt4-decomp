#include "common.h"

extern "C" {

int nw_snd_internal_TaskManager_CancelTasksByKey(u32 a, u32 b);
extern u32 FUN_002bb020(void);

void FUN_0037c9e8(u32 value)
{
    u32 a = FUN_002bb020();

    nw_snd_internal_TaskManager_CancelTasksByKey(a, value);
}

} /* extern "C" */
