#include "gamedata/DevilRecord.h"

extern "C" {

/* A devil table record: id and two ordering bytes. */

/* Orders two devils by rank, then grade, then reverse rank (re-read from fresh records), then id. */
s32 FUN_001d1d78(const u16 *idA, const u16 *idB)
{
    DevilRecord *recordA = devilGetRecord(*idA);
    DevilRecord *recordB = devilGetRecord(*idB);
    s32 order = recordA->level - recordB->level;

    if (order == 0) {
        recordA = devilGetRecord(*idA);
        recordB = devilGetRecord(*idB);
        order = recordA->race - recordB->race;
        if (order == 0) {
            order = recordB->level - recordA->level;
            if (order == 0) {
                order = recordA->id - recordB->id;
            }
        }
    }
    return order;
}

} /* extern "C" */
