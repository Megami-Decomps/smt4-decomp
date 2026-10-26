/* NON_MATCHING: only the busy-flag read differs: retail loads the 0x148C offset from a literal (ldr r0,=0x148c; ldrb r0,[r0,r4]); the build adds #5120/#140 to r4 */
#include "common.h"
#include <stddef.h>

extern "C" {

struct JobDisplayFlags {
    /* 0x00 */ u8 unk00[0xF4];
    /* 0xF4 */ u8 enabled;
    /* 0xF5 */ u8 ready;
    /* 0xF6 */ u8 unkF6[8];
    /* 0xFE */ u8 shown;
};
struct JobRequestState {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ u8 busy;
    /* 0x8D */ u8 unk8D[3];
    /* 0x90 */ s32 request;
};
typedef struct JobWork {
    /* 0x0000 */ u8 unk0000[0xF00];
    /* 0x0F00 */ JobDisplayFlags display;
    /* 0x0FFF */ u8 unk0FFF[0x401];
    /* 0x1400 */ JobRequestState requestState;
} JobWork;
typedef char JobWorkLayoutCheck[offsetof(JobWork, display.enabled) == 0xFF4 &&
    offsetof(JobWork, display.shown) == 0xFFE && offsetof(JobWork, requestState.busy) == 0x148C &&
    offsetof(JobWork, requestState.request) == 0x1490 && sizeof(JobWork) == 0x1494 ? 1 : -1];
extern u32 g_renderCtx;

extern JobWork *jobGetWork(u32 job);
extern void FUN_00157558(u32 ctx);
extern void FUN_00150d38(s32 arg);
extern u32 stateValuesGetBySelector(u32 selector);

s32 FUN_0013c7dc(u32 job)
{
    JobWork *work = jobGetWork(job);
    JobDisplayFlags *display;

    if (stateValuesGetBySelector(0) == 0 && (display = &work->display, work->display.enabled != 0) &&
        display->ready != 0) {
        u8 hidden = display->shown == 0;
        s32 request = 0;

        if (!hidden) {
            request = work->requestState.request;
        }
        if (hidden || request == 0) {
            return request;
        }
        if (work->requestState.busy == 0) {
            FUN_00157558(g_renderCtx);
            FUN_00150d38(0);
            return 0;
        }
    }
    return 0;
}

} /* extern "C" */
