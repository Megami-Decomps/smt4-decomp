/* NON_MATCHING: retail loads the command header before choosing the mode word, shifts the clamped y inside its clamp
   branch (keeping the word in r0) and post-increments the third store; the rest matches. */
#include "gfx/GxRenderArea.h"


extern "C" {

/* Writes the GPU scissor commands (mode, then the clamped first and last corners) to `command` and
 * returns the end of the written words. */
u32 *FUN_005015b0(const ScissorState *scissor, u32 *command)
{
    s32 right = scissor->x + scissor->width - 1;
    s32 bottom = scissor->y + scissor->height - 1;
    s32 x;
    s32 y;

    if (scissor->enabled)
        *command++ = 3;
    else
        *command++ = 0;
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
