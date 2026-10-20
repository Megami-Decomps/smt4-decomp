#include "common.h"

extern "C" {

extern u8 DAT_0063cfc8[];

/* Returns byte `index` of the table at 0x63CFC8. */
u8 FUN_0019ea4c(s32 index)
{
    return DAT_0063cfc8[index];
}

} /* extern "C" */
