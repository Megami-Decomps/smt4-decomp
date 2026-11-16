#include "sys/ProcessResult.h"
#include "common.h"
#include "sys/FilePaths.h"
#include "nn/Result.h"

struct ResourceRequest;

extern "C" {
void FUN_002ad888();
u32 FUN_002a84e8(u8* scratch);

// Process a mode-zero resource request and return its result code.
nn::Result FUN_002cbf90(const ResourceRequest* request)
{
    u8 scratch[496];
    nn::Result result;

    if (pathBuildWide(reinterpret_cast<const char *>(request), reinterpret_cast<s16 *>(scratch), 0) == 0) {
        result = 0xe0e046bc;
        processResultSetValue(result);
        return result;
    }
    FUN_002ad888();
    result = FUN_002a84e8(scratch);
    processResultSetValue(result);
    return result;
}
}
