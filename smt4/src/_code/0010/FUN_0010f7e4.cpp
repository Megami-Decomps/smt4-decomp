#include "common.h"

extern "C" {

int FUN_0011bba0(const char *prefix, u32 a, u32 b, u32 c, u32 d, u32 e);

/* Forwards its five arguments after the "rom:" prefix. */
void FUN_0010f7e4(u32 a, u32 b, u32 c, u32 d, u32 e)
{
    FUN_0011bba0("rom:", a, b, c, d, e);
}

} /* extern "C" */
