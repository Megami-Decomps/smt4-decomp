/* NON_MATCHING: exits and cleanup calls now duplicate as in retail; the failure path loads the error code into r4 and copies it to r0 where retail loads r0 then copies to r4. */
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
        FUN_0013ebd8(result);
        return result;
    }
    FUN_0013ebd8(0xe0e046bc);
    return 0xe0e046bc;
}
}
