/* NON_MATCHING: category bit extraction matches; final skill-list success path duplicates rather than sharing the result-setting tail. */
#include "battle/btlUnit.h"
#include "gamedata/BattleUnitSkills.h"
#include "gamedata/Table00.h"
#include "gamedata/Table04Record.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
const Table00Record *dataTable00FindById(u32);
const Table04Record *dataTable04FindById(u32);
void scrSetResult(u32);
extern u32 g_btlScriptUnit;
u32 scrGetArg(u32);
BtlUnitA *btlUnitGet(u32);

// Check both persistent skill lists and the demon's innate list for the requested category.
u32 FUN_003a8790(void)
{
    u32 category = scrGetArg(0);
    BtlCombatantEntryA *entry = reinterpret_cast<BtlCombatantEntryA *>(btlUnitGet(g_btlScriptUnit)->params);
    if (entry->record) {
        for (s32 index = 0; index < 8; ++index) {
            const Table04Record *skill = dataTable04FindById(entry->record->skills[index]);
            if (skill && category == ((skill->properties >> 11) & 0x1f)) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (entry->secondaryRecord) {
        for (s32 index = 0; index < 8; ++index) {
            const Table04Record *skill = dataTable04FindById(entry->secondaryRecord->skills[index]);
            if (skill && category == ((skill->properties >> 11) & 0x1f)) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (entry->candidate.record) {
        const Table00Record *demon = dataTable00FindById(entry->id);
        for (s32 index = 0; index < 8; ++index) {
            const Table04Record *skill = dataTable04FindById(demon->skillList.ids[index]);
            if (skill && category == ((skill->properties >> 11) & 0x1f)) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
