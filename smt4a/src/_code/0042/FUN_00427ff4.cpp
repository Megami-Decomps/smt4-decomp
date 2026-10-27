/* NON_MATCHING: the status is an nn::Result from a callee declared returning nn::Result (classes/WindowStatus.h), which fixes retail's lsrs-before-copy order; remaining: retail saves the owner in r5 and the output in r6 (ours r6/r5). */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

struct DateTimeValue;

extern "C" {
s32 FUN_00428104(void *owner, DateTimeValue *output);

// Read the owner's current time and return its translated status, reporting a failed result to the owner.
WindowStatusResult FUN_00427ff4(void *owner, DateTimeValue *output)
{
    nn::Result status = FUN_004283cc(owner);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    WindowStatusResult result(FUN_00428104(owner, output));
    recordValidatePair(owner, result);
    return result;
}
}
