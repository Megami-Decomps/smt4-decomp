#include "common.h"

struct Entry004a7384 {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 rank;
    /* 0x03 */ u8 unk03[9];
    /* 0x0c */ u16 key;
};

extern "C" {

/* Orders entries by rank, then key, then id, all ascending. */
s32 FUN_004a7384(const Entry004a7384 *first, const Entry004a7384 *second)
{
    s32 difference = first->rank - second->rank;
    if (difference == 0) {
        difference = first->key - second->key;
        if (difference == 0)
            difference = first->id - second->id;
    }
    return difference;
}

} /* extern "C" */
