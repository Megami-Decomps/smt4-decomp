#include "common.h"

extern "C" {

s32 FUN_00188b30(void);

/* Returns whether FUN_00188b30 reports 4. */
u8 FUN_0016f144(void)
{
    return FUN_00188b30() == 4;
}

} /* extern "C" */
