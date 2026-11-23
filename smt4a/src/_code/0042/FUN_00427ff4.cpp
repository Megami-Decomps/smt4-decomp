/* IDENTICAL as the unit is compiled (its cflags entry) with --cpu=MPCore --fpu=softvfp (the no-VFP build of this request library, see FUN_00426634/FUN_00426940); the default build saves the owner and output in swapped registers (r6/r5). */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

struct DateTimeValue;

extern "C" {
s32 FUN_00428104(void *owner, DateTimeValue *output);

// Read the owner's current time and return its translated status, reporting a failed result to the owner.
WindowStatusResult FUN_00427ff4(void *owner, DateTimeValue *output)
{
    nn::Result status = queryFailureResultOrZero(owner);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    WindowStatusResult result(FUN_00428104(owner, output));
    recordValidatePair(owner, result);
    return result;
}
}
