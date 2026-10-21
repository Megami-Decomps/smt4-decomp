#include "common.h"

struct SortRecord {
    /* 0x000 */ u8 padding[0x1B4];
    /* 0x1B4 */ s16 key;
};

extern "C" {

/* Compares record pointers by their signed halfword key. */
s32 sortRecordCompareKey(const SortRecord *const *left, const SortRecord *const *right)
{
    return (*left)->key - (*right)->key;
}

} /* extern "C" */
