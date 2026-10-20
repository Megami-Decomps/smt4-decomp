#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 data[0x18];
} Entry;

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Entry *entries;
} Holder;

/* Returns element `index` (0x18 bytes each) of the entry array. */
Entry *FUN_002fbabc(Holder *object, s32 index)
{
    return object->entries + index;
}

} /* extern "C" */
