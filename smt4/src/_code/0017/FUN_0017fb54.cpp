#include "shard/W5_W5Match1_RecordKeys.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {

extern CampWorker *g_camp;

/* Reports whether the camp worker exists and is in state forty-eight. */
bool FUN_0017fb54(void)
{
    CampWorker *work = g_camp;
    if (work == NULL) {
        return false;
    }
    return work->state == 48;
}

} /* extern "C" */
