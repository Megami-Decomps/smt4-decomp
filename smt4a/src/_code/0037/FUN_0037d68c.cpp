#include "common.h"

extern "C" {
void mapSetSceneState(s32 state);
void FUN_002750d8(s32 first, s32 second);
void FUN_00303460(s32 value);
}

extern "C" s32 FUN_0037d68c(void)
{
    mapSetSceneState(1);
    FUN_002750d8(0, 1);
    FUN_00303460(0);
    return 1;
}
