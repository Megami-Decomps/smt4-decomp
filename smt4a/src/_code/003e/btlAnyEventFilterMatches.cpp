/* NON_MATCHING: -O3 hoists all category masks into an 80-byte spill frame; retail reloads masks inside the loop. Candidate -O2 may avoid this. */
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BattleEventFilter {
    /* 0x00 */ u32 mask;
    /* 0x04 */ s16 id;
    /* 0x06 */ u8 first;
    /* 0x07 */ u8 second;
    /* 0x08 */ u8 third;
    /* 0x09 */ u8 unk09[3];
};

struct BattleEventFilters {
    /* 0x0000 */ u8 unk0000[0x45c0];
    /* 0x45c0 */ BattleEventFilter entries[128];
};

struct BattleFilterMasks {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u64 groups[4];
};

extern "C" {
extern BattleFilterMasks g_btlMain;

static __inline bool battleEventFilterMatches(const BattleEventFilter *entry, const BtlCombatantEntryA *actor)
{
    u64 flags = actor->flags;
    if (flags & g_btlMain.groups[0])
        return (entry->mask & static_cast<u32>(g_btlMain.groups[0])) && entry->id == -1;
    if (flags & g_btlMain.groups[1])
        return (entry->mask & static_cast<u32>(g_btlMain.groups[1])) && entry->id == actor->id;
    if (flags & g_btlMain.groups[2])
        return (entry->mask & static_cast<u32>(g_btlMain.groups[2])) && entry->id == actor->id;
    if (flags & g_btlMain.groups[3])
        return (entry->mask & static_cast<u32>(g_btlMain.groups[3])) && entry->id == actor->id;
    return false;
}

// Test the requested event flag on matching combatant category/ID filters.
u32 btlAnyEventFilterMatches(const BattleEventFilters *filters, const BtlCombatantEntryA *actor, s32 kind)
{
    for (s32 i = 0; i < 128; ++i) {
        const BattleEventFilter *entry = &filters->entries[i];
        if (entry->id != 0 && entry->mask != 0) {
            if (battleEventFilterMatches(entry, actor)) {
                if (kind == 1) {
                    if (entry->first)
                        return 1;
                } else if (kind == 2) {
                    if (entry->second)
                        return 1;
                } else if (kind == 3) {
                    if (entry->third)
                        return 1;
                }
            }
        }
    }
    return 0;
}
}
