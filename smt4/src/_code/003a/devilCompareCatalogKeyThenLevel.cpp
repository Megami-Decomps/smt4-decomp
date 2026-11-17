#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

// Sort catalog key ascending, level descending, then demon id ascending.
s32 devilCompareCatalogKeyThenLevel(const u16 *left, const u16 *right)
{
    const Table00Record *leftKey = dataTable00FindById(*left);
    const Table00Record *rightKey = dataTable00FindById(*right);
    s32 comparison = leftKey->maxHp - rightKey->maxHp;
    if (comparison == 0) {
        const DevilRecord *leftDevil = devilGetRecord(*left);
        const DevilRecord *rightDevil = devilGetRecord(*right);
        comparison = rightDevil->level - leftDevil->level;
        if (comparison == 0) {
            comparison = *left - *right;
        }
    }
    return comparison;
}
}
