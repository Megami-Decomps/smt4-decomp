#include "common.h"

struct Entry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 group;
    /* 0x03 */ u8 unk03[9];
    /* 0x0C */ u16 order;
};

/* Sorts by group, then order, then id, all descending. */
extern "C" s32 FUN_004a7624(const Entry *a, const Entry *b)
{
    s32 diff = b->group - a->group;

    if (diff == 0) {
        diff = b->order - a->order;
        if (diff == 0) {
            diff = b->id - a->id;
        }
    }
    return diff;
}
