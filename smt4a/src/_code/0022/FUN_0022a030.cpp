#include "common.h"
#include "gamedata/SkillDataRecord.h"
#include "code/Code0022_Smt4a.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
PlayerDataA *gameGetSlotRecord(s32 slot);
s32 FUN_003df57c(u32 id, u32 kind);
s32 skillGetAdjustedCost(PlayerDataA *record, u32 id);

// True when the unit (the player for a negative slot) has enough MP for the skill.
u32 FUN_0022a030(s32 slot, u32 skill)
{
    u32 usable = 0;
    skillDataFindById(skill);
    if (slot < 0) {
        PlayerDataA *player = gameGetPlayerData();
        if (FUN_003df57c(skill, 1) <= player->mp) {
            usable = 1;
        }
    } else {
        PlayerDataA *unit = gameGetSlotRecord(slot);
        if (unit->mp >= skillGetAdjustedCost(unit, skill)) {
            usable = 1;
        }
    }
    return usable;
}

} /* extern "C" */
