/* Built with the unit's cflags (-O3 -Otime --fpu=softvfp). */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {
u32 FUN_00352b88(u32 handle, u32 second, u32 third, u32 fourth);
}

extern "C" {

/* Runs the operation on `handle`; returns the failing status of the pre-check, or the operation's validated result. */
WindowStatusResult aocServiceQueryCatalog(u32 handle, u32 second, u32 third, u32 fourth)
{
    nn::Result status = queryFailureResultOrZero(reinterpret_cast<void *>(handle));

    bool failed = nnResultIsFailure(status);

    if (failed) {
        return WindowStatusResult(status);
    }
    WindowStatusResult outcome(FUN_00352b88(handle, second, third, fourth));
    recordValidatePair(reinterpret_cast<void *>(handle), outcome);
    return outcome;
}

} /* extern "C" */
