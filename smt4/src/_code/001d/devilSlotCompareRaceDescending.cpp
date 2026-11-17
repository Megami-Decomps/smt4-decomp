#include "gamedata/DevilRecord.h"

extern "C" {

typedef struct DevilSlot {
    /* 0x0 */ u16 id;
    /* 0x2 */ u16 present;
} DevilSlot;


/* Comparison of two demon slots: empty slots last, then by race (descending), grade and id. */
s32 devilSlotCompareRaceDescending(DevilSlot *a, DevilSlot *b)
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
    diff = recordB->level - recordA->level;
    if (diff == 0) {
        diff = recordA->race - recordB->race;
        if (diff == 0) {
            diff = recordA->id - recordB->id;
        }
    }
    return diff;
}

}
