#include "common.h"

extern "C" {

typedef struct TableRecord {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ s32 value;
} TableRecord;

typedef struct DevilRecord {
    /* 0x0 */ u8 unk0[3];
    /* 0x3 */ u8 grade;
} DevilRecord;

extern TableRecord *dataTable00FindById(u16 id);
extern DevilRecord *devilGetRecord(u16 id);

/* qsort-style comparison of two ids by the table record value (ascending), then devil grade (descending), then id. */
s32 dataTable00CompareByValue(u16 *a, u16 *b)
{
    TableRecord *recordA = dataTable00FindById(*a);
    TableRecord *recordB = dataTable00FindById(*b);
    s32 result = recordA->value - recordB->value;

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
