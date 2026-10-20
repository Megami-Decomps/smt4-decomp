#include "common.h"

extern "C" {

extern u8 DAT_0053d838[];

/* Returns byte `index` of the table at 0x53D838. */
u8 FUN_00202178(s32 index)
{
    return DAT_0053d838[index];
}

} /* extern "C" */
