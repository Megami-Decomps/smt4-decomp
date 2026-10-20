#include "common.h"

extern "C" {

typedef struct EventTex {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 jobs[10];      /* first group, `jobCount` valid */
    /* 0x2C */ s32 jobCount;
    /* 0x30 */ u8 unk30[4];
    /* 0x34 */ u32 slots[10];     /* second group */
} EventTex;

extern EventTex *g_eventTex;

extern s32 jobIsValid(u32 job);
extern s32 jobGetStatus(u32 job);
extern s32 jobWorkGetFirstWordB(u32 job);
extern s32 FUN_00126184(u32 job);
extern s32 FUN_00126704(u32 job);
extern s32 FUN_00126714(u32 job);
extern void FUN_002b7184(u32 job, s32 on);
extern void FUN_002b71d0(u32 job, s32 on);
extern void FUN_002bff38(u8 value);

/* Marks the event jobs that match `id` (selecting them and acting on their value) and deselects the rest; returns 1 when one matched. */
u32 eventTexSelectJobsById(s32 id)
{
    EventTex *tex = g_eventTex;
    u32 found;
    s32 i;

    if (tex == NULL) {
        return 0;
    }
    found = 0;
    for (i = 0; i < tex->jobCount; i++) {
        if (jobIsValid(tex->jobs[i]) != 0 && jobGetStatus(tex->jobs[i]) != 4) {
            if (jobWorkGetFirstWordB(tex->jobs[i]) == id) {
                FUN_002b71d0(tex->jobs[i], 1);
                FUN_002bff38(FUN_00126704(tex->jobs[i]));
                found = 1;
            } else {
                FUN_002b71d0(tex->jobs[i], 0);
            }
        }
    }
    for (i = 0; i < 10; i++) {
        if (jobIsValid(tex->slots[i]) != 0) {
            if (FUN_00126184(tex->slots[i]) == id) {
                FUN_002b7184(tex->slots[i], 1);
                FUN_002bff38(FUN_00126714(tex->slots[i]));
                found = 1;
            } else {
                FUN_002b7184(tex->slots[i], 0);
            }
        }
    }
    return found;
}

} /* extern "C" */
