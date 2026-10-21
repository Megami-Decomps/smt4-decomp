#include "common.h"

extern "C" {
s32 scrGetArg(s32 index);
void FUN_0028529c(u8 first, u8 second, s32 third, s32 fourth, s32 fifth, s32 sixth);

// Dispatches two script byte arguments with the remaining options cleared.
u32 FUN_002e287c(void)
{
    s32 first = scrGetArg(0);
    s32 second = scrGetArg(1);
    FUN_0028529c(static_cast<u8>(first), static_cast<u8>(second), 0, 0, 0, 0);
    return 1;
}
}
