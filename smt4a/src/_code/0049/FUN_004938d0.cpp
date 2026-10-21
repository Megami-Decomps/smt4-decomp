/* NON_MATCHING: primary-id load/key registers differ; retail also copies right to r6 before the secondary-rank calls. */
#include "common.h"

extern "C" {
s32 FUN_001ba3d0(u16 id);
u16 FUN_0049c9a0(const u16* entry);

// Order records by the id-derived key, then by their lookup rank.
s32 FUN_004938d0(const u16* left, const u16* right)
{
    u16 rightId = *right;
    s32 leftKey = FUN_001ba3d0(*left);
    s32 rightKey = FUN_001ba3d0(rightId);
    s32 result = leftKey - rightKey;
    if (result == 0)
        result = FUN_0049c9a0(left) - FUN_0049c9a0(right);
    return result;
}
}
