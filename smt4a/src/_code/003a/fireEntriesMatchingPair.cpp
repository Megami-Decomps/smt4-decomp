#include "shard/Shard003A.h"

extern "C" {

typedef struct PairEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s8 unk08;
    /* 0x09 */ u8 unk09[2];
    /* 0x0B */ u8 a0;
    /* 0x0C */ u8 b0;
    /* 0x0D */ u8 a1;
    /* 0x0E */ u8 b1;
    /* 0x0F */ u8 a2;
    /* 0x10 */ u8 b2;
} PairEntry;

extern s32 FUN_003b56bc(void);
extern PairEntry *FUN_00379890(s32 index);
extern void FUN_002d23f0(s32 index);

/* Fires FUN_002d23f0 for each entry (up to the first unused one) that lists the pair (a, b) in any of its three slots. */
void fireEntriesMatchingPair(u32 a, u32 b)
{
    s32 i;
    PairEntry *entry;

    for (i = 0; i < FUN_003b56bc(); i++) {
        entry = FUN_00379890(i);
        if (entry->unk08 == -1) {
            return;
        }
        if (entry->a0 == a && entry->b0 == b) {
            FUN_002d23f0(i);
        } else if (entry->a1 == a && entry->b1 == b) {
            FUN_002d23f0(i);
        } else if (entry->a2 == a && entry->b2 == b) {
            FUN_002d23f0(i);
        }
    }
}

} /* extern "C" */
