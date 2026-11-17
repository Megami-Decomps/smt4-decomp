#include "frame_tex/FrameTexA.h"

extern "C" {
void FUN_001509fc(u32 value);
void FUN_001537b0(u32 value);
s32 stateValuesGetBySelector(u32 selector);

/* "HDRDR" draw: draws the HDR layer on the right screen once both captures are ready (in passes through the downsample chain when it exists). */
u32 FUN_0013c6d4(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);
    if (stateValuesGetBySelector(0) != 0 || !work->hdr.enabled || !work->hdr.ready) {
        return 0;
    }
    if (!work->hdr.capturedRight) {
        return 0;
    }
    if (work->sceneSurface == NULL) {
        return 0;
    }
    if (!work->captureBlocked) {
        if (work->hdrDownsampleChain) {
            FUN_001537b0(0);
        } else {
            FUN_001509fc(0);
        }
    }
    return 0;
}
}
