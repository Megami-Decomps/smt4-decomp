/* NON_MATCHING: status is moved to r1 before the failure-bit shift; retail keeps it in r0 and copies it only on the failure path. */
#include "shard/W5_W5Match2_ValidationPair.h"
#include "nn/Result.h"

extern "C" {
s32 FUN_004283cc(void *owner);
ValidationPair *resultPairInitialize(ValidationPair *result, s32 status);
void FUN_00429048(ValidationPair *result, void *owner, u32 option);
void recordValidatePair(void *owner, ValidationPair result);

// Fetch and validate an owner's result, translating preliminary SDK failures.
void FUN_004288e0(ValidationPair *result, void *owner)
{
    s32 status = FUN_004283cc(owner);
    if (nnResultIsFailure(status)) {
        resultPairInitialize(result, status);
        return;
    }

    ValidationPair value;
    FUN_00429048(&value, owner, 0);
    recordValidatePair(owner, value);
    *result = value;
}
}
