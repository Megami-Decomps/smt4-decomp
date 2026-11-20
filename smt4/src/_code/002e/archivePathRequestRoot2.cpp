#include "sys/ProcessResult.h"
#include "common.h"
#include "nn/Result.h"
#include "sys/FilePaths.h"

extern "C" {
s32 fileSystemRequireReady(void);
u32 archiveDeviceSendPathRequest(const u16 *path);

// Perform the filesystem operation on a converted kind-two path and save its result.
nn::Result archivePathRequestRoot2(const char *path)
{
    u16 converted[248];
    if (pathBuildWide(path, reinterpret_cast<s16 *>(converted), 2) != 0) {
        fileSystemRequireReady();
        nn::Result result = archiveDeviceSendPathRequest(converted);
        processResultSetValue(result);
        return result;
    }
    nn::Result result = 0xe0e046bc;
    processResultSetValue(result);
    return result;
}
}
