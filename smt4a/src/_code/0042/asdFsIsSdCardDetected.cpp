#include "common.h"
extern "C" {
u32 fsGetUserMountHandle(void);
s32 nn_fs_ipc_FileSystem_IsSdmcDetected(u32 *session, s8 *detected);
void sysReportCheckFailure(s32 result, u32 location, u32 failed);
s32 asdFsIsSdCardDetected(void)
{
    u32 session = fsGetUserMountHandle();
    s8 detected;
    s32 result = nn_fs_ipc_FileSystem_IsSdmcDetected(&session, &detected);
    u32 location = __current_pc();
    u32 failed = (u32)result >> 31;
    if (failed != 0) { sysReportCheckFailure(result, location, failed); }
    return detected;
}
}
