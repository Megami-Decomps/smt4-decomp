#include "common.h"
#include "gamedata/NkmBaseRecord.h"

extern "C" {

/* Orders two devils by descending rank, descending grade, ascending rank (from fresh records), then descending id. */
s32 uniteCandidateCompare(const u16 *idA, const u16 *idB)
{
    NkmBaseRecord *recordA = nkmBaseGetRecord(*idA);
    NkmBaseRecord *recordB = nkmBaseGetRecord(*idB);
    s32 order = recordB->level - recordA->level;

    if (order == 0) {
        recordA = nkmBaseGetRecord(*idA);
        recordB = nkmBaseGetRecord(*idB);
        order = recordB->race - recordA->race;
        if (order == 0) {
            order = recordA->level - recordB->level;
            if (order == 0) {
                order = recordB->id - recordA->id;
            }
        }
    }
    return order;
}

} /* extern "C" */
