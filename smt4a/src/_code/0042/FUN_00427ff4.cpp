/* NON_MATCHING: sign test hoists a copy of the status (mov r1,r0; lsrs r0) and r5/r6 argument registers are swapped. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

struct DateTimeValue;

extern "C" {
s32 FUN_004283cc(void *owner);
s32 FUN_00428104(void *owner, DateTimeValue *output);
void recordValidatePair(void *owner, WindowStatusResult result);

// Read the owner's current time and return its translated status, reporting a failed result to the owner.
WindowStatusResult FUN_00427ff4(void *owner, DateTimeValue *output)
{
    s32 status = FUN_004283cc(owner);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    WindowStatusResult result(FUN_00428104(owner, output));
    recordValidatePair(owner, result);
    return result;
}
}
