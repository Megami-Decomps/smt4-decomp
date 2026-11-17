/* NON_MATCHING: source/preview registers differ and the compiler merges the MP deduction/clamp branches. */
#include "shard/PassiveSkill.h"
#include "shard/Shard0031.h"
#include "code/Code004b_Smt4a.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
s32 FUN_0028809c(s32 source, s32 target, const SkillDataRecordA *skill, s32 preview, s32 flags);
s32 FUN_003df57c(u32 costParameter, s32 mode);

// Apply a skill to the player and all occupied demon slots, charging MP once if it succeeds.
u32 FUN_002a690c(s32 source, u32 skillId, s32 preview)
{
    u8 applied = 0;
    const SkillDataRecordA *skill = skillDataFindById(skillId);
    if (skill != NULL) {
        if (FUN_0028809c(source, -1, skill, preview, 0) == 0) {
            applied = 1;
        }
        SaveSlotTableA *party = gameGetSlotTable();
        for (s32 index = 0; index < 24; ++index) {
            s32 target = party->party[index];
            if (target >= 0 && FUN_0028809c(source, target, skill, preview, 0) == 0) {
                applied = 1;
            }
        }
        if (applied != 0) {
            if (preview == 0) {
                if (source < 0) {
                    PlayerDataA *unit = gameGetPlayerData();
                    unit->mp -= FUN_003df57c(skill->identity.id, 1);
                    if (unit->mp < 0)
                        unit->mp = 0;
                } else {
                    SlotRecordA *unit = gameGetSlotRecord(source);
                    unit->mp -= skillGetAdjustedCost(unit, skill->identity.id);
                    if (unit->mp < 0)
                        unit->mp = 0;
                }
            }
            return 0;
        }
    }
    return 1;
}
}
