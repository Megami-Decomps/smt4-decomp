/* NON_MATCHING: compiler merges cleanup exits; retail duplicates them and preserves the error code across cleanup. */
#include "sys/ProcessResult.h"
#include "common.h"

struct ResourceRequest;

extern "C" {
s32 FUN_00254884(const ResourceRequest* request, u8* scratch, s32 mode);
void FUN_002ad888();
u32 FUN_002a84e8(u8* scratch);

// Process a mode-zero resource request and return its result code.
u32 FUN_002cbf90(const ResourceRequest* request)
{
    u8 scratch[496];
    u32 result;
    if (FUN_00254884(request, scratch, 0) != 0) {
        FUN_002ad888();
        result = FUN_002a84e8(scratch);
    } else {
        result = 0xe0e046bc;
    }
    FUN_002c3510(result);
    return result;
}
}
