#include "event/2dEvent/2dEventTex.h"

extern "C" {
extern EventTex *g_eventTex;
s32 jobIsValid(u32);
s32 jobGetStatus(u32);

void eventTexRegisterAndSortTask(u32 job)
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
        for (s32 index = 0; index < work->count - 1; ++index) {
            if (!work->slots[index]) {
                if (work->slots[index + 1]) {
                    work->slots[index] = work->slots[index + 1];
                    changed = true;
                }
                continue;
            }
            if (!work->slots[index + 1])
                continue;
            s32 currentStatus = jobGetStatus(work->slots[index]);
            s32 nextStatus = jobGetStatus(work->slots[index + 1]);
            if (nextStatus < currentStatus) {
                u32 previous = work->slots[index];
                work->slots[index] = work->slots[index + 1];
                work->slots[index + 1] = previous;
                changed = true;
            }
        }
    } while (changed);
}
}
