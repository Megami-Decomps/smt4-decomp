#include "shard/W6_W6Match8_DevilRecordA.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

s32 FUN_004a73b8(const u16* first, const u16* second)
{
    const NkmEnemyRecordA* a = nkmEnemyFindById(*first);
    const NkmEnemyRecordA* b = nkmEnemyFindById(*second);
    s32 order = b->maxHp - a->maxHp;
    if (order == 0) {
        const NkmBaseRecordA* firstDevil = nkmBaseGetRecord(*first);
        const NkmBaseRecordA* secondDevil = nkmBaseGetRecord(*second);
        order = firstDevil->level - secondDevil->level;
        if (order == 0) {
            order = *second - *first;
        }
    }
    return order;
}
}
