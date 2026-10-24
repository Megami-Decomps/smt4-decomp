#include "common.h"

extern "C" {

/* A devil table record: id and two ordering bytes. */
struct DevilRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 grade;
    /* 0x03 */ u8 rank;
};

DevilRecord *devilGetRecord(u16 id);

/* Orders two devils by rank, then grade, then reverse rank (re-read from fresh records), then id. */
s32 FUN_001d1d78(const u16 *idA, const u16 *idB)
{
    DevilRecord *recordA = devilGetRecord(*idA);
    DevilRecord *recordB = devilGetRecord(*idB);
    s32 order = recordA->rank - recordB->rank;

    if (order == 0) {
        recordA = devilGetRecord(*idA);
        recordB = devilGetRecord(*idB);
        order = recordA->grade - recordB->grade;
        if (order == 0) {
            order = recordB->rank - recordA->rank;
            if (order == 0) {
                order = recordA->id - recordB->id;
            }
        }
    }
    return order;
}

} /* extern "C" */
