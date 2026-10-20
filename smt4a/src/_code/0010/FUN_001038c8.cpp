#include "common.h"

extern "C" {

void FUN_002e791c(u32 a, u32 b, s32 c, u32 d, u32 e, u32 f, u32 g, u32 h, s32 i, s32 j);

/* Forwards its seven arguments to FUN_002e791c with zeros in the third, ninth and tenth slots. */
void FUN_001038c8(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g)
{
    FUN_002e791c(a, b, 0, c, d, e, f, g, 0, 0);
}

} /* extern "C" */
