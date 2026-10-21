#include "common.h"

struct EntrySentinels {
    s32 first;      // 0x00
    s32 second;     // 0x04
    u8 unk08[0x10]; // 0x08
    s32 last;       // 0x18
};

struct EntrySentinelTable {
    u8 unk0000[0x2418]; // 0x0000
    EntrySentinels entries[109]; // 0x2418
};

// Reset the three index sentinels in every entry.
extern "C" void btlResetEntryCounters(EntrySentinelTable* table)
{
    for (s32 index = 0; index < 109; ++index) {
        table->entries[index].first = -1;
        table->entries[index].second = -1;
        table->entries[index].last = -1;
    }
}
