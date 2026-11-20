#include "sys/ProcessResult.h"
#include "common.h"
#include "sys/FilePaths.h"
#include "nn/Result.h"

struct ResourceRequest;

extern "C" {
void fileSystemRequireReady();
u32 archiveDeviceSendPathRequest(u8* scratch);

// Process a resource request using a temporary work area, returning its result code.
nn::Result archivePathRequestRoot1(const ResourceRequest* request)
{
    u8 scratch[496];
    nn::Result result;
    if (pathBuildWide(reinterpret_cast<const char *>(request), reinterpret_cast<s16 *>(scratch), 1) != 0) {
        fileSystemRequireReady();
        result = archiveDeviceSendPathRequest(scratch);
        processResultSetValue(result);
        return result;
    }
    result = 0xe0e046bc;
    processResultSetValue(result);
    return result;
}
}
