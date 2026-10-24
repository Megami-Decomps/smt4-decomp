#include "common.h"

struct SortRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[10];
    /* 0x0C */ u16 group;
    /* 0x0E */ u8 unk0e[2];
    /* 0x10 */ u16 rank;
};

extern "C" {

/* Comparator: orders records by rank, then group, then id (descending). */
s32 FUN_004a7288(const SortRecord *a, const SortRecord *b)
{
    s32 order = b->rank - a->rank;

    if (order == 0) {
        order = b->group - a->group;
    }

    if (order == 0) {
        order = b->id - a->id;
    }
    return order;
}

} /* extern "C" */
