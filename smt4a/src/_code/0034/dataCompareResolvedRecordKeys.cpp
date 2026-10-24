#include "common.h"

extern "C" {

struct Record0034f558 {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ u16 key;
};

struct Entry0034f558 {
    /* 0x00 */ u16 id;
};

Record0034f558 *dataTable08Sub2GetRecord(u32 id);

/* Comparator: the difference of the keys (+0x70) of the records the two entries' ids refer to. */
s32 dataCompareResolvedRecordKeys(Entry0034f558 *a, Entry0034f558 *b)
{
    Record0034f558 *first = dataTable08Sub2GetRecord(a->id);
    Record0034f558 *second = dataTable08Sub2GetRecord(b->id);

    return first->key - second->key;
}

}
