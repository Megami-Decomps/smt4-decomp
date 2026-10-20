#include "common.h"

extern "C" {

void FUN_0017ffa8(s32 a, s32 b, u32 c, u32 d, u32 e, u32 f);

/* Forwards its four arguments to FUN_0017ffa8 after (2, 0xB). */
void FUN_00167860(u32 c, u32 d, u32 e, u32 f)
{
    FUN_0017ffa8(2, 0xB, c, d, e, f);
}

} /* extern "C" */
