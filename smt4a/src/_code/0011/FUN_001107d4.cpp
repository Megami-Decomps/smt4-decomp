#include "common.h"

extern "C" {

void FUN_002fb57e(s32 first, u32 a, u32 b, u32 c);

/* Calls FUN_002fb57e with 1 as the leading argument. */
void FUN_001107d4(u32 a, u32 b, u32 c)
{
    FUN_002fb57e(1, a, b, c);
}

} /* extern "C" */
