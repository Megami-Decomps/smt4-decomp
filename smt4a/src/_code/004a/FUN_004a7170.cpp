#include "common.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

typedef struct Record {
    /* 0x0 */ u8 unk0[6];
    /* 0x6 */ u16 order;
} Record;

Record *devilGetRecord(u32 id);

/* Compares two ids by entry rank (ascending), then record order (higher first), then id (ascending). */
s32 FUN_004a7170(u16 *a, u16 *b)
{
    Table00RecordA *entryA = dataTable00FindById(*a);
    Table00RecordA *entryB = dataTable00FindById(*b);
    s32 diff = entryA->maxMp - entryB->maxMp;

    if (diff == 0) {
        Record *recordA = devilGetRecord(*a);
        Record *recordB = devilGetRecord(*b);

        diff = recordB->order - recordA->order;
        if (diff == 0) {
            diff = *a - *b;
        }
    }
    return diff;
}

} /* extern "C" */
