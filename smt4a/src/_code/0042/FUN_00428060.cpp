/* NON_MATCHING: output/text land in r6/r7 swapped against retail (r7/r6), and the owner status is
 * copied to r1 before its sign test instead of after */
#include "shard/W5_W5Match2_ValidationPair.h"
#include "nn/Result.h"

extern "C" {
s32 FUN_004283cc(void *owner);
u32 FUN_0016ccfc(void);
s32 tokenResolveAddress(u32 context, u8 **address, u32 token);
s32 FUN_004285d4(void *output, const char *text, u8 *source);
ValidationPair *_ZN18WindowStatusResultC1Ej(ValidationPair *result, s32 status);
void recordValidatePair(void *owner, ValidationPair result);

// Resolve the owner's token and parse text into output from the resolved block, then validate the outcome.
void FUN_00428060(ValidationPair *result, u32 *owner, void *output, const char *text)
{
    s32 ownerStatus = FUN_004283cc(owner);
    if (nnResultIsFailure(ownerStatus)) {
        _ZN18WindowStatusResultC1Ej(result, ownerStatus);
        return;
    }

    u8 *address;
    s32 status = tokenResolveAddress(FUN_0016ccfc(), &address, *owner);
    if (!nnResultIsFailure(status)) {
        status = FUN_004285d4(output, text, address + 0x54);
        if (!nnResultIsFailure(status)) {
            status = 0;
        }
    }

    ValidationPair outcome;
    _ZN18WindowStatusResultC1Ej(&outcome, status);
    recordValidatePair(owner, outcome);
    *result = outcome;
}
}
