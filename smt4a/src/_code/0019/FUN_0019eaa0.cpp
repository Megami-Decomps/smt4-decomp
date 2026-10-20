#include "common.h"

extern "C" {

extern u32 DAT_0063cec8[];

/* Returns entry `index` of the table at 0x63CEC8. */
u32 FUN_0019eaa0(s32 index)
{
    return DAT_0063cec8[index];
}

} /* extern "C" */
