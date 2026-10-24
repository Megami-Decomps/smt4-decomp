#include "common.h"

struct SortRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[10];
    /* 0x0C */ u8 group;
    /* 0x0D */ u8 unk0d[5];
    /* 0x12 */ u16 rank;
};

extern "C" {

/* Comparator: orders records by rank, then group, then id (ascending). */
s32 FUN_003ac7b8(const SortRecord *a, const SortRecord *b)
{
    s32 order = a->rank - b->rank;

    if (order == 0) {
        order = a->group - b->group;
    }

    if (order == 0) {
        order = a->id - b->id;
    }
    return order;
}

} /* extern "C" */
