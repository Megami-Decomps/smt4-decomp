#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

/* qsort-style comparison of two ids by the table record value, then devil grade, then id. */
s32 dataTable00CompareByValueDescending(u16 *a, u16 *b)
{
    NkmEnemyRecordA *recordA = nkmEnemyFindById(*a);
    NkmEnemyRecordA *recordB = nkmEnemyFindById(*b);
    s32 result = recordB->maxMp - recordA->maxMp;

    if (result == 0) {
        NkmBaseRecordA *devilA = nkmBaseGetRecord(*a);
        NkmBaseRecordA *devilB = nkmBaseGetRecord(*b);

        result = devilA->level - devilB->level;
        if (result == 0) {
            result = *b - *a;
        }
    }
    return result;
}

} /* extern "C" */
