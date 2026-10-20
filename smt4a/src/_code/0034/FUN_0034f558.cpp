#include "common.h"

extern "C" {

struct Record0034f558 {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ u16 key;
};

struct Entry0034f558 {
    /* 0x00 */ u16 id;
};

Record0034f558 *FUN_00192608(u32 id);

/* Comparator: the difference of the keys (+0x70) of the records the two entries' ids refer to. */
s32 FUN_0034f558(Entry0034f558 *a, Entry0034f558 *b)
{
    Record0034f558 *first = FUN_00192608(a->id);
    Record0034f558 *second = FUN_00192608(b->id);

    return first->key - second->key;
}

}
