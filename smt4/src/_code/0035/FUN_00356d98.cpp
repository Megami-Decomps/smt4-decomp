/* NON_MATCHING: Command emission saves extra registers and groups the initial stores differently. */
#include "common.h"

// Emits the default fragment-operation registers, optionally enabling the color/depth buffers.
extern "C" u32* FUN_00356d98(u32* commands, s32 enableBuffers)
{
    *commands++ = 0;
    *commands++ = 0x10040;
    *commands++ = 0xE40100;
    *commands++ = 0x30100;
    *commands++ = 0x1010000;
    *commands++ = 0xF0101;
    *commands++ = 0;
    *commands++ = 0x10104;
    *commands++ = 0;
    *commands++ = 0x10105;
    *commands++ = 0xF40;
    *commands++ = 0xF0107;
    if (enableBuffers != 0) {
        *commands++ = 1;
        *commands++ = 0xF0111;
        *commands++ = 1;
        *commands++ = 0xF0110;
    }
    *commands++ = 0xF;
    *commands++ = 0x80310112;
    *commands++ = 0xF;
    *commands++ = 0;
    *commands++ = 0;
    *commands++ = 0;
    return commands;
}
