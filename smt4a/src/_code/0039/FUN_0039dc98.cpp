#include "common.h"

extern "C" {
u32 scrGetArg(u32 index);
u32 FUN_0031cfd0(u16 value);
void FUN_0031f0f4(u16 value, u32 index);
/* Applies both script parameters to the selected state. */
s32 FUN_0039dc98()
{
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    u32 base = FUN_0031cfd0((u16)first);
    FUN_0031f0f4((u16)first, base + second);
    return 1;
}
}
