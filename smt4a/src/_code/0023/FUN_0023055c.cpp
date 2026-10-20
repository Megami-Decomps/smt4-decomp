#include "common.h"

extern "C" {

s32 FUN_002c7e3c(void);
s32 FUN_002c7e54(void);

/* Returns 0 when FUN_002c7e54 reports 5, 6, 7, 0xC or 0xB, or FUN_002c7e3c reports 8, 9 or 3; otherwise 1. */
u32 FUN_0023055c(void)
{
    s32 value;
    u32 result;

    value = FUN_002c7e54();
    if (((((value == 5) || (value = FUN_002c7e54(), value == 6)) ||
          (value = FUN_002c7e54(), value == 7)) ||
         ((value = FUN_002c7e54(), value == 0xC || (value = FUN_002c7e54(), value == 0xB)))) ||
        ((value = FUN_002c7e3c(), value == 8 ||
          ((value = FUN_002c7e3c(), value == 9 || (value = FUN_002c7e3c(), value == 3)))))) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
