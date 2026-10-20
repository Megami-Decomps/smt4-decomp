#include "common.h"

extern "C" {

struct Owner0037a2a8;

void nw_snd_internal_TaskManager_CancelTasksByKeyImpl(Owner0037a2a8 *self, u32 key);

/* Forwards to nw_snd_internal_TaskManager_CancelTasksByKeyImpl, the function that follows it. */
void nw_snd_internal_TaskManager_CancelTasksByKey(Owner0037a2a8 *self, u32 key)
{
    nw_snd_internal_TaskManager_CancelTasksByKeyImpl(self, key);
}

} /* extern "C" */
