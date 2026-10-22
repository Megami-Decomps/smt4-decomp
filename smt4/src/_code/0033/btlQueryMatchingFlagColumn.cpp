#include "shard/W4_Match6_BtlEntry.h"

struct BattleMatchFlag {
    u32 categories;
    s16 id;
    u8 first, second;
};
// The match table occupies an unnamed part of the existing battle-state prefix.
struct BattleMatchFlagsView { u8 unk0000[0x44b8]; BattleMatchFlag records[128]; };

// Query the selected flag column for a matching combatant category and identifier.
extern "C" u32 btlQueryMatchingFlagColumn(const BtlMainState *battle, const BtlEntry *entry, s32 column)
{
    const BattleMatchFlagsView *table = (const BattleMatchFlagsView *)battle;
    for (s32 i = 0; i < 128; ++i) {
        const BattleMatchFlag &record = table->records[i];
        if (!record.id || !record.categories)
            continue;
        if (entry->flags & 2) {
            if (!(record.categories & 2) || record.id != -1)
                continue;
        } else if (entry->flags & 8) {
            if (!(record.categories & 8) || record.id != entry->id)
                continue;
        } else if (entry->flags & 0x10) {
            if (!(record.categories & 0x10) || record.id != entry->id)
                continue;
        } else if (entry->flags & 0x20) {
            if (!(record.categories & 0x20) || record.id != entry->id)
                continue;
        } else {
            continue;
        }
        if (column == 1) {
            if (record.first)
                return 1;
        } else if (column == 2) {
            if (record.second)
                return 1;
        }
    }
    return 0;
}
