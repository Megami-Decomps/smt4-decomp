/* NON_MATCHING: packed render-state expansion scheduling differs from retail. */
#include "common.h"

namespace {
struct PackedSpriteSource {
    u32 flags;
    u8 variant, kind, unk06[2];
    u32 resource;
    u8 unk0C[8];
    u16 values[6];
    u16 bounds[4];
};
/* Local view extends beyond the shared PackedRenderState's recovered boundary. */
struct ExpandedSpriteState {
    u32 values[6];
    u32 flags;
    union {
        u32 word;
        struct { u8 unk00[3]; u8 format; } fields;
    } mode;
    u8 variant, kind, unk22[2];
    u32 resource;
    u16 phase, timer;
    u8 red, green, blue, alpha;
    u8 unk30[0xC];
    u8 active;
    u8 unk3D[0x17];
    u16 bounds[4];
    u8 unk5C[2];
    u16 parameter;
    u32 frame;
};
}

/* Expand a compact sprite record and reset its runtime animation state. */
extern "C" void FUN_004bb9c0(ExpandedSpriteState *state, const PackedSpriteSource *source)
{
    state->values[0] = source->values[0];
    state->values[1] = source->values[1];
    state->values[2] = source->values[2];
    state->values[3] = source->values[3];
    state->values[4] = source->values[4];
    state->values[5] = source->values[5];
    state->active = 0;
    state->variant = source->variant;
    state->kind = source->kind;
    state->resource = source->resource;
    state->flags |= 0x40000000;
    state->mode.fields.format = static_cast<u8>(((source->flags << 27) >> 29) - 1);
    if ((source->flags & 1) != 0)
        state->flags |= 0x10000;
    if ((source->flags & 2) != 0)
        state->flags |= 0x20000;
    state->bounds[0] = source->bounds[0];
    state->bounds[1] = source->bounds[1];
    state->bounds[2] = source->bounds[2];
    state->bounds[3] = source->bounds[3];
    state->phase = 0;
    state->timer = 0;
    state->mode.word &= ~0x7E;
    state->red = 0;
    state->green = 0;
    state->blue = 0;
    state->alpha = 0;
    state->parameter = static_cast<u8>((source->flags << 13) >> 24);
    state->frame = 0;
    state->mode.word = ((source->flags >> 12) & 0x80) | (state->mode.word & ~0x80);
    state->flags &= 0x7FFFFFFF;
}
