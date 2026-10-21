/* NON_MATCHING: instruction selection/order differs: retail beq 20; compiler ldrne r0, [r0, #24]. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern CampWorker *g_camp;

/* Reports whether the camp worker is absent or in state forty-eight. */
bool FUN_0017fb54(void)
{
    CampWorker *work = g_camp;
    if (work == NULL) {
        return true;
    }
    return work->state == 48;
}

} /* extern "C" */
