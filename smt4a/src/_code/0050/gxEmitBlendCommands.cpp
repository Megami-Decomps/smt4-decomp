/* NON_MATCHING: the words go through the cursor as retail's post-indexed stores do; armcc merges the three equation bytes into one word load (retail loads them one by one, as it does not for the colour), which costs four extra saved registers. */
#include "common.h"

extern "C" {
u32 *gxEmitFramebufferAccessMasks(const void *, u32 *, s32);

u32 *gxEmitBlendCommands(const void *blendState, u32 *commands, s32 appendAccess)
{
    struct FramebufferMasksView {
        u8 unk00[0x7C];
        u8 access[1];
    };
    struct BlendCommandStateView {
        u8 enabled;
        u8 equation[3];
        u8 source;
        u8 destination;
        u8 alpha;
        u8 color[3];
        u8 colorAlpha;
        u8 unk0B;
        FramebufferMasksView *owner;
    };
    const BlendCommandStateView *state = static_cast<const BlendCommandStateView *>(blendState);
    *commands++ = 0xE40100;
    if (state->enabled) {
        *commands++ = 0x30100;
        *commands++ = state->equation[0] | (state->equation[1] << 8) |
                      (state->equation[2] << 16) | (state->destination << 20) |
                      (static_cast<u32>(state->source) << 24) | (static_cast<u32>(state->alpha) << 28);
        *commands++ = 0xF0101;
        *commands++ = 6;
        *commands++ = 0xF0102;
        *commands++ = state->color[0] | (state->color[1] << 8) |
                      (state->color[2] << 16) | (static_cast<u32>(state->colorAlpha) << 24);
        *commands++ = 0xF0103;
    } else {
        *commands++ = 0x30100;
        *commands++ = 0x1010000;
        *commands++ = 0xF0101;
    }
    if (appendAccess)
        return gxEmitFramebufferAccessMasks(state->owner->access, commands, 1);
    return commands;
}
}
