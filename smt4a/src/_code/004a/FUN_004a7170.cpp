#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

/* Compares two ids by entry rank (ascending), then record order (higher first), then id (ascending). */
s32 FUN_004a7170(u16 *a, u16 *b)
{
    NkmEnemyRecordA *entryA = nkmEnemyFindById(*a);
    NkmEnemyRecordA *entryB = nkmEnemyFindById(*b);
    s32 diff = entryA->maxMp - entryB->maxMp;

    if (diff == 0) {
        NkmBaseRecordA *recordA = nkmBaseGetRecord(*a);
        NkmBaseRecordA *recordB = nkmBaseGetRecord(*b);

        diff = recordB->level - recordA->level;
        if (diff == 0) {
            diff = *a - *b;
        }
    }
    return diff;
}

} /* extern "C" */
