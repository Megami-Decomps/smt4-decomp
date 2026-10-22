/* NON_MATCHING: component stores, packed-color register allocation and the final branch form differ. */
#include "shard/FrameColorState.h"

extern "C" {
void FUN_0024ac7c(s32 enabled);
void FUN_002e2444(u32 first, u32 second, u32 third);

// Retain the color components and initialize the frame's three packed colors.
void FUN_002e23c0(FrameColorState *state, u32 first, u32 second, u32 third)
{
    state->highByte = first >> 24;
    state->upperMiddleByte = (first >> 16) & 0xff;
    state->lowerMiddleByte = (first >> 8) & 0xff;
    state->lowByte = first & 0xff;
    state->secondLowByte = second & 0xff;
    state->thirdLowByte = third & 0xff;
    state->thirdColor = state->thirdLowByte | (state->highByte << 24) |
                        (state->upperMiddleByte << 16) | (state->lowerMiddleByte << 8);
    state->secondColor = state->secondLowByte | (second & ~0xffu);
    state->firstColor = state->lowByte | (state->highByte << 24) |
                        (state->upperMiddleByte << 16) | (state->lowerMiddleByte << 8);
    FUN_0024ac7c(1);
    FUN_002e2444(state->firstColor, state->secondColor, state->thirdColor);
}
}
