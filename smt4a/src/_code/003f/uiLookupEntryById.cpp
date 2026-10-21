/* NON_MATCHING: retail uses `push {r4, r5, r6}` where armcc emits `ldr r2, [r0]`. */
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

LookupEntry * uiLookupEntryById(LookupOwner *owner, s32 id)
{
    LookupEntry *entries = owner->entries;
    for (s32 i = 0; i < 50; i++) {
        if (entries[i].id == id) {
            return &entries[i];
        }
    }
    return NULL;
}

} /* extern "C" */
