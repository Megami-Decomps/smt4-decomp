/* NON_MATCHING: retail uses shared service-state bases and conditional error tail calls; this source hoists the saved session pointer and merges the failure blocks. */
#include "common.h"

extern "C" {
extern u8 DAT_0058938d;
extern u32 g_moduleValue;
extern u8 *g_moduleFlags;
s32 FUN_0016f864();
s32 asdModelForwardChecked(u32 *handle, const char *service, u32 length, u32 flags);
__declspec(noreturn) void sysReportCheckFailure(s32 result, u32 pc);
u32 libc_strlen(const char *text);
void FUN_00158818(u32 handle);
void FUN_001588f0(u8 **state);
u32 fsGetUserMountHandle();
s32 nn_fs_ipc_FileSystem_SetPriority(u32 *priority, u32 options);

// Connect to fs:USER once, install the session state and initialize its worker priority.
void FUN_00146720()
{
    if (g_moduleValue)
        return;
    s32 result = FUN_0016f864();
    if (result != 0x8a067f9 && result < 0)
        sysReportCheckFailure(result, __current_pc());
    u32 length = libc_strlen("fs:USER");
    result = asdModelForwardChecked(&g_moduleValue, "fs:USER", length, 0);
    if (result < 0)
        sysReportCheckFailure(result, __current_pc());
    FUN_00158818(g_moduleValue);
    g_moduleFlags = &DAT_0058938d;
    FUN_001588f0(&g_moduleFlags);
    u32 priority = fsGetUserMountHandle();
    result = nn_fs_ipc_FileSystem_SetPriority(&priority, 0);
    if (result < 0)
        sysReportCheckFailure(result, __current_pc());
}
}
