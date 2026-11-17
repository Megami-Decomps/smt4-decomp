/* NON_MATCHING: O3 retains validate/record values in registers instead of retail's argument homes and record-pointer spill; eligibility and acceptance blocks are placed differently. O2 may recover the spill strategy. */
#include "shard/W6_W6Match5_DevilSort.h"
#include "shard/W6_W6Match2_RecordValue.h"
#include "gamedata/GameDataAccess_VariantB_RecordValue.h"
#include "gamedata/GameDataAccess_VariantE.h"

struct DemonLevelEntry {
    u16 id, level;
};

struct DemonLevelTable {
    /* 0x00 */ u8 counts[0x38];
    /* 0x38 */ DemonLevelEntry *entries[0x38];
};

extern "C" {
s32 devilIsAvailable(DemonLevelTable *, u16 id);

// Find the closest eligible table entry at or below the requested level.
u32 demonFindClosestEligibleLevel(DemonLevelTable *table, s32 category, u32 level, s32 validate)
{
    u32 result = 0;
    u8 bestDistance = 0xff;
    u32 count = table->counts[category];
    if (count != 0) {
        u32 lastLevel = table->entries[category][count - 1].level;
        if (lastLevel > level) {
            level = static_cast<u8>(lastLevel);
        }
        for (s32 index = 0; index < table->counts[category]; ++index) {
            DemonLevelEntry *entry = &table->entries[category][index];
            if (entry->level > level || static_cast<s32>(level - entry->level) >= bestDistance) {
                continue;
            }
            if (validate) {
                NkmBaseRecord *record = nkmBaseGetRecord(entry->id);
                if (record->fusionRestrictions & 0x1c00000) {
                    continue;
                }
                if (record->requiredFlag && !gameFlagIsSet(record->requiredFlag)) {
                    continue;
                }
                u32 condition = record->prerequisite;
                if (condition & 1) {
                    GameSavedItem saved;
                    if (condition & ~1u) {
                        if (!gameRecordCopy(condition >> 1, &saved) || !(saved.flags & 0xfc)) {
                            continue;
                        }
                    } else {
                        if (!gameRecordCopy(record->id, &saved) || !(saved.flags & 0xfc)) {
                            continue;
                        }
                    }
                }
                if (!(record->flags & 1)) {
                    continue;
                }
            } else if (!devilIsAvailable(table, entry->id)) {
                continue;
            }
            result = table->entries[category][index].id;
            bestDistance = level - table->entries[category][index].level;
        }
    }
    return result;
}
}
