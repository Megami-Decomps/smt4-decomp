#include "common.h"

extern "C" {

void nn_gxlow_CTR_WriteHWRegs(u32 a, u32 b, u32 c);

/* Forwards to nn_gxlow_CTR_WriteHWRegs, the function that follows it. */
void nn_gxlow_CTR_WriteHWRegsForward(u32 a, u32 b, u32 c)
{
    nn_gxlow_CTR_WriteHWRegs(a, b, c);
}

} /* extern "C" */
