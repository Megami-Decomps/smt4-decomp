/* NON_MATCHING: the status is an nn::Result from a callee declared returning nn::Result (fixes retail's lsrs-before-copy order); remaining: retail saves the owner in r5 and the output in r6 (ours r6/r5). */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

struct DateTimeValue;

extern "C" {
nn::Result queryFailureResultOrZero(void *owner);
s32 FUN_00353248(void *owner, DateTimeValue *output);

// Read the owner's current time and return its translated status, reporting a failed result to the owner.
WindowStatusResult FUN_003531dc(void *owner, DateTimeValue *output)
{
    nn::Result status = queryFailureResultOrZero(owner);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    WindowStatusResult result(FUN_00353248(owner, output));
    recordValidatePair(owner, result);
    return result;
}
}
