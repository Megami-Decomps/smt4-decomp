#include "common.h"

extern "C" {

void FUN_00103f54(u32 a, u32 b, s32 c, s32 d);
u32 FUN_0010ed0c(u32 a, u32 b);

/* Calls FUN_00103f54(b, FUN_0010ed0c(a, c), 0, 1). */
void FUN_002f7cba(u32 a, u32 b, u32 c)
{
    u32 value;

    value = FUN_0010ed0c(a, c);
    FUN_00103f54(b, value, 0, 1);
}

} /* extern "C" */
