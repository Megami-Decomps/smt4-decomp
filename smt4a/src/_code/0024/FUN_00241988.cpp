#include "common.h"

extern "C" {

struct KeyedRecord {
    /* 0x00 */ u8 unk00[0x258];
    /* 0x258 */ s32 key;
};
/* Compares pointed-to records for sorting. */
s32 FUN_00241988(const KeyedRecord *const *left, const KeyedRecord *const *right)
{
    return (*left)->key - (*right)->key;
}

} /* extern "C" */
