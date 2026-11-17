#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "frame_tex/FrameTexA.h"

extern "C" {

s32 stateValuesGetBySelector(u32);
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *);
void FUN_0014a960(u32);

// "XFADEDR" draw: draws the cross-fade on the right screen once it is enabled and its left capture is done.
u8 frameTexDrawWhenReady(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);
    if (work->fadeEnabled == 0)
        return 0;
    if (work->fadeCapturedLeft == 0)
        return 0;
    if (stateValuesGetBySelector(0) != 0)
        return 0;
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    FUN_0014a960(0);
    return 0;
}

}
