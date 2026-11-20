#include "gamedata/NkmBaseRecordA.h"

extern "C" {

extern u32 compendiumEntryIsRegistered(u16 id);

/* Sort comparison of two ids: by their compendiumEntryIsRegistered bit sets (a set containing bits the other lacks sorts first), then by rank ascending, order descending and id ascending. */
s32 uniteCandidateCompare(u16 *idA, u16 *idB)
{
    u32 setA = compendiumEntryIsRegistered(*idA);
    u32 setB = compendiumEntryIsRegistered(*idB);
    NkmBaseRecordA *recordA;
    NkmBaseRecordA *recordB;
    s32 diff;

    if ((setB & ~setA) != 0) {
        return -1;
    }
    if ((setA & ~setB) != 0) {
        return 1;
    }
    recordA = nkmBaseGetRecord(*idA);
    recordB = nkmBaseGetRecord(*idB);
    diff = recordA->race - recordB->race;
    if (diff == 0) {
        diff = recordB->level - recordA->level;
        if (diff == 0) {
            diff = recordA->id - recordB->id;
        }
    }
    return diff;
}

} /* extern "C" */
