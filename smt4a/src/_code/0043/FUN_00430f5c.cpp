#include "common.h"
#include "util/PlatformResultCheck.h"
extern "C" {
extern u32 DAT_0053f350;
s32 FUN_00189738(u32 *value, u32 size, u32 flags);

/* Queries the module value and returns its high byte. */
u32 FUN_00430f5c()
{
    u32 value = DAT_0053f350;
    s32 result = FUN_00189738(&value, 4, 0xB0000);
    checkPlatformResult(result, __current_pc());
    return value >> 24;
}
}
