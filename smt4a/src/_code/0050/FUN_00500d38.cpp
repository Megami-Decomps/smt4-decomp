/* NON_MATCHING: retail 48 vs built 49 rows; blend-state loads/stores and output-cursor registers differ. */
#include "common.h"

extern "C" {
u32 *gxEmitFramebufferAccessMasks(const void *, u32 *, s32);

u32 *FUN_00500d38(const void *blendState, u32 *commands, s32 appendAccess)
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
    commands[0] = 0xE40100;
    commands[1] = 0x30100;
    u32 *end;
    if (state->enabled) {
        commands[2] = state->equation[0] | (state->equation[1] << 8) |
                      (state->equation[2] << 16) | (state->destination << 20) |
                      (static_cast<u32>(state->source) << 24) | (static_cast<u32>(state->alpha) << 28);
        commands[3] = 0xF0101;
        commands[4] = 6;
        commands[5] = 0xF0102;
        commands[6] = state->color[0] | (state->color[1] << 8) |
                      (state->color[2] << 16) | (static_cast<u32>(state->colorAlpha) << 24);
        commands[7] = 0xF0103;
        end = commands + 8;
    } else {
        commands[2] = 0x1010000;
        commands[3] = 0xF0101;
        end = commands + 4;
    }
    if (appendAccess)
        return gxEmitFramebufferAccessMasks(state->owner->access, end, 1);
    return end;
}
}
