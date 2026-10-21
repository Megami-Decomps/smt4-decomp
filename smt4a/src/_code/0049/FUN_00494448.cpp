/* NON_MATCHING: retail copies right to r6 before secondary comparison; compiled code omits the copy and retains left key in r5. */
#include "common.h"

extern "C" {
s32 FUN_0049cad0(const u16* entry);
u16 FUN_0049c9a0(const u16* entry);

// Compare entries by the primary key, then by the secondary key.
s32 FUN_00494448(const u16* left, const u16* right)
{
    s32 result = FUN_0049cad0(left) - FUN_0049cad0(right);
    if (result == 0)
        result = FUN_0049c9a0(left) - FUN_0049c9a0(right);
    return result;
}
}
