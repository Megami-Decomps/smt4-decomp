#include "common.h"

struct Entry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 group;
    /* 0x03 */ u8 unk03[9];
    /* 0x0C */ u8 order;
};

/* Sorts by group, then order, then id. */
extern "C" s32 FUN_003acbe8(const Entry *a, const Entry *b)
{
    s32 diff = a->group - b->group;

    if (diff == 0) {
        diff = a->order - b->order;
        if (diff == 0) {
            diff = a->id - b->id;
        }
    }
    return diff;
}
