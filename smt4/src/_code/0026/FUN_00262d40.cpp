#include "camp/CampState.h"

#include "gamedata/UnitStats.h"
#include "AsdSDK/AsdMemUtil.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {
void playerCollectPassiveSkillBits(UnitSummarySkills *, s32);
void gridNavigationConfigure(GridNavigation *, u32, s32, s32, s32, s32);
void campRebuildCategoryList(s32);

void FUN_00262d40()
{
    CampState *work = g_camp;
    SaveSlotTableIV *slots = gameGetSlotTable();
    u32 count = 0;
    memClear(work->skills, sizeof(work->skills));
    UnitSummarySkills playerSkills;
    playerCollectPassiveSkillBits(&playerSkills, 0);
    for (s32 index = 0; index < 8; ++index) {
        u16 skill = playerSkills.ids[index];
        if (skill) {
            work->skills[count].skill = skill;
            work->skills[count].unit = -1;
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
                work->skills[count].skill = skill;
                work->skills[count].unit = slots->stock[slot];
                ++count;
            }
        }
    }
    gridNavigationConfigure(&work->grids[3], count, 11, 1, 1, 1);
    campRebuildCategoryList(9);
}
}
