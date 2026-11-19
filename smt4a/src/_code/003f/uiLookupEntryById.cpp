#include "common.h"

extern "C" {

struct LookupEntry {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ s16 id;
    /* 0x04 */ u8 unk04[0x14];
};
struct LookupOwner {
    /* 0x0000 */ u8 unk0000[0x1ff8];
    /* 0x1ff8 */ LookupEntry *entries;
};

/* Finds the entry with the given id among the owner's fifty entries. */
LookupEntry *uiLookupEntryById(LookupOwner *owner, s32 id)
{
    LookupEntry *result = NULL;
    for (s32 i = 0; i < 50; i++) {
        if (owner->entries[i].id == id) {
            return &owner->entries[i];
        }
    }
    return result;
}

} /* extern "C" */
