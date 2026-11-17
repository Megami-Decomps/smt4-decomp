#include "frame_tex/FrameTex.h"

extern "C" {
s32 uiSpriteAdvanceAnimation(UiSpriteState *sprite);
s8 frameAnimationGetBusy(const UiSpriteState *sprite);

// Poll the CAMP transition: not complete while its last item is still animating or its frame widget has not finished.
u32 frameTexPollTransitionComplete(void)
{
    FrameTexWork *work = g_frameTex;
    if (work->campCapturedLeft != 0 && work->campActive != 0) {
        if (frameAnimationGetBusy(&work->campItems[23]) != 0 || uiSpriteAdvanceAnimation(&work->campFrameWidget) == 0) {
            return 0;
        }
    }
    return 1;
}
}
