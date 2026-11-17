#include "frame_tex/FrameTexA.h"

extern "C" {

extern void FUN_001509fc(s32 arg);
extern void FUN_001537b0(u32 value);

/* "HDRDL" draw: once the HDR layer is ready with its left capture, the scene texture exists and capture is not blocked, draws the layer (in passes through the downsample chain when it exists); returns 0. */
s32 FUN_0013c660(u32 handle)
{
    FrameTexWorkA *job = (FrameTexWorkA *)jobGetWork(handle);

    if (job->hdr.enabled != 0 && job->hdr.ready != 0 && job->hdr.capturedLeft != 0 &&
        job->sceneSurface != NULL && job->captureBlocked == 0) {
        if (job->hdrDownsampleChain != 0) {
            FUN_001537b0(1);
        } else {
            FUN_001509fc(1);
        }
    }
    return 0;
}

} /* extern "C" */
