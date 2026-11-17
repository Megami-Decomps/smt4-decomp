#include "common.h"
#include "frame_tex/FrameTex.h"

extern "C" {

void FUN_00117a70(s32 arg);
void FUN_001192c8(s32 arg);

/* "HDRDL" draw: once both HDR captures and the scene surface are ready and capture is not blocked, draws the HDR layer. */
u32 FUN_001080c0(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);

    if (work->hdr.enabled && work->hdr.ready && work->hdr.capturedLeft && work->sceneSurface != NULL &&
        !work->captureBlocked) {
        if (work->hdrDownsampleChain) {
            FUN_001192c8(1);
        } else {
            FUN_00117a70(1);
        }
    }
    return 0;
}

} /* extern "C" */
