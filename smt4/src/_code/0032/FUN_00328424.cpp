#include "common.h"

extern "C" {

extern int FUN_002bfde4(u32 mode);

u8 FUN_00328424(void)
{
    return FUN_002bfde4(0) != 0;
}

} /* extern "C" */
