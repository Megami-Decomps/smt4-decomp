#include "gamedata/DevilRecordA.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

/* qsort-style comparison of two ids by the table record value, then devil grade, then id. */
s32 dataTable00CompareByValueDescending(u16 *a, u16 *b)
{
    Table00RecordA *recordA = dataTable00FindById(*a);
    Table00RecordA *recordB = dataTable00FindById(*b);
    s32 result = recordB->maxMp - recordA->maxMp;

    if (result == 0) {
        DevilRecordA *devilA = devilGetRecord(*a);
        DevilRecordA *devilB = devilGetRecord(*b);

        result = devilA->level - devilB->level;
        if (result == 0) {
            result = *b - *a;
        }
    }
    return result;
}

} /* extern "C" */
