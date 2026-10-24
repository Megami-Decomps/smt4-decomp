#include "common.h"

struct Entry003ad010 {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0xc];
    /* 0x0e */ u16 key;
};

extern "C" {

/* Orders entries by key descending, then by id descending. */
s32 FUN_003ad010(const Entry003ad010 *first, const Entry003ad010 *second)
{
    s32 difference = second->key - first->key;
    if (difference == 0)
        difference = second->id - first->id;
    return difference;
}

} /* extern "C" */
