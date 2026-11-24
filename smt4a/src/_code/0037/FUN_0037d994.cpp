#include "shard/W5_W5Match7_ResourceHandles.h"
#include "ui/PartnerTopic.h"

struct PositionedMenuDrawWork;

extern "C" {

s32 FUN_003f7f90(PositionedMenuDrawWork *owner, s32 value);

s32 FUN_0037d994(u32 handle)
{
    if (g_engineResourceHandles.secondary != NULL) {
        FUN_003f7f90((PositionedMenuDrawWork *)g_engineResourceHandles.secondary, handle);
    }
    return 0;
}

} /* extern "C" */
