#include "common.h"

extern "C" {
typedef struct SortEntry {
    /* 0x00 */ u16 id;
} SortEntry;

u16 FUN_001ba3d0(s32 id);
u16 FUN_0049c9a0(const u16* entry);

// Order records by the id-derived key, then by their lookup rank.
s32 FUN_004938d0(const SortEntry* left, const SortEntry* right)
{
    u16 leftId = left->id;
    u16 rightId = right->id;
    s32 result = FUN_001ba3d0(leftId) - FUN_001ba3d0(rightId);
    if (result != 0)
        return result;
    const u16* keyLeft = reinterpret_cast<const u16*>(left);
    const u16* keyRight = reinterpret_cast<const u16*>(right);
    u16 leftOrder = FUN_0049c9a0(keyLeft);
    u16 rightOrder = FUN_0049c9a0(keyRight);
    return leftOrder - rightOrder;
}
}
