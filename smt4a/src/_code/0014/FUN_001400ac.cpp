/* NON_MATCHING: retail takes the handle's address as the one literal and the slot pointer by `sub r1, r4, #28` (both are objects of one block, g_allocationAddressRanges at 0x5b4028, defined in this unit's data); separate externs, or a struct view, load the base or a second literal. */
#include "nn/Result.h"

extern "C" {
extern u32 DAT_005b4044;
extern u32* DAT_005b402c;
u32 FUN_0014a918(u32* handle, u32 mode);
void FUN_002e3140(s32 result, bool failed);

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
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
}
}
