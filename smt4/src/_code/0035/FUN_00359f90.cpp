/* NON_MATCHING: the two limit bytes load in the opposite order (retail loads byte 0x2C into r4 first, then 0x2D into r5). */
#include "common.h"
#include "nn/Result.h"
#include "shard/W6_W6Match1_CriticalSection.h"
#include "util/PlatformResultCheck.h"

extern "C" {

/* A settings block with an unaligned u16 limit at 0x2C. */
struct SettingsBlock {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u8 limit[2]; /* little-endian u16, unaligned */
};

/* The 4-byte system query result: a 16-bit value and padding. */
struct SystemInfo {
    u16 value;
    u16 unk02;
};

extern CriticalSection g_moduleCriticalSection1;
extern u8 DAT_0042d000;
extern SettingsBlock DAT_0042f000;
s32 FUN_0013a170(void *out, u32 size, u32 operation);
s32 FUN_0035511c(void *object);

/* True when a value read from the system is within the stored limit. */
u8 FUN_00359f90(void)
{
    SystemInfo info;
    s32 result = FUN_0013a170(&info, 4, 0xD0000);
    checkPlatformResult(result, __current_pc());
    nn_os_CriticalSection_Enter(&g_moduleCriticalSection1);
    s32 status = FUN_0035511c(&DAT_0042d000);
    if ((s32)(status & 0x80000000) < 0) {
        nn_os_CriticalSection_Leave(&g_moduleCriticalSection1);
        return 0;
    }
    u32 limitHigh = DAT_0042f000.limit[1];
    u32 limitLow = DAT_0042f000.limit[0];
    nn_os_CriticalSection_Leave(&g_moduleCriticalSection1);
    u32 limit = limitLow | (limitHigh << 8);
    return info.value >= limit;
}

} /* extern "C" */
