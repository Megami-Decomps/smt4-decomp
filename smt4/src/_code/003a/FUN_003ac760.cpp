#include "common.h"

extern "C" {

struct SortKey {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[10];
    /* 0x0c */ u8 kind;
    /* 0x0d */ u8 unk0d;
    /* 0x0e */ u16 group;
};

/* Comparator: orders entries by group, then kind, then id. */
s32 FUN_003ac760(const SortKey *a, const SortKey *b)
{
    s32 difference = a->group - b->group;
    if (difference == 0) {
        difference = a->kind - b->kind;
        if (difference == 0) {
            difference = a->id - b->id;
        }
    }
    return difference;
}

} /* extern "C" */
