/* NON_MATCHING: the quantized offset loads near, far and scale into other VFP registers (armcc pairs far/near into vldmia), the two paths' final stores are merged into the other copy, and the 24-bit branch keeps its own encoder copy with the division by 16777215 that armcc folds into a multiply. */
#include "gfx/GpuDepthRange.h"

extern "C" {

/* Writes the depth-range commands (scale register 0x6D, offset register 0x6E, float24 each) into
 * the command buffer and returns the position after them. */
u32 *gpuDepthRangeEmitCommands(const GpuDepthRange *range, u32 *commands)
{
    if (range->mode == 0.0f) {
        *commands++ = 1;
        *commands++ = 0xF006D;
        *commands++ = gpuEncodeFloat24Flush(range->farValue - range->nearValue);
        *commands++ = 0xF004D;
        f32 offset;
        if (!range->quantized) {
            offset = range->farValue;
        } else {
            offset = range->farValue - ((range->farValue - range->nearValue) * 128.0f * range->scale) / (f32)((1 << range->bits) - 1);
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
        if (range->bits == 24)
            offset = (range->scale * 128.0f) / 16777215.0f;
        else
            offset = range->scale / (f32)((1 << range->bits) - 1);
        quantizedOffset = (f32)gpuEncodeFloat24Flush(offset);
    }
    commands[0] = (u32)quantizedOffset;
    commands[1] = 0xF004E;
    return commands + 2;
}

} /* extern "C" */
