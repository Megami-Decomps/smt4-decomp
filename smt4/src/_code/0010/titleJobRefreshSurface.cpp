#include "ui/UiSpriteApi.h"
#include "title/titleMain.h"
#include "camp/RenderCtx.h"
#include "frame_tex/FrameTex.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
u32 FUN_002bfadc(u32 mode, AsdTexture *surface);

/* "ZanCL" capture: captures the left screen into the afterimage's left surface once the layer is ready, the scene surface exists and neither capture blocking nor the CAMP effect is active. */
u32 titleJobRefreshSurface(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);
    work->zan.capturedLeft = 0;
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
    work->zanSurfaceLeft->dimensions.width = 512;
    work->zanSurfaceLeft->dimensions.height = 512;
    work->zan.captureResult = FUN_002bfadc(0, work->zanSurfaceLeft);
    work->zan.capturedLeft = 1;
    return 0;
}
}
