#include "common.h"

struct Table06Sub1SortKeys {
    u16 id;
    u8 secondary;
    u8 flags;
};

extern "C" {
Table06Sub1SortKeys* dataTable06Sub1GetRecord(u32 id);

s32 dataTable06Sub1CompareBySortKeys(const u16* leftId, const u16* rightId)
{
    const Table06Sub1SortKeys* left = dataTable06Sub1GetRecord(*leftId);
    const Table06Sub1SortKeys* right = dataTable06Sub1GetRecord(*rightId);
    s32 difference = (right->flags & 0x1f) - (left->flags & 0x1f);
    if (difference == 0) {
        difference = left->secondary - right->secondary;
        if (difference == 0) {
            difference = left->id - right->id;
        }
    }
    return difference;
}

} /* extern "C" */
