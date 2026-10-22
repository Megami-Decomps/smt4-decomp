/* NON_MATCHING: Retail repacks cached color channels before storing them; this build preserves the already-packed inputs and combines the stores. */
#include "gfx/FrameTransition.h"

extern "C" {
void FUN_00348c28(u32 enabled);
void frameTexStartTransition(u32 first, u32 second, u32 third);

/* Caches transition colors and channels, then starts the frame-texture transition. */
void FUN_0035c708(FrameTransitionColors *state, u32 first, u32 second, u32 thirdAlpha)
{
    state->red = first >> 24;
    state->green = (first >> 16) & 0xff;
    state->blue = (first >> 8) & 0xff;
    state->firstAlpha = first & 0xff;
    state->secondAlpha = second & 0xff;
    state->thirdAlpha = thirdAlpha & 0xff;
    state->thirdColor = (first & 0xffffff00) | state->thirdAlpha;
    state->secondColor = second;
    state->firstColor = first;
    FUN_00348c28(1);
    frameTexStartTransition(state->firstColor, state->secondColor, state->thirdColor);
}
}
