/* NON_MATCHING: compiler merges cleanup exits; retail duplicates them and preserves the error code across cleanup. */
#include "sys/ProcessResult.h"
#include "common.h"
#include "sys/FilePaths.h"

struct ResourceRequest;

extern "C" {
void FUN_001886bc();
u32 FUN_00188444(u8* scratch);

// Process a mode-zero resource request and return its result code.
u32 FUN_0032c9fc(const ResourceRequest* request)
{
    u8 scratch[496];
    u32 result;
    if (pathBuildWide(reinterpret_cast<const char *>(request), reinterpret_cast<s16 *>(scratch), 0) != 0) {
        FUN_001886bc();
        result = FUN_00188444(scratch);
    } else {
        result = 0xe0e046bc;
    }
    FUN_0013ebd8(result);
    return result;
}
}
