/* NON_MATCHING: register allocation only in armcc's unrolled loop (retail: constant 0x20 in r5, entries in r4; here swapped). */
#include "common.h"

namespace {
struct IdEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x5e];
};

struct IdEntryOwner {
    /* 0x000 */ u8 unk000[0x3b4];
    /* 0x3B4 */ s32 count;
    /* 0x3B8 */ IdEntry *entries;
};
}

extern "C" {

/* Find the entry with the given id, or NULL. */
IdEntry *FUN_00192360(IdEntryOwner *owner, u32 id)
{
    for (s32 i = 0; i < owner->count; ++i) {
        if (owner->entries[i].id == id) {
            return &owner->entries[i];
        }
    }
    return NULL;
}

} /* extern "C" */
