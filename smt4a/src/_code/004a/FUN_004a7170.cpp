#include "gamedata/DevilRecordA.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

/* Compares two ids by entry rank (ascending), then record order (higher first), then id (ascending). */
s32 FUN_004a7170(u16 *a, u16 *b)
{
    Table00RecordA *entryA = dataTable00FindById(*a);
    Table00RecordA *entryB = dataTable00FindById(*b);
    s32 diff = entryA->maxMp - entryB->maxMp;

    if (diff == 0) {
        DevilRecordA *recordA = devilGetRecord(*a);
        DevilRecordA *recordB = devilGetRecord(*b);

        diff = recordB->level - recordA->level;
        if (diff == 0) {
            diff = *a - *b;
        }
    }
    return diff;
}

} /* extern "C" */
