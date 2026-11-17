#include "common.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

/* qsort-style comparison of two ids by the table record value (ascending), then devil level (descending), then id. */
s32 dataTable00CompareByValue(u16 *a, u16 *b)
{
    NkmEnemyRecord *recordA = nkmEnemyFindById(*a);
    NkmEnemyRecord *recordB = nkmEnemyFindById(*b);
    s32 result = recordA->maxMp - recordB->maxMp;

    if (result == 0) {
        NkmBaseRecord *devilA = nkmBaseGetRecord(*a);
        NkmBaseRecord *devilB = nkmBaseGetRecord(*b);

        result = devilB->level - devilA->level;
        if (result == 0) {
            result = *a - *b;
        }
    }
    return result;
}

} /* extern "C" */
