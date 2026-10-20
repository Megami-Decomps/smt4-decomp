#include "common.h"

extern "C" {

typedef struct EventTex {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 jobs[10];
} EventTex;

extern EventTex *g_eventTex;

s32 jobIsValid(u32 job);

/* Drops finished jobs from the event slots, then stores `job` in the first free slot. */
void FUN_00259528(u32 job)
{
    EventTex *tex = g_eventTex;
    s32 i;

    for (i = 0; i < 10; i++) {
        if (jobIsValid(tex->jobs[i]) == 0) {
            tex->jobs[i] = 0;
        }
    }
    for (i = 0; i < 10; i++) {
        if (tex->jobs[i] == 0) {
            tex->jobs[i] = job;
            return;
        }
    }
}

} /* extern "C" */
