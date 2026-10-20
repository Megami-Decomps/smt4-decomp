#include "common.h"

extern "C" {

typedef struct TableRecord {
    /* 0x00 */ u8 unk00[0x43];
    /* 0x43 */ u8 order;
} TableRecord;

extern TableRecord *FUN_00192550(u16 id);

/* qsort comparison of two ids by their records' order byte, ascending. */
s32 dataTableCompareIdsByOrder(const u16 *a, const u16 *b)
{
    TableRecord *first = FUN_00192550(*a);
    TableRecord *second = FUN_00192550(*b);

    return first->order - second->order;
}

} /* extern "C" */
