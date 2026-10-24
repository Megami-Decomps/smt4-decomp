/* NON_MATCHING: register allocation only: retail saves the four arguments in r5-r8 in order and tests the sign with 'lsrs r1, r0, #31' keeping the status in r0; the build copies the status to r1 first and numbers the saved registers differently. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {
s32 FUN_004283cc(u32 handle);
u32 FUN_004275f0(u32 handle, u32 second, u32 third, u32 fourth);
void recordValidatePair(u32 handle, u32 code, u32 description);
}

extern "C" {

/* Runs the operation on `handle`; returns the failing status of the pre-check, or the operation's validated result. */
WindowStatusResult FUN_0042792c(u32 handle, u32 second, u32 third, u32 fourth)
{
    s32 status = FUN_004283cc(handle);

    bool failed = nnResultIsFailure(status);

    if (failed) {
        return WindowStatusResult(status);
    }
    WindowStatusResult result(FUN_004275f0(handle, second, third, fourth));
    recordValidatePair(handle, result.code, result.description);
    return result;
}

} /* extern "C" */
