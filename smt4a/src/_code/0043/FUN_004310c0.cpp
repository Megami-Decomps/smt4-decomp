#include "common.h"
#include "nn/Result.h"
#include "shard/W6_W6Match1_CriticalSection.h"

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

extern CriticalSection g_moduleCriticalSection5;
extern u8 DAT_0056a000;
extern SettingsBlock DAT_0056c000;
s32 FUN_00189738(void *out, u32 size, u32 operation);
void FUN_0016e800(s32 error, u32 site);
s32 FUN_0042a44c(void *object);

static __inline void checkSystemQuery(s32 result, u32 site)
{
    if (nnResultIsFailure(result))
        FUN_0016e800(result, site);
}

/* True when a value read from the system is within the stored limit. */
u8 FUN_004310c0(void)
{
    SystemInfo info;
    s32 result = FUN_00189738(&info, 4, 0xD0000);
    checkSystemQuery(result, __current_pc());
    nn_os_CriticalSection_Enter(&g_moduleCriticalSection5);
    s32 status = FUN_0042a44c(&DAT_0056a000);
    if ((s32)(status & 0x80000000) < 0) {
        nn_os_CriticalSection_Leave(&g_moduleCriticalSection5);
        return 0;
    }
    u32 limitLow = DAT_0056c000.limit[0];
    u32 limitHigh = DAT_0056c000.limit[1];
    nn_os_CriticalSection_Leave(&g_moduleCriticalSection5);
    u32 limit = limitLow | (limitHigh << 8);
    return info.value >= limit;
}

} /* extern "C" */
