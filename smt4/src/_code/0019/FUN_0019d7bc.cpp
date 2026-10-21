#include "common.h"

struct SortRecord {
    /* 0x00 */ u8 padding[0xF4];
    /* 0xF4 */ s32 key;
};

extern "C" {

/* Orders pointers to records by their word key. */
s32 FUN_0019d7bc(const SortRecord *const *left, const SortRecord *const *right)
{
    return (*left)->key - (*right)->key;
}

} /* extern "C" */
