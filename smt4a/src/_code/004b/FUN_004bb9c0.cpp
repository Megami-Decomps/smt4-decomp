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
    /* The mode word's bits, assigned one at a time as the table record initializer (FUN_004bbc4c) fills them:
     * bits 0-3, then phase and timer, then bits 4-6. */
    struct {
        u32 unk0 : 1;
        u32 unk1 : 1;
        u32 unk2 : 1;
        u32 unk3 : 1;
        u32 unk4 : 1;
        u32 unk5 : 1;
        u32 unk6 : 1;
        u32 unk7 : 1;
        u32 unk8 : 16;
        u32 format : 8;
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
    for (s32 i = 0; i < 6; i++) {
        state->values[i] = source->values[i];
    }
    state->active = 0;
    state->variant = source->variant;
    state->kind = source->kind;
    state->resource = source->resource;
    state->flags |= 0x40000000;
    u32 formatCode = (source->flags << 27) >> 29;
    state->mode.format = formatCode - 1;
    if ((source->flags & 1) != 0)
        state->flags |= 0x10000;
    if ((source->flags & 2) != 0)
        state->flags |= 0x20000;
    for (s32 i = 0; i < 4; i++) {
        state->bounds[i] = source->bounds[i];
    }
    state->mode.unk1 = 0;
    state->mode.unk2 = 0;
    state->mode.unk3 = 0;
    state->phase = 0;
    state->timer = 0;
    state->mode.unk4 = 0;
    state->mode.unk5 = 0;
    state->mode.unk6 = 0;
    state->red = 0;
    state->green = 0;
    state->blue = 0;
    state->alpha = 0;
    state->parameter = static_cast<u8>((source->flags << 13) >> 24);
    state->frame = 0;
    state->mode.unk7 = (source->flags >> 19) & 1;
    state->flags &= 0x7FFFFFFF;
}
