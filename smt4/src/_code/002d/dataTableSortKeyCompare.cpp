#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x98];
    /* 0x98 */ u16 sortKey;
} Record;

extern Record *dataTable08Sub2GetRecord(u16 id);

/* Orders two ids by their record's sort key. */
int dataTableSortKeyCompare(u16 *a, u16 *b)
{
    Record *recordA = dataTable08Sub2GetRecord(*a);
    Record *recordB = dataTable08Sub2GetRecord(*b);

    return recordA->sortKey - recordB->sortKey;
}

}
