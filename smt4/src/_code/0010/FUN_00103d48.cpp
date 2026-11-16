#include "sys/ProcessResult.h"
#include "common.h"
#include "nn/Result.h"

extern "C" {

extern u8 DAT_00465210;
extern u32 globalBlockGetFirst(void);
extern u32 fsUnmountByName(const char *path);

/* Unmounts the current registration and clears its mounted flag on success. */
bool FUN_00103d48(void)
{
    if (DAT_00465210 == 0) {
        return true;
    }
    const char *path = reinterpret_cast<const char *>(globalBlockGetFirst());
    u32 status = fsUnmountByName(path);
    FUN_002c3510(status);
    if (nnResultIsSuccess(status)) {
        DAT_00465210 = 0;
        return true;
    }
    return false;
}

} /* extern "C" */
