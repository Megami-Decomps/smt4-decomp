#include "common.h"
#include "gamedata/DevilRecord.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

/* qsort-style comparison of two ids by the table record value (ascending), then devil level (descending), then id. */
s32 dataTable00CompareByValue(u16 *a, u16 *b)
{
    Table00Record *recordA = dataTable00FindById(*a);
    Table00Record *recordB = dataTable00FindById(*b);
    s32 result = recordA->maxMp - recordB->maxMp;

    if (result == 0) {
        DevilRecord *devilA = devilGetRecord(*a);
        DevilRecord *devilB = devilGetRecord(*b);

        result = devilB->level - devilA->level;
        if (result == 0) {
            result = *a - *b;
        }
    }
    return result;
}

} /* extern "C" */
