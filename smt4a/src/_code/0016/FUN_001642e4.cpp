#include "common.h"

extern "C" {

void FUN_0015325c(s32 a, s32 b, u32 c, u32 d, u32 e, u32 f);

/* Forwards its four arguments to FUN_0015325c after two zeros. */
void FUN_001642e4(u32 c, u32 d, u32 e, u32 f)
{
    FUN_0015325c(0, 0, c, d, e, f);
}

} /* extern "C" */
