#include "common.h"

struct Entry003aa8dc {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ s32 key;
};

extern "C" {

/* Orders entries by key descending, then by id ascending. */
s32 entryCompareByKeyThenId(const Entry003aa8dc *first, const Entry003aa8dc *second)
{
    s32 difference = second->key - first->key;
    if (difference == 0)
        difference = first->id - second->id;
    return difference;
}

} /* extern "C" */
