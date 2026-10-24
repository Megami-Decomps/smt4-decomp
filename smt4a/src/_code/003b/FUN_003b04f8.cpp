#include "common.h"

extern "C" void mapSetSceneState(s32 value);

extern "C" s32 FUN_003b04f8(void)
{
    mapSetSceneState(45);
    return 1;
}
