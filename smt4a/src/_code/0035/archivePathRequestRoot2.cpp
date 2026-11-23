#include "sys/ProcessResult.h"
#include "sys/FilePaths.h"

extern "C" {
s32 fileSystemRequireReady(void);
u32 archiveDeviceSendPathRequest(const u16 *path);

/* Issues the filesystem request on a converted root-two path and saves its result. */
nn::Result archivePathRequestRoot2(const char *path)
{
    u16 converted[248];
    if (pathBuildWide(path, (s16 *)converted, 2) != 0) {
        fileSystemRequireReady();
        nn::Result result = archiveDeviceSendPathRequest(converted);
        processResultSetValue(result);
        return result;
    }
    nn::Result result = FILE_RESULT_PATH_TOO_LONG;
    processResultSetValue(result);
    return result;
}
} /* extern "C" */
