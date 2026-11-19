#include "ui/UiSpriteApi.h"
#include "common.h"
#include "frame_tex/FrameTex.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

extern s32 stateValuesGetBySelector(s32 arg);
extern u8 gxCopyFramebufferToSurface(s32 arg, AsdTexture *surface);

/* Fade set's right capture: captures the right screen once while the fade is enabled, or marks the capture pending while a state selector is set. */
s32 titleCaptureSurfaceOnce(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);

    if (stateValuesGetBySelector(0) != 0) {
        work->fadePendingRight = 1;
    } else if (work->fadeEnabled != 0 && work->fadeCapturedRight == 0 && work->fadePendingRight == 0) {
        renderCtxSelectStereoLayout(g_titleScene);
        work->surfaceRight->dimensions.width = 0x200;
        work->surfaceRight->dimensions.height = 0x200;
        work->fadeCaptureResult = gxCopyFramebufferToSurface(0, work->surfaceRight);
        work->fadeCapturedRight = 1;
    }
    return 0;
}

} /* extern "C" */
