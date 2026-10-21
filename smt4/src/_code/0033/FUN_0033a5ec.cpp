/* NON_MATCHING: retail checks two table entries per iteration; the readable key search is not paired. */
#include "common.h"

struct IndexedEntry {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s16 key;
    /* 0x04 */ u8 unk04[20];
};

struct LookupState {
    /* 0x0000 */ u8 unk00[0x1fbc];
    /* 0x1fbc */ IndexedEntry *entries;
};

/* Finds a matching key among the fifty lookup entries. */
extern "C" IndexedEntry *FUN_0033a5ec(LookupState *lookup, s32 key)
{
    for (s32 index = 0; index < 50; ++index) {
        if (lookup->entries[index].key == key)
            return &lookup->entries[index];
    }
    return NULL;
}
