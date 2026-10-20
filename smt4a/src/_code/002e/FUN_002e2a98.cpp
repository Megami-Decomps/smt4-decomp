/* NON_MATCHING: retail uses the flag-setting `adds r0, r0, #4`; the compiler emits a plain add here. */
#include "common.h"

extern "C" {

u8 *FUN_002e2ec0(void);

/* Returns FUN_002e2ec0() advanced by 4 bytes. */
u8 *FUN_002e2a98(void)
{
    return FUN_002e2ec0() + 4;
}

} /* extern "C" */
