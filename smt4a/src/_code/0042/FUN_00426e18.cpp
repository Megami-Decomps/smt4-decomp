/* NON_MATCHING: the status is an nn::Result from a callee declared returning nn::Result (classes/WindowStatus.h), which fixes retail's lsrs-before-copy order; remaining: argument register allocation (retail saves the four arguments in r5-r8 in order). */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {
u32 FUN_00426acc(u32 handle, u32 second, u32 third, u32 fourth);
}

extern "C" {

/* Runs the operation on `handle`; returns the failing status of the pre-check, or the operation's validated result. */
WindowStatusResult FUN_00426e18(u32 handle, u32 second, u32 third, u32 fourth)
{
    nn::Result status = FUN_004283cc(reinterpret_cast<void *>(handle));

    bool failed = nnResultIsFailure(status);

    if (failed) {
        return WindowStatusResult(status);
    }
    WindowStatusResult result(FUN_00426acc(handle, second, third, fourth));
    recordValidatePair(reinterpret_cast<void *>(handle), result);
    return result;
}

} /* extern "C" */
