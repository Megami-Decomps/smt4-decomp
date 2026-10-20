#include "common.h"

extern "C" {

void FUN_002fb570(s32 first, u32 a, u32 b, u32 c);

/* Calls FUN_002fb570 with 1 as the leading argument. */
void FUN_001107c4(u32 a, u32 b, u32 c)
{
    FUN_002fb570(1, a, b, c);
}

} /* extern "C" */
