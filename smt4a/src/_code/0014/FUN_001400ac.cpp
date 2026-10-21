/* NON_MATCHING: retail addresses the shared-handle pointer relative to the handle; separate named globals produce a second pool relocation. */
#include "nn/Result.h"

extern "C" {
extern u32 DAT_005b4044;
extern u32* DAT_005b402c;
u32 FUN_0014a918(u32* handle, u32 mode);
void FUN_002e3140(u32 result);

// Initializes the shared handle and reports any creation failure.
void FUN_001400ac(void)
{
    DAT_005b4044 = 0;
    DAT_005b402c = &DAT_005b4044;
    u32 handle = 0;
    u32 result = FUN_0014a918(&handle, 0);
    if (!nnResultIsFailure(result)) {
        DAT_005b4044 = handle;
        result = 0;
    }
    if (nnResultIsFailure(result)) {
        FUN_002e3140(result);
    }
}
}
