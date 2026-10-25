#ifndef BATTLE_ENTRYSTATS_H
#define BATTLE_ENTRYSTATS_H

#include "shard/W4_Match6_BtlEntry.h"
#include <stddef.h>

struct BtlEntryStats {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 id;
    /* 0x04 */ u8 unk04[0xE4];
    /* 0xE8 */ s16 hp;
    /* 0xEA */ s16 maxHp;
};

struct BtlEntryMpStats : BtlEntryStats {
    /* 0xEC */ s16 mp;
    /* 0xEE */ s16 maxMp;
};

struct BtlActiveEntry {
    /* 0x00 */ u8 unk00[0xCC];
    /* 0xCC */ BtlEntryStats stats;
};

struct BtlEntryMpStatsView {
    /* 0x00 */ u8 unk00[0xCC];
    /* 0xCC */ BtlEntryMpStats stats;
};

struct BtlEntryStatsView {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0xC8];
    /* 0x0CC */ BtlEntryMpStats stats;
    /* 0x1BC */ u8 unk1BC[0xCC];
};

typedef char BtlEntryStatsLayoutCheck[
    sizeof(BtlEntryStats) == 0xEC && sizeof(BtlEntryMpStats) == 0xF0 &&
    offsetof(BtlActiveEntry, stats) == 0xCC && sizeof(BtlActiveEntry) == 0x1B8 &&
    offsetof(BtlEntryMpStatsView, stats) == 0xCC &&
    offsetof(BtlEntryMpStatsView, stats.mp) == 0x1B8 &&
    offsetof(BtlEntryMpStatsView, stats.maxMp) == 0x1BA ? 1 : -1];
typedef char BtlEntryStatsViewLayoutCheck[
    sizeof(BtlEntryStatsView) == sizeof(BtlEntry) &&
    offsetof(BtlEntryStatsView, stats.id) == 0xCE &&
    offsetof(BtlEntryStatsView, stats.hp) == 0x1B4 &&
    offsetof(BtlEntryStatsView, stats.mp) == 0x1B8 ? 1 : -1];

static __inline BtlEntryMpStats *btlEntryGetStats(BtlEntry *entry)
{
    return &reinterpret_cast<BtlEntryMpStatsView *>(entry)->stats;
}


#endif
