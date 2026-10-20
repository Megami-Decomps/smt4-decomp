#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u8 order;
} Record;

extern Record *dataTable08Sub0GetRecord(u32 id);

/* Comparison of two ids by their record's order byte, descending. */
s32 FUN_00313338(const u16 *a, const u16 *b)
{
    Record *recordA = dataTable08Sub0GetRecord(*a);
    Record *recordB = dataTable08Sub0GetRecord(*b);

    return recordB->order - recordA->order;
}

} /* extern "C" */
