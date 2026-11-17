#include "frame_tex/FrameTexA.h"

extern "C" {

s32 uiSpriteGetCompletionState(const UiSpriteState *sprite);

/* Whether the CAMP transition is complete: true unless it is running and either of its two closing widgets is still animating. */
u32 FUN_003309e0(void)
{
    const FrameTexWorkA *frame = g_frameTex;
    if (frame->campCapturedLeft != 0 && frame->campActive != 0) {
        if (uiSpriteGetCompletionState(&frame->campWidgets[0]) != 0 &&
            uiSpriteGetCompletionState(&frame->campWidgets[2]) != 0) {
            return 1;
        }
        return 0;
    }
    return 1;
}

}
