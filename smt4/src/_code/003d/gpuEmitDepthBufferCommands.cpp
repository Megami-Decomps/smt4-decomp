/* NON_MATCHING: with the ternary return (the cursor stays in r1, copied to r0 only on the plain return) and nn::gr's Float32ToFloat16 the half-float fields match; retail packs the shadow depth word with lsr #1 / lsl #1 where armcc folds `(depth >> 1) << 1` into a bic (a separate `u32 field = depth >> 1;` statement reproduces it, 4 lines left), and loads the first command pair into lr/r0 rather than r0/lr. */
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
    return emitColor ? FUN_002265ac(&state->owner->colorState, commands, 1) : commands;
}
}
