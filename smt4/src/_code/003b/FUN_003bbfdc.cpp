/* NON_MATCHING: ARMCC folds the format decrement into a shifted add and delays the mode load. */
#include "gfx/PackedRenderState.h"

extern "C" {
// Expand packed render parameters and reset the destination's per-frame state.
void FUN_003bbfdc(PackedRenderState* state, const PackedRenderParameters* parameters)
{
    for (s32 i = 0; i < 6; ++i) {
        state->values[i] = parameters->values[i];
    }
    state->active = 0;
    state->formatInfo.kind = parameters->kind;
    state->variant = parameters->variant;
    state->resource = parameters->resource;
    state->flags |= 0x40000000;
    state->formatInfo.format = (u8)((parameters->flags >> 2) & 7) - 1;
    if (parameters->flags & 1) {
        state->flags |= 0x10000;
    }
    if (parameters->flags & 2) {
        state->flags |= 0x20000;
    }
    state->offsetX = parameters->offsetX;
    state->offsetY = parameters->offsetY;
    state->phase = 0;
    state->timer = 0;
    state->mode &= ~0x3C;
    state->red = 0;
    state->green = 0;
    state->blue = 0;
    state->alpha = 0;
}
}
