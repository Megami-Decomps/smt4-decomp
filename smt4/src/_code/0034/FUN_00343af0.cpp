#include "common.h"

extern "C" {

extern u8 *FUN_002bbb5c(void);

u8 FUN_00343af0(void)
{
    u8 *block = FUN_002bbb5c();

    return block[0x10] != 0;
}

} /* extern "C" */
