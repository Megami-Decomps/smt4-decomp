#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

// Sort catalog key ascending, level descending, then demon id ascending.
s32 devilCompareCatalogKeyThenLevel(const u16 *left, const u16 *right)
{
    const NkmEnemyRecord *leftKey = nkmEnemyFindById(*left);
    const NkmEnemyRecord *rightKey = nkmEnemyFindById(*right);
    s32 comparison = leftKey->maxHp - rightKey->maxHp;
    if (comparison == 0) {
        const NkmBaseRecord *leftDevil = nkmBaseGetRecord(*left);
        const NkmBaseRecord *rightDevil = nkmBaseGetRecord(*right);
        comparison = rightDevil->level - leftDevil->level;
        if (comparison == 0) {
            comparison = *left - *right;
        }
    }
    return comparison;
}
}
