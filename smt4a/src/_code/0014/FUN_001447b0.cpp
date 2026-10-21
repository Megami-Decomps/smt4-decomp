/* NON_MATCHING: retail also copies 84 bytes of constant data into an otherwise unused stack area; original aggregate purpose is unresolved. */
#include "common.h"

extern "C" {

extern void gxGetCommandListParameter(u32 parameter, u32 *value);

/* Queries the graphics parameters used by the renderer. */
void FUN_001447b0(void)
{
    u32 values[15];
    gxGetCommandListParameter(0x201, &values[0]);
    gxGetCommandListParameter(0x202, &values[3]);
    gxGetCommandListParameter(0x203, &values[4]);
    gxGetCommandListParameter(0x204, &values[5]);
    gxGetCommandListParameter(0x205, &values[6]);
    gxGetCommandListParameter(0x206, &values[7]);
    gxGetCommandListParameter(0x207, &values[8]);
    gxGetCommandListParameter(0x208, &values[9]);
    gxGetCommandListParameter(0x209, &values[10]);
    gxGetCommandListParameter(0x20A, &values[11]);
    gxGetCommandListParameter(0x20B, &values[12]);
    gxGetCommandListParameter(0x20C, &values[13]);
    gxGetCommandListParameter(0x20D, &values[1]);
    gxGetCommandListParameter(0x20E, &values[14]);
}

} /* extern "C" */
