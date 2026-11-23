/* NON_MATCHING: the color unpacks through effectColorUnpack like asdGxSetEffectColorFromRGBA8; retail extracts the
 * middle bytes with masks (`and #0xFF0000; lsr #16`) where the helper shifts left first, and pools the register
 * index's address before the 0x804F02C0 word. */
#include "gfx/EffectColorMath.h"

extern "C" {

extern u8 DAT_00490e46;

/* Appends a GPU command writing a packed RGBA color as a float vector in the GPU's reversed component order
 * (alpha, blue, green, red). Returns the new cursor. */
u32 *gpuWriteUniformColor(u32 *cursor, u32 color)
{
    EffectColor value = effectColorUnpack(color);
    f32 *floats;

    *cursor++ = DAT_00490e46 | 0x80000000;
    *cursor++ = 0x804F02C0;
    floats = (f32 *)cursor;
    *floats++ = value.alpha;
    *floats++ = value.blue;
    *floats++ = value.green;
    *floats++ = value.red;
    return (u32 *)floats;
}

} /* extern "C" */
