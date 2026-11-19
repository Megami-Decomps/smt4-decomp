/* NON_MATCHING: readable rebuild (identical logic); the command pointer now stays in r1 as in retail; remaining: inside the inlined float24 encoder retail reuses the `bics` result as its zero where armcc materializes a separate zero, which shifts the encoder blocks and the literal pool. */
#include "gfx/GpuDepthRange.h"

extern "C" {

/* Writes the depth-range commands (scale register 0x6D, offset register 0x6E, float24 each) into
 * the command buffer and returns the position after them. */
u32 *FUN_00177abc(const GpuDepthRange *range, u32 *commands)
{
    if (range->mode == 0.0f) {
        *commands++ = 1;
        *commands++ = 0xF006D;
        *commands++ = gpuEncodeFloat24Flush(range->farValue - range->nearValue);
        *commands++ = 0xF004D;
        f32 offset;
        if (!(!range->quantized)) {
            f32 steps = (f32)((1 << range->bits) - 1);
            offset = range->farValue - ((range->farValue - range->nearValue) * 128.0f * range->scale) / steps;
        } else {
            offset = range->farValue;
        }
        commands[0] = gpuEncodeFloat24Flush(offset);
        commands[1] = 0xF004E;
        return commands + 2;
    }
    *commands++ = 0;
    *commands++ = 0xF006D;
    *commands++ = gpuEncodeFloat24Flush(-range->mode);
    *commands++ = 0xF004D;
    f32 quantizedOffset = 0.0f;
    if (range->quantized) {
        f32 offset;
        offset = range->bits == 24
            ? (range->scale * 128.0f) / 16777215.0f
            : range->scale / (f32)((1 << range->bits) - 1);
        quantizedOffset = (f32)gpuEncodeFloat24Flush(offset);
    }
    commands[0] = (u32)quantizedOffset;
    commands[1] = 0xF004E;
    return commands + 2;
}

} /* extern "C" */
