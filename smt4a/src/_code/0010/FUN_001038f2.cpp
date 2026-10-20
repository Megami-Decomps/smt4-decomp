#include "common.h"

extern "C" {

void FUN_0010d058(u32 a, u32 b);
void FUN_002e7a20(u32 a, u32 b, u32 c);

/* Runs FUN_0010d058 and FUN_002e7a20 on the same arguments. */
void FUN_001038f2(u32 a, u32 b, u32 c)
{
    FUN_0010d058(a, b);
    FUN_002e7a20(a, b, c);
}

} /* extern "C" */
