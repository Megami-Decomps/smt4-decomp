#include "shard/W5_W5Match7_ResourceHandles.h"

struct PositionedMenuDrawWork;

extern "C" {

s32 FUN_003f7f90(PositionedMenuDrawWork *owner, s32 value);

s32 FUN_0037d994(s32 value)
{
    if (g_engineResourceHandles.secondary != NULL) {
        FUN_003f7f90(static_cast<PositionedMenuDrawWork *>(g_engineResourceHandles.secondary), value);
    }
    return 0;
}

} /* extern "C" */
