#include "common.h"

extern "C" {

extern u32 DAT_0044e328;

/* Returns the pending value and clears it. */
u32 FUN_002bf0dc(void)
{
    u32 value = DAT_0044e328;

    DAT_0044e328 = 0;
    return value;
}

} /* extern "C" */
