#include "common.h"
#include "gamedata/SkillDataRecord.h"
#include "code/Code0022_Smt4a.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotRecord.h"

extern "C" {
s32 skillGetCostWithRankReduction(u32 id, u32 kind);
s32 skillGetAdjustedCost(PlayerDataA *record, u32 id);

// True when the unit (the player for a negative slot) has enough MP for the skill.
u32 FUN_0022a030(s32 slot, u32 skill)
{
    u32 usable = 0;
    skillDataFindById(skill);
    if (slot < 0) {
        PlayerDataA *player = gameGetPlayerData();
        if (skillGetCostWithRankReduction(skill, 1) <= player->mp) {
            usable = 1;
        }
    } else {
        SlotRecordA *unit = gameGetSlotRecord(slot);
        if (unit->mp >= skillGetAdjustedCost((PlayerDataA *)unit /* the cost helper reads the stats both records share */, skill)) {
            usable = 1;
        }
    }
    return usable;
}

} /* extern "C" */
