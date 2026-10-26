/* NON_MATCHING: identical instruction sequence to retail except for register numbering (retail keeps the result in r6, the reward record in r7 and the loop counter in r1; the build uses r8/r6/r2 and reorders the parameter moves). */
#include "gamedata/DataTable.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"
#include "gamedata/PlayerDataBlock.h"

// One roll slot of a drop table entry: the item and its weight.
struct DropSlot {
    u16 item;
    u16 weight;
};

// A drop table entry (0x40 bytes); only the roll slots are known.
struct DropEntry {
    u8 unk00[0x20];
    DropSlot slots[8];  // 0x20
};

// An entry that comes from the add-on content: its id followed by the body.
struct AocDropEntry {
    u32 id;
    DropEntry body;  // 0x04
};

struct AocDropSource {
    u8 unk000[0x38c];
    u32 entryCount;         // 0x38c
    AocDropEntry *entries;  // 0x390
};

// The reward an encounter grants.
struct RewardRecord {
    u16 kind;      // 1: one item, 3: money, 4: rolls on a drop table
    u16 id;        // item id, or the drop table entry
    u32 count;     // amount, or number of rolls
    u8 unk08[2];
    u16 percent;   // share of the level-scaled value, 0: use `base`
    u32 base;
};

// An encounter record; its reward starts at 0xf0.
struct EncounterRecord {
    u8 unk00[0xf0];
    RewardRecord reward;
};

// What a reward roll produced.
struct RewardResult {
    u32 items[6];   // 0x00
    u32 counts[6];  // 0x18
    u32 money;      // 0x30
    u32 value;      // 0x34
    s16 source;     // 0x38 the encounter index the reward came from
};

struct PlayerLevelView {
    u8 unk00[0x62];
    u16 level;
};

extern "C" {
extern AocDropSource *g_aocSystem;

s32 randRange(u16 maximum);
u32 gameGetUnlockedCountLimit(void);
u32 FUN_004ccbf0(u32 level);
EncounterRecord *FUN_001ad9b4(s32 index);

// The drop table entry `id`: from the add-on content when it provides one, else from the base game's table.
static __inline DropEntry *findDropEntry(u16 id)
{
    AocDropEntry *aoc = g_aocSystem->entries;
    if (aoc != NULL) {
        for (u32 i = 0; i < g_aocSystem->entryCount; i++, aoc++) {
            if (aoc->id == id) {
                return reinterpret_cast<DropEntry *>(&aoc->id + 1);
            }
        }
    }
    void *table = dataTableGet(0x1c, 1);
    DropEntry *entries = static_cast<DropEntry *>(dataTableGetEntries(table));
    dataTableGetCount(table);
    return &entries[id];
}

// Rolls the reward of encounter `index` into `result`.
void FUN_003df168(RewardResult *result, s32 index)
{
    EncounterRecord *encounter = FUN_001ad9b4(index);
    if (encounter == NULL) {
        return;
    }
    gameFlagBlockGetEntry(index);
    RewardRecord *record = &encounter->reward;
    if (record->kind == 1) {
        result->items[0] = record->id;
        result->counts[0] = record->count;
    } else if (record->kind == 3) {
        result->money = record->count;
    } else if (record->kind == 4) {
        DropEntry *entry = findDropEntry(record->id);

        s32 total = 0;
        for (s32 j = 0; j < 8; j++) {
            if (entry->slots[j].weight != 0) {
                total += entry->slots[j].weight;
            }
        }

        s32 added = 0;
        for (u32 roll = record->count; roll != 0; roll--) {
            s32 remaining = randRange(total - 1);
            for (s32 j = 0; j < 8; j++) {
                u32 weight = entry->slots[j].weight;
                if (weight != 0 && (remaining -= weight) < 0) {
                    if (added < 6 && entry->slots[j].item != 0) {
                        result->items[added] = entry->slots[j].item;
                        result->counts[added] = 1;
                        added++;
                    }
                    break;
                }
            }
        }
    }

    if (record->percent == 0) {
        result->value = record->base;
    } else {
        PlayerLevelView *player = reinterpret_cast<PlayerLevelView *>(gameGetPlayerData());
        u32 scaled;
        if (gameGetUnlockedCountLimit() > player->level) {
            scaled = FUN_004ccbf0(player->level);
        } else {
            scaled = FUN_004ccbf0(gameGetUnlockedCountLimit() - 1);
        }
        result->value = scaled;
        result->value = scaled * record->percent / 100;
    }
    result->source = index;
}
}
