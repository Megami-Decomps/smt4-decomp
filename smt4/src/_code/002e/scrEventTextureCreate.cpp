#include "common.h"
extern "C" {
u32 scrGetArg(u32 index);
float scriptReadStackValueAsFloat(u32 index);
u32 eventCreateResourceBattleTexture(u32 id, float value, float duration);
void eventTexSetJobParam(u32 handle);
void eventTexAddJob(u32 handle);
void scrSetResult(u32 value);
u32 scrEventTextureCreate(void)
{
    u32 id = scrGetArg(0);
    float value = scriptReadStackValueAsFloat(1);
    u32 handle = eventCreateResourceBattleTexture(id, value, 15.0f);
    eventTexSetJobParam(handle);
    eventTexAddJob(handle);
    scrSetResult(handle);
    return 1;
}
}
