#include "common.h"

extern "C" {

void nn_gxlow_CTR_WriteHWRegsWithMask(u32 reg, u8 *values, u8 *masks, u32 count);

/* Forwards to nn_gxlow_CTR_WriteHWRegsWithMask, the function that follows it. */
void nn_gxlow_CTR_WriteHWRegsWithMaskForward(u32 reg, u8 *values, u8 *masks, u32 count)
{
    nn_gxlow_CTR_WriteHWRegsWithMask(reg, values, masks, count);
}

} /* extern "C" */
