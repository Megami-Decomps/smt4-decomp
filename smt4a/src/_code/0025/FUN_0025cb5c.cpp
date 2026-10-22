/* NON_MATCHING: the external name getter requires restoring the high title-ID word; retail keeps it live in r3. */
#include "common.h"

extern "C" {
void *FUN_00142b04(u32 request, u32 options);
s32 FUN_00429fcc(const char *name, u64 titleId);
void FUN_0013ebd8(s32 result);

extern u8 DAT_005b40c9;

s32 FUN_0025cb5c(u32 request, u32 options)
{
    void *context = FUN_00142b04(request, options);
    s32 result = FUN_00429fcc((const char *)context, ((u64)options << 32) | request);
    FUN_0013ebd8(result);

    if ((static_cast<u32>(result) & 0x80000000u) == 0) {
        DAT_005b40c9 = 1;
    }

    return result;
}
}
