#include "common.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x0 */ u8 unk0[3];
    /* 0x3 */ u8 grade;
} DevilRecord;

DevilRecord *devilGetRecord(u32 id);

/* Compares two ids by entry rank (higher first), then devil grade (ascending), then id (higher first). */
s32 devilRankCompare(u16 *a, u16 *b)
{
    Table00Record *entryA = dataTable00FindById(*a);
    Table00Record *entryB = dataTable00FindById(*b);
    s32 diff = entryB->maxHp - entryA->maxHp;

    if (diff == 0) {
        DevilRecord *devilA = devilGetRecord(*a);
        DevilRecord *devilB = devilGetRecord(*b);

        diff = devilA->grade - devilB->grade;
        if (diff == 0) {
            diff = *b - *a;
        }
    }
    return diff;
}

} /* extern "C" */
