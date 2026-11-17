#include "frame_tex/FrameTex.h"

extern "C" {
s32 FUN_00117a70(s32 mode);
s32 FUN_001192c8(s32 mode);
s32 stateValuesGetBySelector(u32 screen);

// "HDRDR" draw: draws the HDR layer on the right screen once both captures are ready.
s32 FUN_0010812c(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);
    if (stateValuesGetBySelector(0) != 0) {
        return 0;
    }
    if (work->hdr.enabled == 0) {
        return 0;
    }
    if (work->hdr.ready == 0) {
        return 0;
    }
    if (work->hdr.capturedRight == 0) {
        return 0;
    }
    if (work->sceneSurface == NULL) {
        return 0;
    }
    if (work->captureBlocked != 0) {
        return 0;
    }
    if (work->hdrDownsampleChain != 0) {
        FUN_001192c8(0);
    } else {
        FUN_00117a70(0);
    }
    return 0;
}
}
