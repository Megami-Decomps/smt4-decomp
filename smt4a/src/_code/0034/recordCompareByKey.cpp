/* Comparator: the difference of the level fields (+0x32) of the records the two entries' ids refer to. */
#include "common.h"

extern "C" {

struct Record0034f378 {
    /* 0x00 */ u8 unk00[0x32];
    /* 0x32 */ u16 key;
};

struct Entry0034f378 {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 id;
};

Record0034f378 *dataTable12FindBySortKey(u32 id);

s32 recordCompareByKey(Entry0034f378 *a, Entry0034f378 *b)
{
    Record0034f378 *first = dataTable12FindBySortKey(a->id);

    return dataTable12FindBySortKey(b->id)->key - first->key;
}

}
