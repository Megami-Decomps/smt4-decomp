/* NON_MATCHING: the token is compared against the owner word first and the result high-bit check (lsrs #31) is present as in retail; retail branches to one shared out-of-line error block from both failed token tests (the error constant is loaded there), this build loads the constant up front and tests the token once. */
#include "common.h"
#include "nn/Result.h"

extern "C" {
extern u8 DAT_006428e4;

/* Validate a nonzero owner token before returning the shared result object. */
u32 tokenResolveAddress(const u32 *owner, void **result, u32 token)
{
    s32 status = 0xD8A138C1;
    if (token == *owner && token != 0) {
        status = 0;
    }
    if (nnResultIsFailure(status)) {
        return status;
    }
    *result = &DAT_006428e4;
    return 0;
}
}
