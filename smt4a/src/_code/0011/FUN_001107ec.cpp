#include "common.h"

extern "C" {

void FUN_002fb57e(s32 first, u32 a, u32 b, u32 c);

/* Calls FUN_002fb57e with 0 as the leading argument. */
void FUN_001107ec(u32 a, u32 b, u32 c)
{
    FUN_002fb57e(0, a, b, c);
}

} /* extern "C" */
