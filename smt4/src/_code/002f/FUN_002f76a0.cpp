#include "common.h"

extern "C" {

extern u32 DAT_00435d18;

s32 FUN_00246f18(u32 value);

/* Script condition: FUN_00246f18 accepts DAT_00435d18. */
s32 FUN_002f76a0(void)
{
    return FUN_00246f18(DAT_00435d18) != 0;
}

} /* extern "C" */
