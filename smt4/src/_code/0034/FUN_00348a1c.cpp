/* NON_MATCHING: ported smt4a FUN_00417c24 structure (release helper, gameFlagWrite with keep, flags loaded before the secondary bits); only the secondary-bits temporary takes r1 where retail has r2. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "gamedata/GameDataAccess_VariantA.h"

extern "C" {
s32 FUN_0023ddbc(u32 flagIndex, s32 value);

struct FlagEntryBlock00348a1c {
    /* 0x000 */ u8 bits[0x200];
    /* 0x200 */ GameFlagEntryIV entries[0x190];
    /* 0x840 */ u16 selectedEntryIndex;
};

/* Reports a game flag change to FUN_0023ddbc, then sets or clears the flag's bit. */
static __inline void gameFlagWrite(u32 flag, s32 value)
{
    FlagEntryBlock00348a1c *block = reinterpret_cast<FlagEntryBlock00348a1c *>(gameGetFlagBlock());

    FUN_0023ddbc(flag, value);
    u32 index = flag >> 3;
    if (value) {
        block->bits[index] |= 1 << (flag & 7);
    } else {
        s32 keep = ~(1 << (flag & 7));
        block->bits[index] &= keep;
    }
}

/* Clears entry bits 1-2 (and bit 6 plus flags 0x500-0x51f when it is the block's current entry). */
static __inline void flagEntryReleaseCurrent(u32 index)
{
    GameFlagEntryIV *entry = &reinterpret_cast<FlagEntryBlock00348a1c *>(gameGetFlagBlock())->entries[index];
    u32 flag;

    if (!(entry->flags & 2)) {
        return;
    }
    if (reinterpret_cast<FlagEntryBlock00348a1c *>(gameGetFlagBlock())->selectedEntryIndex != index) {
        entry->flags &= ~6;
        return;
    }
    entry->flags &= ~6;
    entry->flags &= ~0x40;
    reinterpret_cast<FlagEntryBlock00348a1c *>(gameGetFlagBlock())->selectedEntryIndex = 0;
    for (flag = 0x500; flag < 0x520; flag++) {
        gameFlagWrite(flag, 0);
    }
}

u32 FUN_00348a1c(u32 index)
{
    GameFlagEntryIV *entry = &reinterpret_cast<FlagEntryBlock00348a1c *>(gameGetFlagBlock())->entries[index];

    if (!(entry->flags & 1)) {
        return 0;
    }
    if (!(entry->flags & 4)) {
        if (entry->flags & 2) {
            flagEntryReleaseCurrent(index);
        }
        u8 flags = entry->flags;
        u8 bits = entry->secondaryFlags;
        entry->value = 0;
        entry->secondaryFlags = bits & ~0x5;
        entry->flags = flags & ~0xe3;
    }
    return 1;
}

} /* extern "C" */
