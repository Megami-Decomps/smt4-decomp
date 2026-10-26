#include "common.h"

extern "C" {
extern const char *DAT_005c0adc;
s32 FUN_00158624(const char *name, u32 saveId);
void FUN_0016e7c0(s32 result, u32 location, u32 failed);
}

static __inline void reportResult(s32 result, u32 location)
{
    u32 failed = static_cast<u32>(result) >> 31;
    if (failed)
        FUN_0016e7c0(result, location, failed);
}

extern "C" {
void FUN_00146d90(void)
{
    s32 result = FUN_00158624(DAT_005c0adc, 0xF000000B);
    if ((s32)(result & 0x80000000) < 0) {
        reportResult(result, __current_pc());
    }
}
}
