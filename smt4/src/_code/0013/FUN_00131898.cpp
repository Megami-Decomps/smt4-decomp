#include "common.h"

struct KeyedEntry30 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 key;
    /* 0x22 */ u8 unk22[0xE];
};

struct KeyedEntryList {
    /* 0x000 */ u8 unk000[0x3CC];
    /* 0x3CC */ s32 count;
    /* 0x3D0 */ KeyedEntry30 *entries;
};

extern "C" {

/* The list entry whose key is `key`, or NULL. */
KeyedEntry30 *FUN_00131898(KeyedEntryList *list, u32 key)
{
    for (s32 i = 0; i < list->count; i++) {
        if (list->entries[i].key == key) {
            return &list->entries[i];
        }
    }
    return NULL;
}

} /* extern "C" */
