#include "common.h"
#include "util/PlatformResultCheck.h"
extern "C" {
extern u8 DAT_0040b738;
s32 FUN_0013a170(u8 *value, u32 count, u32 operation);

/* Query a byte-sized system value and report a failed result. */
u8 systemApplyConfigurationByte(void)
{
    u8 value = DAT_0040b738;
    s32 result = FUN_0013a170(&value, 1, 0xA0002);
    checkPlatformResult(result, __current_pc());
    return value;
}
}
