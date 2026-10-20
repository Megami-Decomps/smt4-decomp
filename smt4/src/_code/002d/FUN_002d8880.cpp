#include "common.h"

extern "C" {

int FUN_002205a4(u32 a, u32 b, u32 c);
extern u32 scrGetArg(u32 index);

u32 FUN_002d8880(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);
    u32 c = scrGetArg(2);

    FUN_002205a4(a, b, c);
    return 1;
}

} /* extern "C" */
