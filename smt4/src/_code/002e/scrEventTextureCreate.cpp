#include "common.h"
extern "C" {
u32 scrGetArg(u32 index);
float scriptReadStackValueAsFloat(u32 index);
u32 FUN_0030a0f0(u32 id, float value, float duration);
void eventTexSetJobParam(u32 handle);
void eventTexAddJob(u32 handle);
void scrSetResult(u32 value);
u32 scrEventTextureCreate(u32 argument)
{
    u32 id = scrGetArg(argument);
    float value = scriptReadStackValueAsFloat(1);
    u32 handle = FUN_0030a0f0(id, value, 15.0f);
    eventTexSetJobParam(handle);
    eventTexAddJob(handle);
    scrSetResult(handle);
    return 1;
}
}
