/* NON_MATCHING: the colors are rebuilt from the channels as retail does, but armcc allocates eight saved registers and merges the 0x94..0x9C stores instead of retail's separate str. */
#include "gfx/FrameTransition.h"

extern "C" {
void FUN_00348c28(u32 enabled);
void frameTexStartTransition(u32 first, u32 second, u32 third);

/* Caches transition colors and channels, then starts the frame-texture transition. */
void FUN_0035c708(FrameTransitionColors *state, u32 first, u32 second, u32 thirdAlpha)
{
    u32 red = first >> 24;
    u32 green = (first >> 16) & 0xff;
    u32 blue = (first >> 8) & 0xff;
    state->red = red;
    state->green = green;
    state->blue = blue;
    state->firstAlpha = first & 0xff;
    state->secondAlpha = second & 0xff;
    state->thirdAlpha = thirdAlpha & 0xff;
    state->thirdColor = (red << 24) | (green << 16) | (blue << 8) | state->thirdAlpha;
    state->secondColor = (second & 0xffffff00) | state->secondAlpha;
    state->firstColor = (red << 24) | (green << 16) | (blue << 8) | state->firstAlpha;
    FUN_00348c28(1);
    frameTexStartTransition(state->firstColor, state->secondColor, state->thirdColor);
}
}
