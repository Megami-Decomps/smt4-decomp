/* NON_MATCHING: compiler keeps the boolean in r0 instead of retail's preserved r4 accumulator. */
#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
u32 scrGetArg(u32 index);
s32 FUN_002f4f24(u32 argument);
bool FUN_002cd9c0(void)
{
    u32 argument = scrGetArg(0);
    return FUN_002f4f24(argument) != 0;
}
}
