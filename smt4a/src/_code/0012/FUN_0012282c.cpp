#include "common.h"

extern "C" {

void FUN_0012284c(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, s32 zero, u32 h, u32 i);

/* Forwards its nine arguments to FUN_0012284c, inserting a 0 as the eighth. */
void FUN_0012282c(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i)
{
    FUN_0012284c(a, b, c, d, e, f, g, 0, h, i);
}

} /* extern "C" */
