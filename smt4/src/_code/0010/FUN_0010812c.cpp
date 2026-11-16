#include "shard/FrameWork.h"

extern "C" {
s32 FUN_00117a70(s32 mode);
s32 FUN_001192c8(s32 mode);
s32 stateValuesGetBySelector(u32 screen);

// Process a prepared frame unless the screen or surface gates block it.
s32 FUN_0010812c(u32 job)
{
    FrameWork *work = (FrameWork *)jobGetWork(job);
    if (stateValuesGetBySelector(0) != 0) {
        return 0;
    }
    FrameReadyFlags *flags = &work->flags;
    if (flags->active == 0) {
        return 0;
    }
    if (flags->ready == 0) {
        return 0;
    }
    if (flags->surfaceReady == 0) {
        return 0;
    }
    if (work->frame.surface == NULL) {
        return 0;
    }
    FrameSurfaceState *frame = &work->frame;
    if (work->frame.blocked != 0) {
        return 0;
    }
    if (frame->unkE0 != 0) {
        FUN_001192c8(0);
    } else {
        FUN_00117a70(0);
    }
    return 0;
}
}
