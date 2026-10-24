#include "shard/HandlePools.h"

extern "C" {

void FUN_0041bb2c(PoolRequest *request);

/* Polls the request registered under `id` and returns whether it is done; unknown ids count as done. */
bool handlePoolRequestIsDone(HandlePools *pools, s32 id)
{
    s32 i;

    for (i = 0; i < 50; i++) {
        LargePoolSlot *slot = &pools->large[i];
        if (slot->id == id && slot->request != NULL) {
            FUN_0041bb2c(slot->request);
            if (slot->request->done == 0) {
                return false;
            }
            return true;
        }
    }
    for (i = 0; i < 109; i++) {
        SmallPoolSlot *slot = &pools->small[i];
        if (slot->id == id && slot->request != NULL) {
            FUN_0041bb2c(slot->request);
            if (slot->request->done == 0) {
                return false;
            }
            return true;
        }
    }
    return true;
}

} /* extern "C" */
