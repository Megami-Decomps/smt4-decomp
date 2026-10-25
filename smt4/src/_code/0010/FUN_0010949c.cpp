/* NON_MATCHING: Adjacent flag loads do not share the retail high-offset base register. */
#include "ui/FrameTex.h"
extern "C" {
FrameWork* jobGetWork(u32 job);
void FUN_001132fc(s32);

// Advances the active white overlay toward transparent.
u8 FUN_0010949c(u32 job)
{
    FrameWork* work = jobGetWork(job);
    if (work->fadeActive == 0) {
        return 0;
    }
    if (work->fadeEnabled != 0) {
        s32 elapsed = work->elapsed + 1;
        work->elapsed = elapsed;
        if (work->duration < elapsed) {
            work->fadeActive = 0;
        } else {
            s32 alpha = 255 - elapsed * 255 / work->duration;
            if (alpha > 255) {
                alpha = 255;
            } else if (alpha < 0) {
                alpha = 0;
            }
            work->color = alpha | 0xFFFFFF00;
            FUN_001132fc(1);
        }
    }
    return 0;
}
}
