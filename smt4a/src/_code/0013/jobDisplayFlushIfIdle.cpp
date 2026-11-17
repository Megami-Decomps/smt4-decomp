#include "frame_tex/FrameTexA.h"
#include "camp/RenderCtxA.h"

extern "C" {

extern void FUN_00150d38(s32 arg);
extern u32 stateValuesGetBySelector(u32 selector);

// "ZanDR" draw: draws the afterimage layer on the right screen once its right capture is done and the
// scene texture exists, unless a state selector is set or capture is blocked.
s32 jobDisplayFlushIfIdle(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);
    if (stateValuesGetBySelector(0) == 0 && work->zan.enabled != 0 && work->zan.ready != 0) {
        u8 notCaptured = work->zan.capturedRight == 0;
        AsdTexture *scene = NULL;
        if (!notCaptured) {
            scene = work->sceneSurface;
        }
        if (notCaptured || scene == NULL) {
            return (s32)scene; /* zero: retail returns the tested register */
        }
        if (work->captureBlocked == 0) {
            renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
            FUN_00150d38(0);
            return 0;
        }
    }
    return 0;
}

} /* extern "C" */
