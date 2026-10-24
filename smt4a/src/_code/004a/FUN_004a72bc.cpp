#include "common.h"

struct SortRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[10];
    /* 0x0C */ u16 group;
};

extern "C" {

/* Comparator: orders records by group, then by id (descending). */
s32 FUN_004a72bc(const SortRecord *a, const SortRecord *b)
{
    s32 order = b->group - a->group;

    if (order == 0) {
        order = b->id - a->id;
    }
    return order;
}

} /* extern "C" */
