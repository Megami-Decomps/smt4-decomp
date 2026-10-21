#include "common.h"

extern "C" {

struct KeyedRecord {
    /* 0x00 */ u8 unk00[0x108];
    /* 0x108 */ s32 key;
};
/* Compares pointed-to records for sorting. */
s32 FUN_00221a7c(const KeyedRecord *const *left, const KeyedRecord *const *right)
{
    return (*left)->key - (*right)->key;
}

} /* extern "C" */
