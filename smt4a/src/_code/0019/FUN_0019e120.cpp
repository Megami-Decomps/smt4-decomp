#include "common.h"

extern "C" {

extern u32 DAT_0063cdc8[];

/* Returns entry `index` of the table at 0x63CDC8. */
u32 FUN_0019e120(s32 index)
{
    return DAT_0063cdc8[index];
}

} /* extern "C" */
