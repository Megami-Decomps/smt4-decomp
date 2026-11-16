#include "common.h"

extern "C" {

struct Record0031324c {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 key;
};

struct Entry0031324c {
    /* 0x00 */ u16 id;
};

Record0031324c *table8Type5FindById(u32 id);
s32 itemGetSortCategory(u32 key);

/* Comparator: orders entries by itemGetSortCategory of their records' key, then by the key itself. */
s32 FUN_0031324c(Entry0031324c *a, Entry0031324c *b)
{
    Record0031324c *first = table8Type5FindById(a->id);
    Record0031324c *second = table8Type5FindById(b->id);
    s32 firstRank = itemGetSortCategory(first->key);
    s32 order = itemGetSortCategory(second->key) - firstRank;

    if (order == 0) {
        order = second->key - first->key;
    }
    return order;
}

}
