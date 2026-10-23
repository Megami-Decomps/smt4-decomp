/* NON_MATCHING: base-value arguments are retained in registers instead of retail's parameter spills, and result returns are duplicated; 107 vs 105 instructions. */
#include "shard/PassiveSkill.h"
#include "shard/PadState.h"
#include "gamedata/UnitStats.h"
namespace {
struct CostSkills { union { UnitSummarySkills main; u16 ids[9]; }; };
}
extern "C" {
extern const f32 DAT_00446d30[];
PadState *gameGetPlayerData();
StatBlock *gameGetUnitRecord(s32 unit);
void FUN_00283f30(CostSkills *skills, s32 includeSource);
u32 playerGetSkillRank(u16 skill);
s32 FUN_00283ebc(const ActiveSkillRecord *skill, u32 rank, u32 kind);
s32 FUN_003bf53c(s32 unitParameter, s32 rankAdjustment, s32 extra, f32 cost, f32 firstScale, f32 secondScale, f32 passiveScale);
s32 mathApplyReductionMultiplier(s32 value, s32 rankAdjustment, s32 extra, f32 multiplier);

// Resolve a skill's fixed or percentage cost, including player rank and passive cost modifiers.
u32 FUN_00262260(const ActiveSkillRecord *skill, u32 baseValue, s32 unitIndex)
{
    // Cost fields extend beyond the shared active-skill prefix.
    struct SkillCostView { u8 prefix[0x36]; u16 fixed; u8 unk38[0xb]; u8 percent; };
    // These halfwords lie in byte padding in the persistent record views.
    struct UnitParameterView { u8 prefix[0x16]; s16 value; };
    struct PlayerParameterView { u8 prefix[0x24]; s16 value; };
    typedef char SkillCostOffsets[offsetof(SkillCostView, fixed) == 0x36 && offsetof(SkillCostView, percent) == 0x43 ? 1 : -1];
    const SkillCostView *cost = reinterpret_cast<const SkillCostView *>(skill);
    if (!(cost->fixed & 0xfff) && !cost->percent)
        return 0;
    CostSkills skills = {0};
    s32 rankAdjustment = 0;
    s32 passiveBonuses = 0;
    s32 unitParameter;
    if (unitIndex < 0) {
        unitParameter = reinterpret_cast<PlayerParameterView *>(gameGetPlayerData())->value;
        FUN_00283f30(&skills, 1);
        rankAdjustment = FUN_00283ebc(skill, playerGetSkillRank(skill->cost.costParameter), 2);
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
    u32 result = baseValue;
    u16 packed = cost->fixed;
    if ((packed & 0xfff) != 4000) {
        if (packed & 0xfff) {
            result = FUN_003bf53c(unitParameter, rankAdjustment, 0, static_cast<f32>(static_cast<u32>(packed & 0xfff)), 1.0f, 1.0f, DAT_00446d30[passiveBonuses]);
        } else {
            result = 0;
            if (cost->percent)
                result = mathApplyReductionMultiplier(baseValue, rankAdjustment, 0, static_cast<f32>(static_cast<u32>(cost->percent)) * 0.01f);
        }
    }
    return result;
}
}
