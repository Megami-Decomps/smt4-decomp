#include "common.h"

extern "C" {

void FUN_001702b0(u32 reg, u8 *values, u8 *masks, u32 count);

/* Forwards to FUN_001702b0, the function that follows it. */
void FUN_001702ac(u32 reg, u8 *values, u8 *masks, u32 count)
{
    FUN_001702b0(reg, values, masks, count);
}

} /* extern "C" */
