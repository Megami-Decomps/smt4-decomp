/* NON_MATCHING: register allocation and store form differ (retail post-increments each command word and keeps the clamped y in r0). */
#include "common.h"

/* A scissor rectangle and the size of the render target it is clamped to. */
struct ScissorState {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 x;
    /* 0x08 */ s32 y;
    /* 0x0C */ s32 width;
    /* 0x10 */ s32 height;
    /* 0x14 */ s32 targetWidth;
    /* 0x18 */ s32 targetHeight;
};

extern "C" {

/* Writes the GPU scissor commands (mode, then the clamped first and last corners) to `command` and
 * returns the end of the written words. */
u32 *FUN_005015b0(const ScissorState *scissor, u32 *command)
{
    s32 right = scissor->x + scissor->width - 1;
    s32 bottom = scissor->y + scissor->height - 1;
    s32 x;
    s32 y;

    *command++ = scissor->enabled ? 3 : 0;
    *command++ = 0x802F0065; /* scissor registers 0x65-0x67 */

    x = scissor->x;
    if (x < 0) {
        x = 0;
    } else if (x >= scissor->targetWidth) {
        x = scissor->targetWidth - 1;
    }
    y = scissor->y;
    if (y < 0) {
        y = 0;
    } else if (y >= scissor->targetHeight) {
        y = scissor->targetHeight - 1;
    }
    *command++ = x | (y << 16);

    *command = right < 0 ? 0 : right | ((bottom < 0 ? 0 : bottom) << 16);
    return command + 1;
}

} /* extern "C" */
