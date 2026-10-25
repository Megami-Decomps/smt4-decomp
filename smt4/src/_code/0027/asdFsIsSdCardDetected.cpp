#include "common.h"
#include "util/PlatformResultCheck.h"
extern "C" {
u32 FUN_002bbaf8(void);
s32 nn_fs_ipc_FileSystem_IsSdmcDetected(u32 *session, s8 *detected);
s32 asdFsIsSdCardDetected(void)
{
    u32 session = FUN_002bbaf8();
    s8 detected;
    s32 result = nn_fs_ipc_FileSystem_IsSdmcDetected(&session, &detected);
    u32 location = __current_pc();
    u32 failed = (u32)result >> 31;
    if (failed != 0) { FUN_002bbb2c(result, location, failed); }
    return detected;
}
}
