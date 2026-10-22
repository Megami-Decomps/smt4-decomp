/* NON_MATCHING: the flag-clear loop folds ~(1 << bit) into bic with a scaled byte address; retail builds the mask with mvn/and and a separate flag >> 3 index */
#include "shard/Shard0041.h"

extern "C" {

extern PartyBlockB *gameFlagBlockGet(void);
void FUN_004bb6d8(u32 flag, s32 value);

/* Reports a game flag change to FUN_004bb6d8, then sets or clears the flag's bit. */
static __inline void gameFlagWrite(u32 flag, s32 value)
{
    PartyBlockB *block = gameFlagBlockGet();

    FUN_004bb6d8(flag, value);
    if (value) {
        block->unk00[flag >> 3] |= 1 << (flag & 7);
    } else {
        block->unk00[flag >> 3] &= ~(1 << (flag & 7));
    }
}

/* Clears entry bits 1-2 (and bit 6 plus flags 0x500-0x51f when it is the block's current entry). */
static __inline void partyEntryReleaseCurrent(u32 index)
{
    PartyEntryB *entry = &gameFlagBlockGet()->e[index];
    u32 flag;

    if (!(entry->flags & 2)) {
        return;
    }
    if (gameFlagBlockGet()->unk8E0 != index) {
        entry->flags &= ~6;
        return;
    }
    entry->flags &= ~6;
    entry->flags &= ~0x40;
    gameFlagBlockGet()->unk8E0 = 0;
    for (flag = 0x500; flag < 0x520; flag++) {
        gameFlagWrite(flag, 0);
    }
}

/* Resets an active, unlocked entry (keeping flag bits 2-4); returns whether the entry was active. */
s32 FUN_00417c24(u32 index)
{
    PartyEntryB *entry = &gameFlagBlockGet()->e[index];

    if (!(entry->flags & 1)) {
        return 0;
    }
    if (!(entry->flags & 4)) {
        if (entry->flags & 2) {
            partyEntryReleaseCurrent(index);
        }
        entry->flags &= ~0xe3;
        entry->byte1 = 0;
        entry->bits &= ~0x3d;
    }
    return 1;
}

} /* extern "C" */
