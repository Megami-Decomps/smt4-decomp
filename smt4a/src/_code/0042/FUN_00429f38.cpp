#include "common.h"
extern "C" {
u32 FUN_00188688(void);
s32 nn_fs_ipc_FileSystem_IsSdmcDetected(u32 *session, s8 *detected);
void FUN_0016e800(s32 result, u32 location, u32 failed);
s32 FUN_00429f38(void)
{
    u32 session = FUN_00188688();
    s8 detected;
    s32 result = nn_fs_ipc_FileSystem_IsSdmcDetected(&session, &detected);
    u32 location = __current_pc();
    u32 failed = (u32)result >> 31;
    if (failed != 0) { FUN_0016e800(result, location, failed); }
    return detected;
}
}
