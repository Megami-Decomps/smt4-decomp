#include "common.h"

extern "C" {

struct Record0021960c {
    /* 0x00 */ u8 unk00[0x6F];
    /* 0x6F */ u8 key;
};

struct Entry0021960c {
    /* 0x00 */ u16 id;
};

Record0021960c *dataTable08Sub1GetRecord(u32 id);

/* Comparator: the difference of the key bytes (+0x6F) of the records the two entries' ids refer to. */
s32 FUN_0021960c(Entry0021960c *a, Entry0021960c *b)
{
    Record0021960c *first = dataTable08Sub1GetRecord(a->id);
    Record0021960c *second = dataTable08Sub1GetRecord(b->id);

    return first->key - second->key;
}

}
