/* NON_MATCHING: readable rebuild (identical logic); retail keeps the command pointer in r1 and computes the return value last, armcc here moves it to r0 first; retail also routes the final offset word through a float variable ((u32)(f32)encoded round trip, 0 when the offset is not quantized) and shares the float24 encode between all four values, which armcc here lays out differently. */
#include "gfx/GpuDepthRange.h"

extern "C" {

/* Writes the depth-range commands (scale register 0x6D, offset register 0x6E, float24 each) into
 * the command buffer and returns the position after them. */
u32 *FUN_00177abc(const GpuDepthRange *range, u32 *commands)
{
    u32 *cursor = commands;
    if (range->mode == 0.0f) {
        *cursor++ = 1;
        *cursor++ = 0xF006D;
        *cursor++ = gpuEncodeFloat24Flush(range->farValue - range->nearValue);
        *cursor++ = 0xF004D;
        f32 offset;
        if (!(!range->quantized)) {
            f32 steps = (f32)((1 << range->bits) - 1);
            offset = range->farValue - ((range->farValue - range->nearValue) * 128.0f * range->scale) / steps;
        } else {
            offset = range->farValue;
        }
        cursor[0] = gpuEncodeFloat24Flush(offset);
        cursor[1] = 0xF004E;
        return cursor + 2;
    }
    *cursor++ = 0;
    *cursor++ = 0xF006D;
    *cursor++ = gpuEncodeFloat24Flush(-range->mode);
    *cursor++ = 0xF004D;
    f32 quantizedOffset = 0.0f;
    if (range->quantized) {
        f32 offset;
        if (range->bits == 24)
            offset = (range->scale * 128.0f) / 16777215.0f;
        else
            offset = range->scale / (f32)((1 << range->bits) - 1);
        quantizedOffset = (f32)gpuEncodeFloat24Flush(offset);
    }
    cursor[0] = (u32)quantizedOffset;
    cursor[1] = 0xF004E;
    return cursor + 2;
}

} /* extern "C" */
