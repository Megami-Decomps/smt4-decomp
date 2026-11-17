#include "frame_tex/FrameTex.h"
#include "title/titleMain.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
void FUN_00117da4(s32 mode);

// "ZanDL" draw: draws the afterimage layer on the left screen once its captures are ready.
s32 FUN_001081b0(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);
    if (work->zan.enabled && work->zan.ready && work->zan.capturedLeft &&
        work->sceneSurface != NULL && !work->captureBlocked) {
        renderCtxSelectStereoLayout(g_titleScene);
        FUN_00117da4(1);
        return 0;
    }
    return 0;
}
}
