/* NON_MATCHING: demon-record pointer and pair-unrolled skill-loop counter/value registers differ; other instructions match. */
#include "shard/W6_W6Match8_CampInventory.h"
#include "shard/W7_W7Match2_PartyDamage.h"
#include "gamedata/UnitStats.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
extern CampInventoryLists *g_camp;
PartyDamageSlotsIV *gameGetSlotTable();
StatBlock *gameGetUnitRecord(s32);
void FUN_00283f30(UnitSummarySkills *, s32);
void FUN_0029f848(CampInventoryController *, u32, s32, s32, s32, s32);
void FUN_00282f80(s32);

void FUN_00262d40()
{
    CampInventoryLists *work = g_camp;
    PartyDamageSlotsIV *slots = gameGetSlotTable();
    u32 count = 0;
    memClear(work->skills.entries, sizeof(work->skills.entries));
    UnitSummarySkills playerSkills;
    FUN_00283f30(&playerSkills, 0);
    for (s32 index = 0; index < 8; ++index) {
        u16 skill = playerSkills.ids[index];
        if (skill) {
            work->skills.entries[count].skill = skill;
            work->skills.entries[count].unit = -1;
            ++count;
        }
    }
    for (s32 slot = 0; slot < 24; ++slot) {
        if (slots->stock[slot] < 0)
            continue;
        StatBlock *unit = gameGetUnitRecord(slots->stock[slot]);
        if (!unit)
            continue;
        for (s32 index = 0; index < 8; ++index) {
            u16 skill = unit->skills.ids[index];
            if (skill) {
                work->skills.entries[count].skill = skill;
                work->skills.entries[count].unit = slots->stock[slot];
                ++count;
            }
        }
    }
    FUN_0029f848(&work->categories.controller, count, 11, 1, 1, 1);
    FUN_00282f80(9);
}
}
