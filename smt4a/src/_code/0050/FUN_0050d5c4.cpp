/* NON_MATCHING: first loop lacks retail's top-of-loop i<=15 test and early pop; range test compares operands swapped (cs vs ls); owner/index registers r4/r5 swapped */
#include "common.h"

extern "C" {

typedef struct WordsFlag8 {
    u32 id;      /* 0x00 */
    u32 unk04;   /* 0x04 */
    u32 unk08;   /* 0x08 */
} WordsFlag8;

typedef struct IdEntry {
    u8 unk00[0x1c];
    u32 id;      /* 0x1c */
} IdEntry;

struct RangeOwner;

typedef struct RangeOwnerVtbl {
    void *unk00[3];
    void (*reset)(struct RangeOwner *self); /* 0x0c */
} RangeOwnerVtbl;

typedef struct RangeOwner {
    RangeOwnerVtbl *vtbl;     /* 0x000 */
    u8 unk04[0x08];
    u8 active;                /* 0x00c */
    u8 unk0D[0x83];
    IdEntry *entries[16];     /* 0x090 */
    u8 unkD0[0x64];
    WordsFlag8 flags[4];      /* 0x134 */
} RangeOwner;

int wordsFlag8Reset(WordsFlag8 *flags);

/* Resets the owner (seen through its base at 0x44) when any entry or flag id lies in [lo, hi]. */
void FUN_0050d5c4(u8 *base, u32 lo, u32 hi)
{
    RangeOwner *owner = (RangeOwner *)(base - 0x44);
    s32 i;
    u32 j;

    if (!owner->active) {
        return;
    }
    for (i = 0; i < 16; i++) {
        IdEntry *entry = owner->entries[i];
        if (entry != NULL && lo <= entry->id && entry->id <= hi) {
            owner->vtbl->reset(owner);
            break;
        }
    }
    for (j = 0; j < 4; j++) {
        if (lo <= owner->flags[j].id && owner->flags[j].id <= hi) {
            wordsFlag8Reset(&owner->flags[j]);
        }
    }
}

} /* extern "C" */
