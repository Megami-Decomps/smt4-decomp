#include "gfx/PicaCommand.h"

/* Emits the default texture-unit configuration. */
extern "C" u32 *FUN_0042cbd8(u32 *output, u32 includePrefix)
{
    output = gpuEmitTextureResetPrefix(output, includePrefix);
    *output++ = 0x13000;
    *output++ = 0xF0080;
    return output;
}
