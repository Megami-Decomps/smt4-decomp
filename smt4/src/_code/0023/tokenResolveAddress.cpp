#include "common.h"
#include "nn/Result.h"

extern "C" {
extern u8 DAT_004e64c0;

/* Validate a nonzero owner token before returning the shared result object. */
u32 tokenResolveAddress(const u32 *owner, void **result, u32 token)
{
    u32 current = *owner;
    s32 status;
    if (token != current || token == 0) {
        status = 0xD8A138C1;
    } else {
        status = 0;
    }
    if (nnResultIsFailure(status)) {
        return status;
    }
    *result = &DAT_004e64c0;
    return 0;
}
}
