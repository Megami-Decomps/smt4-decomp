#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
u32 scrGetArg(u32 index);
s32 FUN_002f4f24(u32 argument);
bool FUN_002cd9c0(void)
{
    bool result = false;
    u32 argument = scrGetArg(0);
    if (FUN_002f4f24(argument) != 0) {
        result = true;
    }
    return result;
}
}
