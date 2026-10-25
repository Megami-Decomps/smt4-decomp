#include "common.h"
#include "nn/Result.h"

extern "C" {

extern u8 DAT_00465210;
extern u32 FUN_002c3414(void);
extern u32 FUN_002c3dfc(const char *path);
extern void FUN_002c3510(void);

/* Unmounts the current registration and clears its mounted flag on success. */
bool FUN_00103d48(void)
{
    if (DAT_00465210 == 0) {
        return true;
    }
    const char *path = reinterpret_cast<const char *>(FUN_002c3414());
    u32 status = FUN_002c3dfc(path);
    FUN_002c3510();
    if (nnResultIsSuccess(status)) {
        DAT_00465210 = 0;
        return true;
    }
    return false;
}

} /* extern "C" */
