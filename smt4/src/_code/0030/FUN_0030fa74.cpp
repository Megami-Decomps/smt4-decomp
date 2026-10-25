#include "battle/btlReflect.h"
#include "shard/JobWork.h"

namespace {
struct ReflectCleanupWork {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 job;
};
}
extern "C" {
void asdMemFree(void *memory);
void jobStop(u32 job, s32 reason);

/* Unlinks and frees the queued reflection actions, releases their owner, and stops the cleanup job. */
void FUN_0030fa74(u32 job)
{
    ReflectCleanupWork *work = (ReflectCleanupWork *)jobGetWork(job);
    ReflectContext *context = g_btlActionReflect;
    ReflectAction *action = context->head;
    while (action != NULL) {
        if (action->previous == NULL) {
            context->head = action->next;
        } else {
            action->previous->next = action->next;
        }
        if (action->next == NULL) {
            context->tail = action->previous;
        } else {
            action->next->previous = action->previous;
        }
        --context->count;
        asdMemFree(action);
        action = context->head;
    }
    if (g_btlActionReflect != NULL) {
        asdMemFree(g_btlActionReflect);
        g_btlActionReflect = NULL;
    }
    jobStop(work->job, 0);
}
}
