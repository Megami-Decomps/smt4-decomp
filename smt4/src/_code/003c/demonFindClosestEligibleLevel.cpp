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

/* Finds the closest eligible table entry at or below the requested level. */
u16 demonFindClosestEligibleLevel(DemonLevelTable *table, s32 category, u8 level, s32 validate)
{
    u16 result = 0;
    u8 bestDistance = 0xff;
    if (table->counts[category] != 0) {
        if (table->entries[category][table->counts[category] - 1].level > level) {
            level = table->entries[category][table->counts[category] - 1].level;
        }
        for (s32 index = 0; index < table->counts[category]; ++index) {
            if (table->entries[category][index].level > level ||
                (s32)(level - table->entries[category][index].level) >= bestDistance) {
                continue;
            }
            if (validate == 0) {
                if (!devilIsAvailable(table, table->entries[category][index].id)) {
                    continue;
                }
            } else {
                NkmBaseRecord *record = nkmBaseGetRecord(table->entries[category][index].id);
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
            }
            result = table->entries[category][index].id;
            bestDistance = level - table->entries[category][index].level;
        }
    }
    return result;
}
}
