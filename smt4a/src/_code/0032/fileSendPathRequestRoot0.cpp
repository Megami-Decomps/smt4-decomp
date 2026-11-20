#include "sys/ProcessResult.h"
#include "sys/FilePaths.h"
#include "nn/Result.h"

extern "C" {
void fileSystemRequireReady();
u32 archiveDeviceSendPathRequest(const u16 *path);

/* Sends `path`, taken from archive root 0, to its archive device as a path request; records and
 * returns the result. */
nn::Result fileSendPathRequestRoot0(const char *path)
{
    u16 widePath[248];
    nn::Result result;

    if (pathBuildWide(path, (s16 *)widePath, 0) == 0) {
        result = FILE_RESULT_PATH_TOO_LONG;
        processResultSetValue(result);
        return result;
    }
    fileSystemRequireReady();
    result = archiveDeviceSendPathRequest(widePath);
    processResultSetValue(result);
    return result;
}

} /* extern "C" */
