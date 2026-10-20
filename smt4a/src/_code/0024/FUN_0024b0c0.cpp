#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 data[0x20];
} Entry;

typedef struct Header {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 count;
} Header;

typedef struct Holder {
    /* 0x00 */ u8 unk00[0xB0];
    /* 0xB0 */ Header *header;
    /* 0xB4 */ Entry *entries;
} Holder;

/* Returns entry `index` (0x20 bytes each), or NULL when the index is out of range. */
Entry *FUN_0024b0c0(Holder *holder, s32 index)
{
    Entry *entry;

    if ((index >= 0) && (holder->header->count > index)) {
        entry = holder->entries + index;
    } else {
        entry = NULL;
    }
    return entry;
}

} /* extern "C" */
