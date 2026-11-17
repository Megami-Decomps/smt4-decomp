#include "common.h"
#include "gamedata/NkmBaseRecord.h"

extern "C" {

extern u32 itemGetFlagBit1(u16 id);

/* qsort-style comparison of two devil ids: by flag word first, then race, level and id. */
s32 devilCompare(u16 *a, u16 *b)
{
    u32 flagsA = itemGetFlagBit1(*a);
    u32 flagsB = itemGetFlagBit1(*b);
    NkmBaseRecord *recordA;
    NkmBaseRecord *recordB;
    s32 result;

    if ((flagsB & ~flagsA) != 0) {
        result = 1;
    } else if ((flagsA & ~flagsB) != 0) {
        result = -1;
    } else {
        recordA = nkmBaseGetRecord(*a);
        recordB = nkmBaseGetRecord(*b);
        result = recordB->race - recordA->race;
        if (result == 0) {
            result = recordA->level - recordB->level;
            if (result == 0) {
                result = recordB->id - recordA->id;
            }
        }
    }
    return result;
}

} /* extern "C" */
