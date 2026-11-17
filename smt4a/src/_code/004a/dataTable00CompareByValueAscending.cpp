#include "common.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x0 */ u8 unk0[6];
    /* 0x6 */ u16 grade;
} DevilRecord;

extern DevilRecord *devilGetRecord(u16 id);

/* qsort-style comparison of two ids by the table record value, then devil grade, then id. */
s32 dataTable00CompareByValueAscending(u16 *a, u16 *b)
{
    Table00RecordA *recordA = dataTable00FindById(*a);
    Table00RecordA *recordB = dataTable00FindById(*b);
    s32 result = recordA->maxHp - recordB->maxHp;

    if (result == 0) {
        DevilRecord *devilA = devilGetRecord(*a);
        DevilRecord *devilB = devilGetRecord(*b);

        result = devilB->grade - devilA->grade;
        if (result == 0) {
            result = *a - *b;
        }
    }
    return result;
}

} /* extern "C" */
