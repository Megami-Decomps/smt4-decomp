#include "common.h"

extern "C" {

void FUN_0015325c(s32 a, s32 b, u32 c, u32 d, u32 e, s32 mode);

/* Forwards its three arguments to FUN_0015325c with mode 4. */
void FUN_0013c174(u32 c, u32 d, u32 e)
{
    FUN_0015325c(0, 0, c, d, e, 4);
}

} /* extern "C" */
