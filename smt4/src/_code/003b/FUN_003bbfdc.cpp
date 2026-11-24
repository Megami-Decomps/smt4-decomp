#include "gfx/PackedRenderState.h"

extern "C" {
// Expand packed render parameters and reset the destination's per-frame state.
void FUN_003bbfdc(PackedRenderState* state, const PackedRenderParameters* parameters)
{
    for (s32 i = 0; i < 6; ++i) {
        state->values[i] = parameters->values[i];
    }
    state->active = 0;
    state->modeFields.kind = parameters->kind;
    state->variant = parameters->variant;
    state->resource = parameters->resource;
    state->flags |= 0x40000000;
    u32 format = (parameters->flags >> 2) & 7;
    state->modeFields.format = format - 1;
    if (parameters->flags & 1) {
        state->flags |= 0x10000;
    }
    if (parameters->flags & 2) {
        state->flags |= 0x20000;
    }
    state->offsetX = parameters->offsetX;
    state->offsetY = parameters->offsetY;
    state->modeFields.unk2 = 0;
    state->phase = 0;
    state->timer = 0;
    state->modeFields.unk3 = 0;
    state->modeFields.unk4 = 0;
    state->modeFields.unk5 = 0;
    state->red = 0;
    state->green = 0;
    state->blue = 0;
    state->alpha = 0;
}
}
