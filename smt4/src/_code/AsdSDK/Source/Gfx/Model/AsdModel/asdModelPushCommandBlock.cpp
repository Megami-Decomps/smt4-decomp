#include "common.h"

extern "C" {

void nnnstdMemCpy(void *dst, const void *src, s32 size);

extern u8 *g_commandBufferCursor;
extern u8 g_asdModelCommandBlockTemplate[0x170];

/* Appends the 0x170-byte template block to the command buffer and advances the write cursor. */
void asdModelPushCommandBlock(void)
{
    nnnstdMemCpy(g_commandBufferCursor, g_asdModelCommandBlockTemplate, 0x170);
    g_commandBufferCursor += 0x170;
}

} /* extern "C" */
