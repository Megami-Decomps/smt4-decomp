/* NON_MATCHING: command cursor register, exponent/NaN tests, and half-float temporary allocation differ from retail. */
#include "shard/W6_W6Match8_GpuDepth.h"

extern "C" {
u32 *FUN_002265ac(u32 *state, u32 *commands, s32 enabled);

// Emit depth configuration commands and optionally append the owner's color-state commands.
u32 *gpuEmitDepthBufferCommands(const GpuDepthState *state, u32 *commands, s32 emitColor, s32 reset)
{
    if (state->enabled) {
        *commands++ = 0xe40103;
        *commands++ = 0x10100;
        if (reset) {
            *commands++ = 0;
            *commands++ = 0x200080;
            *commands++ = 0;
            *commands++ = 0;
        }
        u32 depth = gpuDepthEncodeUnorm24(state->depth);
        *commands++ = static_cast<u32>(state->inverted == 0) | (depth & 0xfffffffe);
        *commands++ = 0xf008b;
        u32 farDepth = gpuDepthEncodeHalf(state->offset + state->range);
        u32 nearDepth = gpuDepthEncodeHalf(-state->offset);
        *commands++ = farDepth | (nearDepth << 16);
        *commands++ = 0xf0130;
    }
    if (emitColor) {
        return FUN_002265ac(&state->owner->colorState, commands, 1);
    }
    return commands;
}
}
