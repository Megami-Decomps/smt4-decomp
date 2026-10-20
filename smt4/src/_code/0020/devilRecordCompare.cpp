#include "common.h"

extern "C" {

typedef struct DevilRecord00206f30 {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u32 bits54;      /* low 10 bits: primary sort key */
    /* 0x58 */ u8 unk58[0x40];
    /* 0x98 */ u16 order;       /* secondary sort key */
} DevilRecord00206f30;

DevilRecord00206f30 *dataTable08Sub2GetRecord(u32 id);

/* Sort comparator over two record ids: by the record's 10-bit key, then by its order. */
s32 devilRecordCompare(u16 *a, u16 *b)
{
    DevilRecord00206f30 *recA = dataTable08Sub2GetRecord(*a);
    DevilRecord00206f30 *recB = dataTable08Sub2GetRecord(*b);
    s32 diff = (recA->bits54 & 0x3ff) - (recB->bits54 & 0x3ff);

    if (diff == 0) {
        recA = dataTable08Sub2GetRecord(*a);
        recB = dataTable08Sub2GetRecord(*b);
        diff = recA->order - recB->order;
    }
    return diff;
}

} /* extern "C" */
