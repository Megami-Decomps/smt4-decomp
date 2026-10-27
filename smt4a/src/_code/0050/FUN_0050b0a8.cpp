#include "common.h"

extern "C" {

void FUN_0050b0b0(u32 a, u32 b, u32 c, u32 d);

/* Calls FUN_0050b0b0 with a fourth argument of 2 (placed right after, so the call is a linker NOP). */
void FUN_0050b0a8(u32 a, u32 b, u32 c)
{
    FUN_0050b0b0(a, b, c, 2);
}

} /* extern "C" */
