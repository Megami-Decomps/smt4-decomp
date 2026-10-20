#include "common.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 grade;
    /* 0x03 */ u8 race;
} DevilRecord;

typedef struct DevilSlot {
    /* 0x0 */ u16 id;
    /* 0x2 */ u16 present;
} DevilSlot;

extern DevilRecord *devilGetRecord(u16 id);

/* Comparison of two demon slots: empty slots last, then by race (descending), grade and id. */
s32 FUN_001d1cb8(DevilSlot *a, DevilSlot *b)
{
    DevilRecord *recordA;
    DevilRecord *recordB;
    s32 diff;

    if (a->present == 0) {
        if (b->present == 0) {
            return 0;
        }
        return 1;
    }
    if (b->present == 0) {
        return -1;
    }
    recordA = devilGetRecord(a->id);
    recordB = devilGetRecord(b->id);
    diff = recordB->race - recordA->race;
    if (diff == 0) {
        diff = recordA->grade - recordB->grade;
        if (diff == 0) {
            diff = recordA->id - recordB->id;
        }
    }
    return diff;
}

}
