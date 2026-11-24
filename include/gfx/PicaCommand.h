/* The PICA200 GPU's command words: a command is a parameter word followed by a header word holding
 * the register id (bits 0-15) and the mask of the parameter bytes written (bits 16-19). */
#ifndef GFX_PICACOMMAND_H
#define GFX_PICACOMMAND_H

#include "common.h"

/* Header byte-enable mask: write all four bytes of the parameter. */
enum {
    PICA_COMMAND_WRITE_ALL_BYTES = 0xF0000
};

/* Register ids. */
enum {
    PICA_REG_BLEND_COLOR = 0x103 /* constant colour of the blend unit, RGBA8 */
};

/* Emits the optional texture reset prefix before the register commands. */
static __inline u32 *gpuEmitTextureResetPrefix(u32 *commands, u32 reset)
{
    if (reset != 0) {
        *commands++ = 0;
        *commands++ = 0x200080;
        *commands++ = 0;
        *commands++ = 0;
    }
    return commands;
}

#endif
