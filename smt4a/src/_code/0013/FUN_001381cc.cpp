#include "common.h"

extern "C" {

extern s8 DAT_00580200;

/* Returns the signed byte at 0x580200. */
s32 FUN_001381cc(void)
{
    return DAT_00580200;
}

} /* extern "C" */
