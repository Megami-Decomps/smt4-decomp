#include "frame_tex/FrameTexA.h"
#include "Model/MoriModelShadowMap.h"

extern "C" {

bool stateValuesGetBySelector(u32 index);
void FUN_0014b01c(u32 value);

/* "ENCEFFDR" draw: once the ENCEFF effect is enabled with its left capture done and its fade active, draws it on the right screen unless a state selector is set. */
bool FUN_0013e9e4(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);

    if (work->encEffEnabled == 0) {
        return false;
    }
    if (work->encEffCapturedLeft == 0) {
        return false;
    }
    if (stateValuesGetBySelector(0) == 0 && work->encEffFadeActive != 0) {
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
        FUN_0014b01c(0);
    }
    return false;
}

}
