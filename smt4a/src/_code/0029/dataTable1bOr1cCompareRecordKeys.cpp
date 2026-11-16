#include "common.h"

struct WordRecord {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 key;
};

extern "C" {

extern WordRecord *dataTable1bOr1cGetRecord(u32 index);

/* Compares the record keys selected by two halfword identifiers. */
s32 dataTable1bOr1cCompareRecordKeys(const u16 *left, const u16 *right)
{
    WordRecord *a = dataTable1bOr1cGetRecord(*left);
    WordRecord *b = dataTable1bOr1cGetRecord(*right);
    if (a == NULL) {
        return 0;
    }
    if (b == NULL) {
        return 0;
    }
    return a->key - b->key;
}

} /* extern "C" */
