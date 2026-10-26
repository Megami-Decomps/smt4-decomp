#include "common.h"

extern "C" {
extern const char *DAT_00471b5c;
s32 FUN_0011b940(const char *name, u32 saveId);
void FUN_002bb648(s32 result, u32 location, u32 failed);
}

static __inline void reportResult(s32 result, u32 location)
{
    u32 failed = static_cast<u32>(result) >> 31;
    if (failed)
        FUN_002bb648(result, location, failed);
}

extern "C" {
void FUN_0010fc28(void)
{
    s32 result = FUN_0011b940(DAT_00471b5c, 0xF000000B);
    if ((s32)(result & 0x80000000) < 0) {
        reportResult(result, __current_pc());
    }
}
}
