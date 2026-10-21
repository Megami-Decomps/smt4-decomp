/* NON_MATCHING: compiler moves the live command cursor to R0, changes packet stores and synthesizes the final header instead of loading it. */
#include "shard/W6_W6Match8_GpuDepth.h"

struct GpuLogicState {
    u8 enabled;
    u8 operation;
    u8 unk02[2];
    GpuDepthOwner* owner;
};

extern "C" {
u32* gxEmitFramebufferAccessMasks(u32* settingsWord, u32* commands, s32 flush);

u32* FUN_00500e74(const GpuLogicState* state, u32* commands, s32 emitColor)
{
    if (state->enabled) {
        commands[0] = 0xe40000;
        commands[1] = 0x30100;
        commands[2] = 0x1010000;
        commands[3] = 0xf0101;
        commands[4] = state->operation;
        commands[5] = 0xf0102;
        commands += 6;
    }
    if (emitColor) {
        return gxEmitFramebufferAccessMasks(&state->owner->colorState, commands, 1);
    }
    return commands;
}
}
