#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ s32 rank;
} Entry;

typedef struct DevilRecord {
    /* 0x0 */ u8 unk0[3];
    /* 0x3 */ u8 grade;
} DevilRecord;

Entry *dataTable00FindById(u32 id);
DevilRecord *devilGetRecord(u32 id);

/* Compares two ids by entry rank (higher first), then devil grade (ascending), then id (higher first). */
s32 devilRankCompare(u16 *a, u16 *b)
{
    Entry *entryA = dataTable00FindById(*a);
    Entry *entryB = dataTable00FindById(*b);
    s32 diff = entryB->rank - entryA->rank;

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
