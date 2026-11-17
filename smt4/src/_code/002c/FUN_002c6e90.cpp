#include "common.h"
#include "gamedata/DevilRecord.h"

extern "C" {

/* Orders two devils by descending rank, descending grade, ascending rank (from fresh records), then descending id. */
s32 FUN_002c6e90(const u16 *idA, const u16 *idB)
{
    DevilRecord *recordA = devilGetRecord(*idA);
    DevilRecord *recordB = devilGetRecord(*idB);
    s32 order = recordB->level - recordA->level;

    if (order == 0) {
        recordA = devilGetRecord(*idA);
        recordB = devilGetRecord(*idB);
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
