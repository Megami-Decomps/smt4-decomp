#include "common.h"

extern "C" {
s32 scrGetArg(s32 index);
void naviMainSetFlagsAndActivate(u8 first, u8 second, s32 third, s32 fourth, s32 fifth, s32 sixth);

// Dispatches two script byte arguments with the remaining options cleared.
u32 FUN_0035ce64(void)
{
    s32 first = scrGetArg(0);
    s32 second = scrGetArg(1);
    naviMainSetFlagsAndActivate(static_cast<u8>(first), static_cast<u8>(second), 0, 0, 0, 0);
    return 1;
}
}
