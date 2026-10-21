#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void naviMainSetRequestPosition(f32 x, f32 y);

s32 scrCommSetNaviPosition(void)
{
    s32 x = scrGetArg(0);
    s32 y = scrGetArg(1);
    naviMainSetRequestPosition((f32)x, (f32)y);
    return 1;
}

} /* extern "C" */
