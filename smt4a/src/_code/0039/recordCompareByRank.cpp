#include "common.h"

extern "C" {

typedef struct Record0039ec5c {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u8 rank;         /* high nibble: primary key, low nibble: secondary key */
    /* 0x29 */ u8 unk29[0x47];
    /* 0x70 */ u16 order;       /* tertiary key, descending */
} Record0039ec5c;

Record0039ec5c *FUN_00192608(u32 id);

/* Sort comparator over two record ids: by rank high nibble, rank low nibble, then by order descending. */
s32 recordCompareByRank(u16 *a, u16 *b)
{
    Record0039ec5c *recA = FUN_00192608(*a);
    Record0039ec5c *recB = FUN_00192608(*b);
    s32 diff = (recA->rank >> 4) - (recB->rank >> 4);

    if (diff == 0) {
        diff = (recA->rank & 0xf) - (recB->rank & 0xf);
        if (diff == 0) {
            recA = FUN_00192608(*a);
            recB = FUN_00192608(*b);
            diff = recB->order - recA->order;
        }
    }
    return diff;
}

} /* extern "C" */
