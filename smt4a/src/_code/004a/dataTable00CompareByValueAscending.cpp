#include "common.h"

extern "C" {

typedef struct TableRecord {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ s32 value;
} TableRecord;

typedef struct DevilRecord {
    /* 0x0 */ u8 unk0[6];
    /* 0x6 */ u16 grade;
} DevilRecord;

extern TableRecord *dataTable00FindById(u16 id);
extern DevilRecord *FUN_00184310(u16 id);

/* qsort-style comparison of two ids by the table record value, then devil grade, then id. */
s32 dataTable00CompareByValueAscending(u16 *a, u16 *b)
{
    TableRecord *recordA = dataTable00FindById(*a);
    TableRecord *recordB = dataTable00FindById(*b);
    s32 result = recordA->value - recordB->value;

    if (result == 0) {
        DevilRecord *devilA = FUN_00184310(*a);
        DevilRecord *devilB = FUN_00184310(*b);

        result = devilB->grade - devilA->grade;
        if (result == 0) {
            result = *a - *b;
        }
    }
    return result;
}

} /* extern "C" */
