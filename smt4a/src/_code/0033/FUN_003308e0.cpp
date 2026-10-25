#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
u32 scrGetArg(u32 index);
s32 FUN_0037a5d4(u32 argument);
bool FUN_003308e0(void)
{
    bool result = false;
    u32 argument = scrGetArg(0);
    if (FUN_0037a5d4(argument) != 0) {
        result = true;
    }
    return result;
}
}
