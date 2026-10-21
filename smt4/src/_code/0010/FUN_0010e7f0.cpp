/* NON_MATCHING: retail also copies 84 bytes of constant data into an otherwise unused stack area; original aggregate purpose is unresolved. */
#include "common.h"

extern "C" {

extern void FUN_002bc7f4(u32 parameter, u32 *value);

/* Queries the graphics parameters used by the renderer. */
void FUN_0010e7f0(void)
{
    u32 values[15];
    FUN_002bc7f4(0x201, &values[0]);
    FUN_002bc7f4(0x202, &values[3]);
    FUN_002bc7f4(0x203, &values[4]);
    FUN_002bc7f4(0x204, &values[5]);
    FUN_002bc7f4(0x205, &values[6]);
    FUN_002bc7f4(0x206, &values[7]);
    FUN_002bc7f4(0x207, &values[8]);
    FUN_002bc7f4(0x208, &values[9]);
    FUN_002bc7f4(0x209, &values[10]);
    FUN_002bc7f4(0x20A, &values[11]);
    FUN_002bc7f4(0x20B, &values[12]);
    FUN_002bc7f4(0x20C, &values[13]);
    FUN_002bc7f4(0x20D, &values[1]);
    FUN_002bc7f4(0x20E, &values[14]);
}

} /* extern "C" */
