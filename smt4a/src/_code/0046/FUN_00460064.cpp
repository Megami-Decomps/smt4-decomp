#include "common.h"

extern "C" {

void nw_snd_internal_TaskManager_CancelTasksByKeyImpl(void);

/* Runs nw_snd_internal_TaskManager_CancelTasksByKeyImpl (placed right after, so the call is a linker NOP). */
void FUN_00460064(void)
{
    nw_snd_internal_TaskManager_CancelTasksByKeyImpl();
}

} /* extern "C" */
