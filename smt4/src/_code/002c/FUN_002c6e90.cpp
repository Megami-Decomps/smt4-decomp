#include "common.h"

extern "C" {

/* A devil table record: id and two ordering bytes. */
struct DevilRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 grade;
    /* 0x03 */ u8 rank;
};

DevilRecord *devilGetRecord(u16 id);

/* Orders two devils by descending rank, descending grade, ascending rank (from fresh records), then descending id. */
s32 FUN_002c6e90(const u16 *idA, const u16 *idB)
{
    DevilRecord *recordA = devilGetRecord(*idA);
    DevilRecord *recordB = devilGetRecord(*idB);
    s32 order = recordB->rank - recordA->rank;

    if (order == 0) {
        recordA = devilGetRecord(*idA);
        recordB = devilGetRecord(*idB);
        order = recordB->grade - recordA->grade;
        if (order == 0) {
            order = recordA->rank - recordB->rank;
            if (order == 0) {
                order = recordB->id - recordA->id;
            }
        }
    }
    return order;
}

} /* extern "C" */
