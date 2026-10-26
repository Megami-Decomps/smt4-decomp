#include "common.h"
#include "code/Code0014_Smt4a.h"

extern "C" {

int FUN_001589a0(const char *prefix, u32 a, u32 b, u32 c, u32 d, u32 e);

/* Forwards its five arguments after the "rom:" prefix. */
void FUN_0014685c(u32 a, u32 b, u32 c, u32 d, u32 e)
{
    FUN_001589a0("rom:", a, b, c, d, e);
}

} /* extern "C" */
