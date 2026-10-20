#include "common.h"

extern "C" {

void FUN_002fb570(s32 first, u32 a, u32 b, u32 c);

/* Calls FUN_002fb570 with 0 as the leading argument. */
void FUN_002eed44(u32 a, u32 b, u32 c)
{
    FUN_002fb570(0, a, b, c);
}

} /* extern "C" */
