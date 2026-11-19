#include "common.h"

extern "C" {

int lmapRestoreSpawnPose(u32 a, u32 b, u32 c);
extern u32 scrGetArg(u32 index);

u32 FUN_0031111c(void)
{
    u32 c = scrGetArg(2);
    u32 b = scrGetArg(1);
    u32 a = scrGetArg(0);

    lmapRestoreSpawnPose(a, b, c);
    return 1;
}

} /* extern "C" */
