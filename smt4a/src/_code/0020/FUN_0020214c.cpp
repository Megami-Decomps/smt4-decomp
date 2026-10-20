#include "common.h"

extern "C" {

void FUN_0015325c(s32 a, s32 b, u32 c, s32 d, s32 e, s32 mode);

/* Calls FUN_0015325c with mode 4 and the single argument `c`. */
void FUN_0020214c(u32 c)
{
    FUN_0015325c(0, 0, c, 0, 0, 4);
}

} /* extern "C" */
