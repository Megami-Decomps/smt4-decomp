#include "common.h"

struct RankedEntry {
    u16 id;  // 0x00
    u8 rank; // 0x02
};
struct SortMetadata {
    u8 unk00[6]; // 0x00
    u16 key;     // 0x06
};

extern "C" {
SortMetadata* FUN_00184310(u16 id);

// Sorts by entry rank descending, metadata key ascending, then ID descending.
s32 FUN_004a7658(const RankedEntry* first, const RankedEntry* second)
{
    s32 order = second->rank - first->rank;
    if (order == 0) {
        SortMetadata* a = FUN_00184310(first->id);
        SortMetadata* b = FUN_00184310(second->id);
        order = a->key - b->key;
        if (order == 0) {
            order = second->id - first->id;
        }
    }
    return order;
}
}
