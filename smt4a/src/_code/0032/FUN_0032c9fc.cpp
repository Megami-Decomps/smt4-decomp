/* NON_MATCHING: compiler merges cleanup exits; retail duplicates them and preserves the error code across cleanup. */
#include "common.h"

struct ResourceRequest;

extern "C" {
s32 FUN_002e0e04(const ResourceRequest* request, u8* scratch, s32 mode);
void FUN_001886bc();
u32 FUN_00188444(u8* scratch);
void FUN_0013ebd8();

// Process a mode-zero resource request and return its result code.
u32 FUN_0032c9fc(const ResourceRequest* request)
{
    u8 scratch[496];
    u32 result;
    if (FUN_002e0e04(request, scratch, 0) != 0) {
        FUN_001886bc();
        result = FUN_00188444(scratch);
    } else {
        result = 0xe0e046bc;
    }
    FUN_0013ebd8();
    return result;
}
}
