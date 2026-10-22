#include "common.h"

extern "C" {

typedef struct TableRecord {
    /* 0x00 */ u8 unk00[0x43];
    /* 0x43 */ u8 order;
} TableRecord;

extern TableRecord *dataTable8FindRecord(u16 id);

/* qsort comparison of two ids by their records' order byte, ascending. */
s32 dataTableCompareIdsByOrder(const u16 *a, const u16 *b)
{
    TableRecord *first = dataTable8FindRecord(*a);
    TableRecord *second = dataTable8FindRecord(*b);

    return first->order - second->order;
}

} /* extern "C" */
