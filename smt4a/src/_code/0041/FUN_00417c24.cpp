#include "shard/Shard0041.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

extern "C" {

void FUN_004bb6d8(u32 flag, s32 value);

/* Reports a game flag change to FUN_004bb6d8, then sets or clears the flag's bit. */
static __inline void gameFlagWrite(u32 flag, s32 value)
{
    PartyBlockB *block = reinterpret_cast<PartyBlockB *>(gameFlagBlockGet());

    FUN_004bb6d8(flag, value);
    u32 index = flag >> 3;
    if (value) {
        block->unk00[index] |= 1 << (flag & 7);
    } else {
        s32 keep = ~(1 << (flag & 7));
        block->unk00[index] &= keep;
    }
}

/* Clears entry bits 1-2 (and bit 6 plus flags 0x500-0x51f when it is the block's current entry). */
static __inline void partyEntryReleaseCurrent(u32 index)
{
    PartyEntryB *entry = &reinterpret_cast<PartyBlockB *>(gameFlagBlockGet())->e[index];
    u32 flag;

    if (!(entry->flags & 2)) {
        return;
    }
    if (reinterpret_cast<PartyBlockB *>(gameFlagBlockGet())->unk8E0 != index) {
        entry->flags &= ~6;
        return;
    }
    entry->flags &= ~6;
    entry->flags &= ~0x40;
    reinterpret_cast<PartyBlockB *>(gameFlagBlockGet())->unk8E0 = 0;
    for (flag = 0x500; flag < 0x520; flag++) {
        gameFlagWrite(flag, 0);
    }
}

/* Resets an active, unlocked entry (keeping flag bits 2-4); returns whether the entry was active. */
s32 FUN_00417c24(u32 index)
{
    PartyEntryB *entry = &reinterpret_cast<PartyBlockB *>(gameFlagBlockGet())->e[index];

    if (!(entry->flags & 1)) {
        return 0;
    }
    if (!(entry->flags & 4)) {
        if (entry->flags & 2) {
            partyEntryReleaseCurrent(index);
        }
        u8 flags = entry->flags;
        u8 bits = entry->bits;
        entry->byte1 = 0;
        entry->flags = flags & ~0xe3;
        entry->bits = bits & ~0x3d;
    }
    return 1;
}

} /* extern "C" */
