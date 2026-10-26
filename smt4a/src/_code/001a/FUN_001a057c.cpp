/* NON_MATCHING: the component-copy loop now matches retail's bottom-tested form; the command-header stores are scheduled differently (retail pairs words 3 and the length header in one stm). */
#include "common.h"

// Append vertex-shader float uniforms in the GPU's reversed component order.
extern "C" u32 *FUN_001a057c(u32 *commands, u32 firstUniform, const f32 (*vectors)[4], s32 count)
{
    const u32 *first = (const u32 *)vectors;
    *commands++ = firstUniform | 0x80000000;
    *commands++ = 0xf02c0;
    *commands++ = first[3];
    *commands++ = (((u32)count * 4 - 1) << 20) | 0xf02c1;
    *commands++ = first[2];
    *commands++ = first[1];
    *commands++ = first[0];
    s32 remaining = count - 1;
    if (remaining > 0) {
        const f32 *w = &vectors[1][3];
        const f32 *z = &vectors[1][2];
        const f32 *y = &vectors[1][1];
        const f32 *x = &vectors[1][0];
        f32 *output = (f32 *)commands;
        for (; remaining > 0; --remaining) {
            output[0] = *w;
            output[1] = *z;
            output[2] = *y;
            output[3] = *x;
            w += 4;
            z += 4;
            y += 4;
            x += 4;
            output += 4;
        }
        commands += count * 4 - 4;
    }
    *commands++ = 0;
    return commands;
}
