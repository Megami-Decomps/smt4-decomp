#include "gamedata/DevilRecordA.h"

extern "C" {

typedef struct Ref {
    /* 0x0 */ u16 id;
    /* 0x2 */ u16 group;
} Ref;

/* Compares two refs: refs without a group sort last, then by group, record kind, order (higher first) and id. */
u32 FUN_002ce0d8(Ref *a, Ref *b)
{
    u32 groupB = b->group;
    u32 result;

    if (a->group == 0) {
        return groupB != 0;
    }
    if (groupB == 0) {
        result = 0xFFFFFFFF;
    } else {
        result = a->group - groupB;
        if (result == 0) {
            DevilRecordA *recordA = devilGetRecord(a->id);
            DevilRecordA *recordB = devilGetRecord(b->id);

            result = recordA->race - recordB->race;
            if (result == 0) {
                result = recordB->level - recordA->level;
                if (result == 0) {
                    result = recordA->id - recordB->id;
                }
            }
        }
    }
    return result;
}

} /* extern "C" */
