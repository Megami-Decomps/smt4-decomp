/* NON_MATCHING: retail places the shared `return true` after the second loop; armcc here inlines it into the second loop's hit path. */
#include "shard/HandlePools.h"

extern "C" {

void FUN_0034ad94(PoolRequest *request);

/* Polls the request registered under `id` and returns whether it is done; unknown ids count as done. */
bool FUN_003d9af8(HandlePools *pools, s32 id)
{
    s32 i;

    for (i = 0; i < 50; i++) {
        LargePoolSlot *slot = &pools->large[i];
        if (slot->id == id && slot->request != NULL) {
            FUN_0034ad94(slot->request);
            return slot->request->done != 0;
        }
    }
    for (i = 0; i < 109; i++) {
        SmallPoolSlot *slot = &pools->small[i];
        if (slot->id == id && slot->request != NULL) {
            FUN_0034ad94(slot->request);
            return slot->request->done != 0;
        }
    }
    return true;
}

} /* extern "C" */
