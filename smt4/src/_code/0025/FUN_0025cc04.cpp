#include "common.h"

extern "C" {

extern int FUN_0028d320(u32 value);
extern int FUN_002987d8(void);

u32 FUN_0025cc04(u32 unused, u32 value)
{
    u32 result;

    if ((FUN_002987d8() == 0) || (FUN_0028d320(value) != 0)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
