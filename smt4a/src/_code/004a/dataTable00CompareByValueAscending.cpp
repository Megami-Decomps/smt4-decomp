#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

/* qsort-style comparison of two ids by the table record value, then devil grade, then id. */
s32 dataTable00CompareByValueAscending(u16 *a, u16 *b)
{
    NkmEnemyRecordA *recordA = nkmEnemyFindById(*a);
    NkmEnemyRecordA *recordB = nkmEnemyFindById(*b);
    s32 result = recordA->maxHp - recordB->maxHp;

    if (result == 0) {
        NkmBaseRecordA *devilA = nkmBaseGetRecord(*a);
        NkmBaseRecordA *devilB = nkmBaseGetRecord(*b);

        result = devilB->level - devilA->level;
        if (result == 0) {
            result = *a - *b;
        }
    }
    return result;
}

} /* extern "C" */
