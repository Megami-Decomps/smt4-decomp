/* NintendoWare gfx's shader command building (nw::gfx::ShaderBinaryInfo): the bounded write
 * cursor its command builders fill and the register command they append. */
#ifndef GFX_SHADER_SAFE_BUFFER_H
#define GFX_SHADER_SAFE_BUFFER_H

#include "common.h"
#include <stddef.h>

/* The bounded write cursor: SafeBuffer_Write copies into cursor and advances it while the data
 * fits before end, else it sets failed. */
struct ShaderSafeBuffer {
    ShaderSafeBuffer(void *buffer, u32 size)
        : start((u8 *)buffer), cursor((u8 *)buffer), end((u8 *)buffer + size), failed(false) {}

    /* 0x00 */ u8 *start;
    /* 0x04 */ u8 *cursor;
    /* 0x08 */ u8 *end;
    /* 0x0C */ u8 failed;
};

/* One register write: the value, then its command header. */
struct ShaderRegisterCommand {
    /* 0x00 */ u32 value;
    /* 0x04 */ u32 header;
};

/* The part of the shader binary info the common-command builder reads. */
struct ShaderCommandWork {
    /* 0x000 */ u8 prefix[0x90];
    /* 0x090 */ u8 data[0x200];
    /* 0x290 */ u32 count;
    /* 0x294 */ s32 dualPass;     /* > 0: a geometry pass follows */
};

typedef char ShaderSafeBufferLayoutCheck[offsetof(ShaderSafeBuffer, failed) == 0xC &&
    offsetof(ShaderCommandWork, count) == 0x290 && offsetof(ShaderCommandWork, dualPass) == 0x294 ? 1 : -1];

#endif
