/* Comparator: the difference of the level fields (+0x32) of the records the two entries' ids refer to. */
#include "common.h"

extern "C" {

struct Record002dca6c {
    /* 0x00 */ u8 unk00[0x32];
    /* 0x32 */ u16 key;
};

struct Entry002dca6c {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 id;
};

Record002dca6c *FUN_00257510(u32 id);

s32 recordCompareByKey(Entry002dca6c *a, Entry002dca6c *b)
{
    Record002dca6c *first = FUN_00257510(a->id);

    return FUN_00257510(b->id)->key - first->key;
}

}
