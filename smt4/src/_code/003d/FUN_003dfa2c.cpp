/* NON_MATCHING: packed-state command emission uses different pointer registers and constant synthesis. */
#include "common.h"

struct BlendRenderTarget {
    u8 unk00[0x7C];
    void *bufferState;
};
__packed struct PackedBlendState {
    u8 enabled;
    __packed union {
        u32 color;
        __packed struct { u8 rgb[3]; u8 alpha; } channels;
    } blend;
    u8 sourceFactor;
    u8 destinationFactor;
    __packed union {
        u32 color;
        __packed struct { u8 rgb[3]; u8 alpha; } channels;
    } constant;
    u8 unk0B;
    BlendRenderTarget *target;
};
extern "C" u32 *FUN_002265ac(void **, u32 *, s32);

/* Emit blend settings, optionally followed by the target's buffer write masks. */
extern "C" u32 *FUN_003dfa2c(const PackedBlendState *state, u32 *commands, s32 includeTarget)
{
    *commands++ = 0xE40100;
    if (state->enabled != 0) {
        *commands++ = 0x30100;
        *commands++ = (state->blend.color & 0xFFFFFF) |
            ((u32)state->sourceFactor << 20) |
            ((u32)state->blend.channels.alpha << 24) |
            ((u32)state->destinationFactor << 28);
        *commands++ = 0xF0101;
        *commands++ = 6;
        *commands++ = 0xF0102;
        *commands++ = (state->constant.color & 0xFFFFFF) |
            ((u32)state->constant.channels.alpha << 24);
        *commands++ = 0xF0103;
    } else {
        *commands++ = 0x30100;
        *commands++ = 0x1010000;
        *commands++ = 0xF0101;
    }
    if (includeTarget != 0) {
        return FUN_002265ac(&state->target->bufferState, commands, 1);
    }
    return commands;
}
