#include "common.h"

extern "C" {

extern u32 DAT_005b3cec[];

/* Returns entry `index` of the table at 0x5B3CEC. */
u32 FUN_00154c94(s32 index)
{
    return DAT_005b3cec[index];
}

} /* extern "C" */
