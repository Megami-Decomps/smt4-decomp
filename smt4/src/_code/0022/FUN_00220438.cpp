/* NON_MATCHING: exits now duplicated as in retail; only the error constant's register differs (retail loads it into r0 and copies to r4, this build loads r4 directly). */
#include "sys/ProcessResult.h"
#include "common.h"
#include "sys/FilePaths.h"

struct ResourceRequest;

extern "C" {
void FUN_002ad888();
u32 FUN_002a84e8(u8* scratch);

/* Records `result` as the process result and hands it back. */
static __inline u32 recordProcessResult(u32 result)
{
    FUN_002c3510(result);
    return result;
}

// Process a resource request using a temporary work area, returning its result code.
u32 FUN_00220438(const ResourceRequest* request)
{
    u8 scratch[496];
    if (pathBuildWide(reinterpret_cast<const char *>(request), reinterpret_cast<s16 *>(scratch), 1) != 0) {
        FUN_002ad888();
        return recordProcessResult(FUN_002a84e8(scratch));
    }
    return recordProcessResult(0xe0e046bc);
}
}
