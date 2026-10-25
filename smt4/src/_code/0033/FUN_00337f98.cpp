/* NON_MATCHING: the candidate loop keeps its index (u32 i) but retail compares it signed (blt, bcc here) and the refill loop's two address temporaries use swapped scratch registers. */
#include "common.h"

/* The source of the ids: fifty candidates. */
struct IdCandidates {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u32 ids[50];
};

/* The owner of the five picked ids. */
struct IdPicks {
    /* 0x0000 */ u8 unk0000[0x1e8c];
    /* 0x1e8c */ u16 ids[5];
};

extern "C" {
/* Picks the distinct nonzero candidate ids into the five slots, then fills the remaining slots by
 * repeating the picked ones. */
void FUN_00337f98(IdPicks *picks, IdCandidates *candidates)
{
    u8 count = 0;
    for (u32 i = 0; i < 50; i++) {
        u32 id = candidates->ids[i];
        if (id != 0 && picks->ids[0] != id && picks->ids[1] != id && picks->ids[2] != id &&
            picks->ids[3] != id && picks->ids[4] != id) {
            picks->ids[count] = id;
            count++;
        }
    }
    if (count != 0) {
        u8 source = 0;
        if (count < 5) {
            for (s32 slot = count; slot < 5; slot++) {
                picks->ids[slot] = picks->ids[source];
                source++;
                if (source > count) {
                    source = 0;
                }
            }
        }
    }
}
}
