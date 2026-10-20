#include "common.h"

extern "C" {

void FUN_00129d04(u32 reg, u8 *values, u8 *masks, u32 count);

/* Forwards to FUN_00129d04, the function that follows it. */
void FUN_00129d00(u32 reg, u8 *values, u8 *masks, u32 count)
{
    FUN_00129d04(reg, values, masks, count);
}

} /* extern "C" */
