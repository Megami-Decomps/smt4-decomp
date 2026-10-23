#include "event/2dEvent/2dEventTex.h"

extern "C" {
extern EventTexA* g_eventTex;
s32 jobIsValid(u32 job);
s32 jobGetStatus(u32 job);

void eventInsertSortedTextureJob(u32 job)
{
    EventTexA* work = g_eventTex;
    for (s32 index = 0; index < work->count; ++index) {
        if (!jobIsValid(work->slots[index])) {
            work->slots[index] = 0;
        }
    }
    for (s32 index = 0; index < EVENT_TEX_HANDLES_A; ++index) {
        if (!work->slots[index]) {
            work->slots[index] = job;
            break;
        }
    }
    s32 hole = -1;
    for (s32 index = 0; index < EVENT_TEX_HANDLES_A; ++index) {
        if (hole < 0) {
            if (!work->slots[index]) {
                hole = index;
            }
        } else if (work->slots[index]) {
            work->slots[hole] = work->slots[index];
            work->slots[index] = 0;
            hole = index;
        }
    }
    work->count = 0;
    while (work->count < EVENT_TEX_HANDLES_A && work->slots[work->count]) {
        ++work->count;
    }
    bool swapped;
    do {
        swapped = false;
        for (s32 index = 0; index < work->count - 1; ++index) {
            if (!work->slots[index]) {
                if (work->slots[index + 1]) {
                    swapped = true;
                    work->slots[index] = work->slots[index + 1];
                }
                continue;
            }
            if (work->slots[index + 1]) {
                s32 firstStatus = jobGetStatus(work->slots[index]);
                s32 secondStatus = jobGetStatus(work->slots[index + 1]);
                if (secondStatus < firstStatus) {
                    u32 first = work->slots[index];
                    swapped = true;
                    work->slots[index] = work->slots[index + 1];
                    work->slots[index + 1] = first;
                }
            }
        }
    } while (swapped);
}
}
