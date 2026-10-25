/* NON_MATCHING: retail uses shared service-state bases and conditional error tail calls; this source hoists the saved session pointer and merges the failure blocks. */
#include "common.h"

extern "C" {
extern u8 DAT_0058938d;
extern u32 DAT_00589390;
extern u8 *DAT_00589394;
s32 FUN_0016f864();
s32 FUN_0016f988(u32 *handle, const char *service, u32 length, u32 flags);
__declspec(noreturn) void FUN_0016e800(s32 result, u32 pc);
u32 libc_strlen(const char *text);
void FUN_00158818(u32 handle);
void FUN_001588f0(u8 **state);
u32 FUN_00188688();
s32 FUN_001588c0(u32 *priority, u32 options);

// Connect to fs:USER once, install the session state and initialize its worker priority.
void FUN_00146720()
{
    if (DAT_00589390)
        return;
    s32 result = FUN_0016f864();
    if (result != 0x8a067f9 && result < 0)
        FUN_0016e800(result, __current_pc());
    u32 length = libc_strlen("fs:USER");
    result = FUN_0016f988(&DAT_00589390, "fs:USER", length, 0);
    if (result < 0)
        FUN_0016e800(result, __current_pc());
    FUN_00158818(DAT_00589390);
    DAT_00589394 = &DAT_0058938d;
    FUN_001588f0(&DAT_00589394);
    u32 priority = FUN_00188688();
    result = FUN_001588c0(&priority, 0);
    if (result < 0)
        FUN_0016e800(result, __current_pc());
}
}
