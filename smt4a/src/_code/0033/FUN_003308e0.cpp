/* NON_MATCHING: compiler keeps the boolean in r0 instead of retail's preserved r4 accumulator. */
#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
u32 scrGetArg(u32 index);
s32 FUN_0037a5d4(u32 argument);
bool FUN_003308e0(void)
{
    u32 argument = scrGetArg(0);
    return FUN_0037a5d4(argument) != 0;
}
}
