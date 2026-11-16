#include "sys/ProcessResult.h"
#include "common.h"
#include "sys/FilePaths.h"
#include "nn/Result.h"

struct ResourceRequest;

extern "C" {
void FUN_001886bc();
u32 FUN_00188444(u8* scratch);

// Process a mode-zero resource request and return its result code.
nn::Result FUN_0032c9fc(const ResourceRequest* request)
{
    u8 scratch[496];
    nn::Result result;

    if (pathBuildWide(reinterpret_cast<const char *>(request), reinterpret_cast<s16 *>(scratch), 0) == 0) {
        result = 0xe0e046bc;
        processResultSetValue(result);
        return result;
    }
    FUN_001886bc();
    result = FUN_00188444(scratch);
    processResultSetValue(result);
    return result;
}
}
