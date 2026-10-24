#include "common.h"

extern "C" {

void FUN_004fdcd8(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);

/* Script command: calls FUN_004fdcd8 with zeros and two 7s. */
u32 FUN_0039dfbc(void)
{
    FUN_004fdcd8(0, 0, 0, 0, 7, 0, 7, 0);
    return 1;
}

} /* extern "C" */
