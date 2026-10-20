#include "common.h"

extern "C" {

void FUN_00312830(u32 a, u32 b, s32 c, s32 d);

/* Calls FUN_00312830 with its two arguments plus 0x20 and 0x33706C. */
void FUN_00239404(u32 a, u32 b)
{
    FUN_00312830(a, b, 0x20, 0x33706C);
}

} /* extern "C" */
