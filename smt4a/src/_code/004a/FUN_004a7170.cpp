#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ s32 rank;
} Entry;

typedef struct Record {
    /* 0x0 */ u8 unk0[6];
    /* 0x6 */ u16 order;
} Record;

Entry *dataTable00FindById(u32 id);
Record *FUN_00184310(u32 id);

/* Compares two ids by entry rank (ascending), then record order (higher first), then id (ascending). */
s32 FUN_004a7170(u16 *a, u16 *b)
{
    Entry *entryA = dataTable00FindById(*a);
    Entry *entryB = dataTable00FindById(*b);
    s32 diff = entryA->rank - entryB->rank;

    if (diff == 0) {
        Record *recordA = FUN_00184310(*a);
        Record *recordB = FUN_00184310(*b);

        diff = recordB->order - recordA->order;
        if (diff == 0) {
            diff = *a - *b;
        }
    }
    return diff;
}

} /* extern "C" */
