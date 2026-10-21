/* NON_MATCHING: armcc keeps the loop's sentinel address in an extra saved register and schedules insertion arguments differently; -O2/-Ospace also differ. */
#include "shard/Shard0046.h"
#include <stddef.h>

struct CallerList {
    u32 count;
    CallerListLink sentinel;
};

struct CallerQueues {
    u8 unk00[0x14];
    CallerList available;
    CallerList pending;
};

static inline CallerA *callerFromPendingNode(CallerListLink *node)
{
    return (CallerA *)((u8 *)node - offsetof(CallerA, pending.node));
}

extern "C" {
u32 FUN_00462964(CallerA *caller);
void callerARelease3C(CallerA *caller);
void FUN_001b6668(CallerList *list, CallerListLink *node);
CallerListLink *nw_ut_internal_LinkListImpl_insert(
    CallerList *list, CallerListLink *position, CallerListLink *node);

void callerQueuesRecycleInactive(CallerQueues *queues)
{
    CallerListLink *node = queues->pending.sentinel.next;
    if (node != &queues->pending.sentinel) {
        do {
            CallerListLink *current = node;
            node = node->next;
            if (FUN_00462964(callerFromPendingNode(current)) == 0) {
                callerARelease3C(callerFromPendingNode(current));
                FUN_001b6668(&queues->pending, current);
                nw_ut_internal_LinkListImpl_insert(
                    &queues->available, &queues->available.sentinel, current);
            }
        } while (node != &queues->pending.sentinel);
    }
}
}
