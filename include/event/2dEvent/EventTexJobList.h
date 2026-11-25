#ifndef EVENT_2DEVENT_EVENT_TEX_JOB_LIST_H
#define EVENT_2DEVENT_EVENT_TEX_JOB_LIST_H

#include "event/2dEvent/2dEventTex.h"
#include "sys/RuntimeObjects.h"

extern "C" s32 jobGetStatus(u32 job);

/* Drops finished jobs, inserts a new job, compacts the slots, and orders the live jobs by status.
 * This is the body of eventTexRegisterAndSortTask (IV) and eventInsertSortedTextureJob (Apocalypse),
 * also inlined into each game's eventTexCreate. */
template <class Work>
static void eventTexInsertSortedJob(Work *work, u32 job)
{
    const s32 capacity = sizeof(work->slots) / sizeof(work->slots[0]);
    for (s32 index = 0; index < work->count; ++index) {
        if (!jobIsValid(work->slots[index]))
            work->slots[index] = 0;
    }
    for (s32 index = 0; index < capacity; ++index) {
        if (!work->slots[index]) {
            work->slots[index] = job;
            break;
        }
    }
    s32 hole = -1;
    for (s32 index = 0; index < capacity; ++index) {
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
    while (work->count < capacity && work->slots[work->count])
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

#endif
