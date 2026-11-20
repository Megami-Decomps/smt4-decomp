#include "common.h"

extern "C" {

int lmapRequestTimedEffect(u32 a, u32 b, int c);
int scrGetArg(...);

u32 FUN_0022298c(void)
{
    u32 a = scrGetArg(1);
    u32 b = scrGetArg(0);

    lmapRequestTimedEffect(b, a, 0);
    return 1;
}

} /* extern "C" */
