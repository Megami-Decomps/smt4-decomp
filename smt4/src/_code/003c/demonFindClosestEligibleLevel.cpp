/* NON_MATCHING: 20 lines: the result is a halfword (retail returns the spilled id without a uxth, which a u32 or s32
 * result needs: 1 line off that way), but declared u16 armcc loads the category count into r1 and the zero into r0 at
 * entry, the other way round from retail, and the registers of the first block follow. */
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
u16 demonFindClosestEligibleLevel(DemonLevelTable *table, s32 category, u32 level, s32 validate)
{
    u16 result = 0;
    u8 bestDistance = 0xff;
    u32 count = table->counts[category];
    if (count != 0) {
        u32 lastLevel = table->entries[category][table->counts[category] - 1].level;
        if (lastLevel > level) {
            level = static_cast<u8>(lastLevel);
        }
        for (s32 index = 0; index < table->counts[category]; ++index) {
            if (table->entries[category][index].level > level ||
                static_cast<s32>(level - table->entries[category][index].level) >= bestDistance) {
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
