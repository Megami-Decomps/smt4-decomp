#include "common.h"

extern "C" {

extern u32 *DAT_005b3fe4; /* model command buffer */
extern int DAT_005b3fe8;  /* words used in the buffer */

extern void cursorResetFromParam(void);
extern void asdModelCommandBlockRelease(void);

/* Appends a two-word command (four packed bytes, then the 0xF00C3 opcode word) to the model command block. */
void modelCmdAppendPacked(u32 a, int b, int c, int d)
{
    u32 command;

    cursorResetFromParam();
    command = a | (b << 8) | (c << 16) | (d << 24);
    DAT_005b3fe4[DAT_005b3fe8] = command;
    DAT_005b3fe4[DAT_005b3fe8 + 1] = 0xF00C3;
    DAT_005b3fe8 += 2;
    asdModelCommandBlockRelease();
}

} /* extern "C" */
