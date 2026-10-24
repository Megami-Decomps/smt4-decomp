#include "common.h"

extern "C" {

struct SortKey {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[10];
    /* 0x0c */ u16 kind;
};

/* Comparator: orders entries by kind, then by id. */
s32 FUN_004a6fc0(const SortKey *a, const SortKey *b)
{
    s32 difference = a->kind - b->kind;
    if (difference == 0) {
        difference = a->id - b->id;
    }
    return difference;
}

} /* extern "C" */
