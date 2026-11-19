#include "shard/Shard003A.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void lmapRestoreSpawnPose(u32 a, u32 b, u32 c);

/* Script command: lmapRestoreSpawnPose(arg0, arg1, arg2). */
u32 FUN_003a7554(void)
{
    u32 c = scrGetArg(2);
    u32 b = scrGetArg(1);
    u32 a = scrGetArg(0);

    lmapRestoreSpawnPose(a, b, c);
    return 1;
}

} /* extern "C" */
