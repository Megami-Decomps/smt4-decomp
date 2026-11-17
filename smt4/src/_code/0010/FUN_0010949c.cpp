#include "ui/UiSpriteApi.h"
#include "frame_tex/FrameTex.h"

extern "C" {

void FUN_001132fc(s32);

// Fade set's left draw: advances the white overlay toward transparent, ending the fade after its duration.
u8 FUN_0010949c(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);
    if (work->fadeEnabled == 0) {
        return 0;
    }
    if (work->fadeCapturedLeft == 0) {
        return 0;
    }
    s32 elapsed = work->fadeElapsed + 1;
    work->fadeElapsed = elapsed;
    if (work->fadeDuration < elapsed) {
        work->fadeEnabled = 0;
    } else {
        s32 alpha = 255 - elapsed * 255 / work->fadeDuration;
        if (alpha > 255) {
            alpha = 255;
        } else if (alpha < 0) {
            alpha = 0;
        }
        work->fadeColor = alpha | 0xFFFFFF00;
        FUN_001132fc(1);
    }
    return 0;
}

}
