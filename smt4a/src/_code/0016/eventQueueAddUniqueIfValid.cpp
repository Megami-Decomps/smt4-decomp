#include "common.h"
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {

extern int eventQueueAddUnique(s32 event);

/* Queues `event` when it is a valid (non-negative) event id. */
void eventQueueAddUniqueIfValid(s32 event)
{
    if (event >= 0) {
        eventQueueAddUnique(event);
    }
}

}
