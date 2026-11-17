#include "common.h"
#include "frame_tex/FrameTex.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

u8 FUN_002bfadc(s32 mode, AsdTexture *surface);

/* Fade set's left capture: once the fade is enabled and the left screen not yet captured, captures it into the 512x512 left surface. Always returns 0. */
u32 titlePartStart(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);

    if (work->fadeEnabled == 0 || work->fadeCapturedLeft != 0) {
        return 0;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    work->surfaceLeft->dimensions.width = 0x200;
    work->surfaceLeft->dimensions.height = 0x200;
    work->fadeCaptureResult = FUN_002bfadc(0, work->surfaceLeft);
    work->fadeCapturedLeft = 1;
    return 0;
}

} /* extern "C" */
