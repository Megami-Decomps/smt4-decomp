#include "common.h"

extern "C" {

void FUN_0012333c(u32 a, u32 b, u32 c);

/* Drops the first argument and forwards the other three to FUN_0012333c. */
void FUN_002fb57e(u32 unused, u32 a, u32 b, u32 c)
{
    FUN_0012333c(a, b, c);
}

} /* extern "C" */
