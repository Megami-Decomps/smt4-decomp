#include "gfx/PicaCommand.h"
#include "shard/W6_W6Match8_GpuDepth.h"

extern "C" {
u32 *gxEmitFramebufferAccessMasks(u32 *state, u32 *commands, s32 enabled);

/* Emits depth configuration commands and optionally appends the owner's color-state commands. */
u32 *gpuEmitDepthBufferCommands(const GpuDepthState *state, u32 *commands, s32 emitColor, s32 reset)
{
    if (state->enabled) {
        *commands++ = 0xe40103;
        *commands++ = 0x10100;
        commands = gpuEmitTextureResetPrefix(commands, reset);

        /* The shadow depth bias retains the upper 23 bits of the unorm value. */
        u32 depthBias = gpuDepthEncodeUnorm24(state->depth) >> 1;
        *commands++ = (state->inverted == 0) | (depthBias << 1);
        *commands++ = 0xf008b;
        *commands++ = (u32)gpuDepthEncodeHalf(state->offset + state->range) |
                      ((u32)gpuDepthEncodeHalf(-state->offset) << 16);
        *commands++ = 0xf0130;
    }
    return emitColor ? gxEmitFramebufferAccessMasks(&state->owner->colorState, commands, 1) : commands;
}
} /* extern "C" */
