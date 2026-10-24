#include "common.h"

struct Entry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[10];
    /* 0x0C */ u16 order;
    /* 0x0E */ u8 unk0E[2];
    /* 0x10 */ u16 group;
};

/* Sorts by group, then order, then id. */
extern "C" s32 FUN_004a6f8c(const Entry *a, const Entry *b)
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
