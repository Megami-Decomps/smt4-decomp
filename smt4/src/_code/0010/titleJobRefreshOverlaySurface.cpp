#include "ui/UiSpriteApi.h"
#include "frame_tex/FrameTex.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
u32 gxCopyFramebufferToSurface(s32 mode, AsdTexture *surface);
s32 stateValuesGetBySelector(void);

// "ZanCR" capture: captures the right screen into the afterimage's right surface under the same gates as the left capture.
s32 titleJobRefreshOverlaySurface(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);
    work->zan.capturedRight = 0;
    if (stateValuesGetBySelector() != 0) {
        return 0;
    }
    if (work->zan.enabled == 0) {
        return 0;
    }
    if (work->zan.ready == 0) {
        return 0;
    }
    if (work->sceneSurface == NULL) {
        return 0;
    }
    if (work->captureBlocked != 0) {
        return 0;
    }
    if (work->campEnabled != 0) {
        return 0;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    work->zanSurfaceRight->dimensions.width = 512;
    work->zanSurfaceRight->dimensions.height = 512;
    work->zan.captureResult = gxCopyFramebufferToSurface(0, work->zanSurfaceRight);
    work->zan.capturedRight = 1;
    return 0;
}
}
