/* NON_MATCHING: empty-slot bubble-sort branch stays inside the loop and early pair-count comparison differs. */
#include "event/2dEvent/2dEventTex.h"

extern "C" {
extern EventTex *g_eventTex;
s32 jobIsValid(u32);
s32 jobGetStatus(u32);

void FUN_00289234(u32 job)
{
    EventTex *work = g_eventTex;
    for (s32 index = 0; index < work->count; ++index) {
        if (!jobIsValid(work->slots[index]))
            work->slots[index] = 0;
    }
    for (s32 index = 0; index < EVENT_TEX_HANDLES; ++index) {
        if (!work->slots[index]) {
            work->slots[index] = job;
            break;
        }
    }
    s32 hole = -1;
    for (s32 index = 0; index < EVENT_TEX_HANDLES; ++index) {
        if (hole < 0) {
            if (!work->slots[index])
                hole = index;
        } else if (work->slots[index]) {
            work->slots[hole] = work->slots[index];
            work->slots[index] = 0;
            hole = index;
        }
    }
    work->count = 0;
    while (work->count < EVENT_TEX_HANDLES && work->slots[work->count])
        ++work->count;
    bool changed;
    do {
        changed = false;
        s32 index = 0;
        if (work->count <= 1)
            return;
        do {
            if (work->slots[index]) {
                if (work->slots[index + 1]) {
                    s32 currentStatus = jobGetStatus(work->slots[index]);
                    s32 nextStatus = jobGetStatus(work->slots[index + 1]);
                    if (nextStatus < currentStatus) {
                        u32 previous = work->slots[index];
                        work->slots[index] = work->slots[index + 1];
                        work->slots[index + 1] = previous;
                        changed = true;
                    }
                }
            } else if (work->slots[index + 1]) {
                work->slots[index] = work->slots[index + 1];
                changed = true;
            }
            ++index;
        } while (index < work->count - 1);
    } while (changed);
}
}
