/* NON_MATCHING: the two limit bytes land in swapped registers (r4/r5) and armcc orders `lsrs` before `mov r1, pc` for the failure check; same code otherwise. */
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

extern CriticalSection DAT_004c6458;
extern u8 DAT_0042d000;
extern SettingsBlock DAT_0042f000;
s32 FUN_0013a170(void *out, u32 size, u32 operation);
void FUN_002bbb2c(s32 error, u32 site);
s32 FUN_0035511c(void *object);

/* True when a value read from the system is within the stored limit. */
u8 FUN_00359f90(void)
{
    SystemInfo info;
    s32 result = FUN_0013a170(&info, 4, 0xD0000);
    u32 location = __current_pc();
    if (nnResultIsFailure(result)) {
        FUN_002bbb2c(result, location);
    }
    nn_os_CriticalSection_Enter(&DAT_004c6458);
    s32 status = FUN_0035511c(&DAT_0042d000);
    if ((s32)(status & 0x80000000) < 0) {
        nn_os_CriticalSection_Leave(&DAT_004c6458);
        return 0;
    }
    u32 limitLow = DAT_0042f000.limit[0];
    u32 limitHigh = DAT_0042f000.limit[1];
    nn_os_CriticalSection_Leave(&DAT_004c6458);
    return info.value >= (limitLow | (limitHigh << 8));
}

} /* extern "C" */
