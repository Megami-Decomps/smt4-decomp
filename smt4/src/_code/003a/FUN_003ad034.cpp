#include "common.h"

extern "C" {

struct SortKey {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 rank;
    /* 0x03 */ u8 unk03[9];
    /* 0x0c */ u8 kind;
};

/* Comparator: orders entries by descending rank, then kind, then id. */
s32 FUN_003ad034(const SortKey *a, const SortKey *b)
{
    s32 difference = b->rank - a->rank;
    if (difference == 0) {
        difference = b->kind - a->kind;
        if (difference == 0) {
            difference = b->id - a->id;
        }
    }
    return difference;
}

} /* extern "C" */
