/* NON_MATCHING: retail copies the right entry into r6 before secondary order calls; this build keeps it in r4 and needs one fewer instruction. */
#include "common.h"

extern "C" {
u16 FUN_001ba3d0(s32 id);
u16 FUN_0049c9a0(const u16* entry);

// Order records by the id-derived key, then by their lookup rank.
s32 FUN_004938d0(const u16* left, const u16* right)
{
    u16 leftId = *left;
    u16 rightId = *right;
    s32 result = FUN_001ba3d0(leftId) - FUN_001ba3d0(rightId);
    if (result != 0)
        return result;
    u16 leftOrder = FUN_0049c9a0(left);
    u16 rightOrder = FUN_0049c9a0(right);
    return leftOrder - rightOrder;
}
}
