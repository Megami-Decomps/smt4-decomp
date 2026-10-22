#include "common.h"

extern "C" {

extern void nn_gxlow_CTR_SetBufferSwap(u32, u32, u32, u32, u32, u32, u32);

/* Forwards the complete display-buffer swap descriptor. */
void gxSetBufferSwap(u32 display, u32 first, u32 second, u32 stride, u32 format, u32 mode, u32 flags)
{
    nn_gxlow_CTR_SetBufferSwap(display, first, second, stride, format, mode, flags);
}

} /* extern "C" */
