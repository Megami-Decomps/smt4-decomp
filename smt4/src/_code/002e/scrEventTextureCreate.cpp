#include "common.h"
extern "C" {
u32 scrGetArg(u32 index);
float FUN_00266b44(u32 index);
u32 FUN_0030a0f0(u32 id, float value, float duration);
void eventTexSetJobParam(u32 handle);
void FUN_00259528(u32 handle);
void scrSetResult(u32 value);
u32 scrEventTextureCreate(u32 argument)
{
    u32 id = scrGetArg(argument);
    float value = FUN_00266b44(1);
    u32 handle = FUN_0030a0f0(id, value, 15.0f);
    eventTexSetJobParam(handle);
    FUN_00259528(handle);
    scrSetResult(handle);
    return 1;
}
}
