/* NON_MATCHING: the result high-bit check (lsrs #31) is now present as in retail; retail shares one out-of-line error block for both failed token tests (two branches to it, `ldr; b` back) and compares token against the owner word first. */
#include "common.h"
#include "nn/Result.h"

extern "C" {
extern u8 DAT_006428e4;

/* Validate a nonzero owner token before returning the shared result object. */
u32 tokenResolveAddress(const u32 *owner, void **result, u32 token)
{
    s32 status = 0;
    if (*owner != token || token == 0) {
        status = 0xD8A138C1;
    }
    if (nnResultIsFailure(status)) {
        return status;
    }
    *result = &DAT_006428e4;
    return 0;
}
}
