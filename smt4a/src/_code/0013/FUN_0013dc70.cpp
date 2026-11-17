#include "common.h"
#include "frame_tex/FrameTexA.h"

extern "C" {

void FUN_0014a960(s32 enable);

/* "XFADEDL" draw: advances the white cross-fade by one frame, ending it after fadeDuration frames. */
s32 FUN_0013dc70(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);
    s32 alpha;

    if (!work->fadeEnabled) {
        return 0;
    }
    if (!work->fadeCapturedLeft) {
        return 0;
    }
    work->fadeElapsed++;
    if (work->fadeElapsed > work->fadeDuration) {
        work->fadeEnabled = 0;
        return 0;
    }
    alpha = 255 - work->fadeElapsed * 255 / work->fadeDuration;
    if (alpha > 255) {
        alpha = 255;
    } else if (alpha < 0) {
        alpha = 0;
    }
    work->fadeColor = 0xFFFFFF00 | alpha;
    FUN_0014a960(1);
    return 0;
}

} /* extern "C" */
