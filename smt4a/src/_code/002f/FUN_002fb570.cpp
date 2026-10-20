#include "common.h"

extern "C" {

void FUN_001233b8(u32 a, u32 b, u32 c);

/* Drops the first argument and forwards the other three to FUN_001233b8. */
void FUN_002fb570(u32 unused, u32 a, u32 b, u32 c)
{
    FUN_001233b8(a, b, c);
}

} /* extern "C" */
