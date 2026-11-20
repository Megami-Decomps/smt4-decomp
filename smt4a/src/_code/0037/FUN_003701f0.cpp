#include "common.h"

extern "C" void lmapCameraSetMode(s32 value);

extern "C" s32 FUN_003701f0(void)
{
    lmapCameraSetMode(29);
    return 1;
}
