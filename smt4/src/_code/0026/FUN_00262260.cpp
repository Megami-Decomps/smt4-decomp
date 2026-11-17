/* NON_MATCHING: retail zero-initialises rankAdjustment/extra/skills straight from r8 (mov r8,#0) and orders the cost-pool load after vmov; build uses a temp zero register; 107 vs 108 instructions. */
#include "shard/PassiveSkill.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/UnitStats.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/UnitRecordAccess.h"
namespace {
struct CostSkills { union { UnitSummarySkills main; u16 ids[9]; }; };
}
extern "C" {
extern const f32 DAT_00446d30[];
void FUN_00283f30(CostSkills *skills, s32 includeSource);
u32 playerGetSkillRank(u16 skill);
s32 FUN_003bf53c(s32 unitParameter, s32 rankAdjustment, u16 extra, f32 cost, f32 firstScale, f32 secondScale, f32 passiveScale);
s32 mathApplyReductionMultiplier(s32 value, s32 rankAdjustment, u16 extra, f32 multiplier);

// Resolve a skill's fixed or percentage cost, including player rank and passive cost modifiers.
u32 FUN_00262260(const SkillDataRecord *skill, u32 baseValue, s32 unitIndex)
{
    // These halfwords lie in byte padding in the persistent record views.
    struct UnitParameterView { u8 prefix[0x16]; s16 value; };
    if (!skill->costs.fixedCost && !skill->percentCost)
        return 0;
    CostSkills skills = {0};
    s32 rankAdjustment = 0;
    s32 extra = 0;
    s32 passiveBonuses = 0;
    s32 unitParameter;
    if (unitIndex < 0) {
        unitParameter = gameGetPlayerData()->stats[2];
        FUN_00283f30(&skills, 1);
        rankAdjustment = FUN_00283ebc(skill, playerGetSkillRank(skill->identity.id), 2);
    } else {
        StatBlock *unit = gameGetUnitRecord(unitIndex);
        if (!unit)
            return 0;
        unitParameter = reinterpret_cast<UnitParameterView *>(unit)->value;
        skills.main = unit->skills;
    }
    for (s32 index = 0; index < 9; ++index) {
        u16 id = skills.ids[index];
        if (id) {
            const PassiveSkillRecord *passive = passiveSkillLookupRecord(id);
            if (passive && ((passive->affinity >> 11) & 31) == 20) {
                u32 kind = (passive->affinity >> 16) & 15;
                if (kind == 5)
                    ++passiveBonuses;
                else if (kind == 6)
                    passiveBonuses += 2;
            }
        }
    }
    u32 fixedCost = skill->costs.fixedCost;
    u32 result = 0;
    if (fixedCost == 4000) {
        result = baseValue;
    } else if (fixedCost) {
        result = FUN_003bf53c(unitParameter, rankAdjustment, extra, static_cast<f32>(fixedCost), 1.0f, 1.0f, DAT_00446d30[passiveBonuses]);
    } else {
        u32 percent = skill->percentCost;
        if (percent)
            result = mathApplyReductionMultiplier(baseValue, rankAdjustment, extra, static_cast<f32>(percent) * 0.01f);
    }
    return result;
}
}
