#include "common.h"

struct DataTableRecord {
    /* 0x00 */ u8 padding[0x60];
    /* 0x60 */ u16 key;
};

extern "C" {

/* Compares the subtable record keys. */
s32 dataTable08Sub1CompareKeys(const DataTableRecord *left, const DataTableRecord *right)
{
    return left->key - right->key;
}

} /* extern "C" */
