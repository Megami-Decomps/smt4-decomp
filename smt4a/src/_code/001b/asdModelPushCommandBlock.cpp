#include "common.h"

extern "C" {

void nnnstdMemCpy(s32 dest, u8 *source, s32 size);
extern s32 g_commandBufferCursor;
extern u8 g_asdModelCommandBlockTemplate[];

/* Copies the 0x170-byte block at 0x5C0B50 to the address at g_commandBufferCursor and advances that address. */
void asdModelPushCommandBlock(void)
{
    nnnstdMemCpy(g_commandBufferCursor, g_asdModelCommandBlockTemplate, 0x170);
    g_commandBufferCursor = g_commandBufferCursor + 0x170;
}

} /* extern "C" */
