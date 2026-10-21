#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
s32 scrGetArg(u32 index);
u32 FUN_0030ac54(u32 id, u32 flags);
void bustupCutAnimSetJobParam(u32 handle);
void scrSetResult(u32 value);
u32 scrBustupStartAnimation(u32 argument)
{
    s32 id = scrGetArg(argument);
    if (id >= 232) {
        id = 0;
    }
    u32 handle = FUN_0030ac54(id, 0);
    if (handle != 0) { bustupCutAnimSetJobParam(handle); }
    scrSetResult(handle);
    return 1;
}
}
