#include "shard/Shard003A.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void mapGimicPlayMotionById(s32 a, u32 b);

/* Script command: mapGimicPlayMotionById(arg0, arg1). */
u32 scrCommMapGimicPlayMotion(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);

    mapGimicPlayMotionById(a, b);
    return 1;
}

} /* extern "C" */
