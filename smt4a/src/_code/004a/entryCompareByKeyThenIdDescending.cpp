#include "common.h"

struct Entry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ s32 key;
};

/* Sorts by key ascending, then by id descending. */
extern "C" s32 entryCompareByKeyThenIdDescending(const Entry *a, const Entry *b)
{
    s32 diff = a->key - b->key;

    if (diff == 0) {
        diff = b->id - a->id;
    }
    return diff;
}
