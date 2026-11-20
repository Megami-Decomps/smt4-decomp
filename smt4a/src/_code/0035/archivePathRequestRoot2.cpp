/* NON_MATCHING: error literal loads into r4 then moves to r0; retail loads into r0 then preserves it in r4. */
#include "sys/ProcessResult.h"
#include "common.h"

extern "C" {
s32 pathBuildWide(const char *path, u16 *converted, s32 kind);
s32 fileSystemRequireReady(void);
u32 archiveDeviceSendPathRequest(const u16 *path);

// Perform the filesystem operation on a converted kind-two path and save its result.
u32 archivePathRequestRoot2(const char *path)
{
    u16 converted[248];
    if (pathBuildWide(path, converted, 2) != 0) {
        fileSystemRequireReady();
        u32 result = archiveDeviceSendPathRequest(converted);
        processResultSetValue(result);
        return result;
    }
    u32 result = 0xe0e046bc;
    processResultSetValue(result);
    return result;
}
}
