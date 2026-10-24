#include "common.h"

struct Entry003acad4 {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0xa];
    /* 0x0c */ u8 rank;
    /* 0x0d */ u8 unk0d[5];
    /* 0x12 */ u16 key;
};

extern "C" {

/* Orders entries by key descending, then rank descending, then id descending. */
s32 FUN_003acad4(const Entry003acad4 *first, const Entry003acad4 *second)
{
    s32 difference = second->key - first->key;
    if (difference == 0) {
        difference = second->rank - first->rank;
        if (difference == 0)
            difference = second->id - first->id;
    }
    return difference;
}

} /* extern "C" */
