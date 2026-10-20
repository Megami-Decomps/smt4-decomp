/* NON_MATCHING: retail uses the flag-setting `adds r0, r0, #4`; the compiler emits a plain add here. */
#include "common.h"

extern "C" {

u8 *FUN_002c6a04(void);

/* Returns FUN_002c6a04() advanced by 4 bytes. */
u8 *FUN_002c6a50(void)
{
    return FUN_002c6a04() + 4;
}

} /* extern "C" */
