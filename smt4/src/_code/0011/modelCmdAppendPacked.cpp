#include "common.h"
#include "code/Code0011_Smt4.h"

extern "C" {

extern u32 *g_modelCommandBuffer; /* model command buffer */
extern int g_modelCommandWordCount;  /* words used in the buffer */

extern void cursorResetFromParam(void);
extern void asdModelCommandBlockRelease(void);

/* Appends a two-word command (four packed bytes, then the 0xF00C3 opcode word) to the model command block. */
void modelCmdAppendPacked(u32 a, int b, int c, int d)
{
    u32 command;

    cursorResetFromParam();
    command = a | (b << 8) | (c << 16) | (d << 24);
    g_modelCommandBuffer[g_modelCommandWordCount] = command;
    g_modelCommandBuffer[g_modelCommandWordCount + 1] = 0xF00C3;
    g_modelCommandWordCount += 2;
    asdModelCommandBlockRelease();
}

} /* extern "C" */
