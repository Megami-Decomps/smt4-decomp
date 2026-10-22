#include "shard/Shard003A.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void mapGimicPlayMotionById(s32 a, u32 b);

/* Script command: mapGimicPlayMotionById(argN, arg1). */
u32 scrCommMapGimicPlayMotion(s32 argIndex)
{
    u32 a = scrGetArg(argIndex);
    u32 b = scrGetArg(1);

    mapGimicPlayMotionById(a, b);
    return 1;
}

} /* extern "C" */
