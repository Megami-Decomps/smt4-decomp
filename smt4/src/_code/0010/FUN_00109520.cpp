#include "title/titleMain.h"
#include "common.h"
#include "frame_tex/FrameTex.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

int FUN_001132fc(int arg);
int stateValuesGetBySelector(int arg);

/* Fade set's right draw: once the fade is enabled and its left capture is done, and no state selector is set, draws the fade on the right screen. Always returns 0. */
u8 FUN_00109520(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);

    if (work->fadeEnabled == 0) {
        return 0;
    }
    if (work->fadeCapturedLeft == 0) {
        return 0;
    }
    if (stateValuesGetBySelector(0) != 0) {
        return 0;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    FUN_001132fc(0);
    return 0;
}

} /* extern "C" */
