#include "ui/UiSpriteApi.h"
#include "title/titleMain.h"
#include "frame_tex/FrameTex.h"

extern "C" {

extern TitleScene *g_titleScene; /* 0x44ea00 */

void FUN_00117da4(s32 mode);
s32 stateValuesGetBySelector(u32 selector);

// "ZanDR" draw: draws the afterimage layer on the right screen once its right capture is done and the
// scene texture exists, unless a state selector is set or capture is blocked.
s32 FUN_0010821c(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);
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
            renderCtxSelectStereoLayout(g_titleScene);
            FUN_00117da4(0);
            return 0;
        }
    }
    return 0;
}

} /* extern "C" */
