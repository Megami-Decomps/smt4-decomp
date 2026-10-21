#include "shard/W6_W6Match5_DevilSort.h"

struct Table00SortRecord {
    u16 id; // 0x00
    u16 unk02;
    s32 sortKey; // 0x04
};

extern "C" {
const Table00SortRecord *dataTable00FindById(u16 id);

// Sort catalog key ascending, level descending, then demon id ascending.
s32 devilCompareCatalogKeyThenLevel(const u16 *left, const u16 *right)
{
    const Table00SortRecord *leftKey = dataTable00FindById(*left);
    const Table00SortRecord *rightKey = dataTable00FindById(*right);
    s32 comparison = leftKey->sortKey - rightKey->sortKey;
    if (comparison == 0) {
        const DevilSortRecord *leftDevil = devilGetRecord(*left);
        const DevilSortRecord *rightDevil = devilGetRecord(*right);
        comparison = rightDevil->level - leftDevil->level;
        if (comparison == 0) {
            comparison = *left - *right;
        }
    }
    return comparison;
}
}
