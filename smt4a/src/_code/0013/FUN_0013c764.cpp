#include "common.h"
#include <stddef.h>

extern "C" {

struct JobDisplayFlags {
    /* 0x00 */ u8 unk00[0xF4];
    /* 0xF4 */ u8 enabled;
    /* 0xF5 */ u8 ready;
    /* 0xF6 */ u8 unkF6[7];
    /* 0xFD */ u8 shown;
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
    /* 0x0FFE */ u8 unk0FFE[0x402];
    /* 0x1400 */ JobRequestState requestState;
} JobWork;
typedef char JobWorkLayoutCheck[offsetof(JobWork, display.enabled) == 0xFF4 &&
    offsetof(JobWork, display.shown) == 0xFFD && offsetof(JobWork, requestState.busy) == 0x148C &&
    offsetof(JobWork, requestState.request) == 0x1490 && sizeof(JobWork) == 0x1494 ? 1 : -1];
extern u32 g_renderCtx;

extern JobWork *jobGetWork(u32 job);
extern void FUN_00157558(u32 ctx);
extern void FUN_00150d38(s32 arg);

s32 FUN_0013c764(u32 job)
{
    JobWork *work = jobGetWork(job);

    JobDisplayFlags *display = &work->display;
    if (work->display.enabled != 0 && display->ready != 0 && display->shown != 0 &&
        work->requestState.request != 0) {
        JobRequestState *state = &work->requestState;
        if (state->busy != 0)
            return 0;
        FUN_00157558(g_renderCtx);
        FUN_00150d38(1);
        return 0;
    }
    return 0;
}

} /* extern "C" */
