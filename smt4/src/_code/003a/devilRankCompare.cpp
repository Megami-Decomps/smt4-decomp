#include "gamedata/NkmBaseRecord.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

/* Compares two ids by entry rank (higher first), then devil grade (ascending), then id (higher first). */
s32 devilRankCompare(u16 *a, u16 *b)
{
    NkmEnemyRecord *entryA = nkmEnemyFindById(*a);
    NkmEnemyRecord *entryB = nkmEnemyFindById(*b);
    s32 diff = entryB->maxHp - entryA->maxHp;

    if (diff == 0) {
        NkmBaseRecord *devilA = nkmBaseGetRecord(*a);
        NkmBaseRecord *devilB = nkmBaseGetRecord(*b);

        diff = devilA->level - devilB->level;
        if (diff == 0) {
            diff = *b - *a;
        }
    }
    return diff;
}

} /* extern "C" */
