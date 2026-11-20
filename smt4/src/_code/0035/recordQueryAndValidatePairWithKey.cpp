/* NON_MATCHING: IDENTICAL with unit cflags `--fpu=softvfp` (matching smt4a's project.json entry; default flags spill the 5th argument to s16). */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {

nn::Result FUN_00239fc4(void *archive, u32 mode);
WindowStatusResult FUN_00354168(void *file, void *archive, const u16 *path, u32 flags);

/* Opens the archive, verifies no pending failure on `file`, queries and validates the pair. */
WindowStatusResult recordQueryAndValidatePairWithKey(void *file, void *archive, const u16 *path, u32 flags)
{
    nn::Result status = FUN_00239fc4(archive, 1);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    status = queryFailureResultOrZero(file);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    WindowStatusResult result = FUN_00354168(file, archive, path, flags);
    recordValidatePair(file, result);
    return result;
}

} /* extern "C" */
