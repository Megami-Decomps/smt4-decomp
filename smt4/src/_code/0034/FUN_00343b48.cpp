#include "common.h"

extern "C" {

extern u8 *FUN_002bbb5c(void);

void FUN_00343b48(void)
{
    u8 *block = FUN_002bbb5c();

    block[0x10] = 1;
}

} /* extern "C" */
