#include "battle/btlReflect.h"
struct ReflectJobWork {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 job;
};
extern "C" {
ReflectJobWork* jobGetWork(void);
void asdMemFree(void*);
void jobStop(u32, u32);

void btlReflectReleaseContextAndStop(void)
{
    ReflectJobWork* work = jobGetWork();
    ReflectContext* context = g_btlActionReflect;
    ReflectAction* action = context->head;
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
