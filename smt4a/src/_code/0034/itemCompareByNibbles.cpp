#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u8 low : 4;
    /*      */ u8 high : 4;
    /* 0x29 */ u8 unk29[0x47];
    /* 0x70 */ u16 order;
} Record;

extern Record *FUN_00192608(u16 id);

/* qsort-style comparison of two ids by the records' high nibble and low nibble (descending), then order (ascending). */
s32 itemCompareByNibbles(u16 *a, u16 *b)
{
    Record *recordA = FUN_00192608(*a);
    Record *recordB = FUN_00192608(*b);
    s32 result = recordB->high - recordA->high;

    if (result == 0) {
        result = recordB->low - recordA->low;
        if (result == 0) {
            recordA = FUN_00192608(*a);
            recordB = FUN_00192608(*b);
            result = recordA->order - recordB->order;
        }
    }
    return result;
}

} /* extern "C" */
