#include "common.h"

extern "C" {

typedef struct Record001e1794 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 order;
} Record001e1794;

Record001e1794 *dataTable1bOr1cGetRecord(u32 id);
u32 FUN_00298e00(u16 id);

static inline s32 compareDevilRecordOrder(const u16 *first, const u16 *second)
{
    Record001e1794 *recA = dataTable1bOr1cGetRecord(*first);
    Record001e1794 *recB = dataTable1bOr1cGetRecord(*second);
    s32 result = 0;
    if (recA != NULL && recB != NULL)
        result = recA->order - recB->order;
    return result;
}

/* Sort comparator over two ids: the one whose mask has bits the other lacks sorts first, ties go by record order. */
s32 devilMaskCompare(u16 *a, u16 *b)
{
    u32 maskA = FUN_00298e00(*a);
    s32 result = 0;
    u32 maskB = FUN_00298e00(*b);

    if ((maskA & ~maskB) != 0) {
        result = -1;
    }
    if ((maskB & ~maskA) != 0) {
        result = 1;
    }
    if (result == 0) {
        result = compareDevilRecordOrder(a, b);
    }
    return result;
}

} /* extern "C" */
