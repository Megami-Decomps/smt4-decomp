#include "shard/W4_Match6_BtlEntry.h"
#include "shard/PassiveSkill.h"
#include "battle/BattleEntrySummary.h"

extern "C" {
BtlMainState *btlGetMainState(void);
void FUN_00247478(BattleEntrySummary *summary, BtlMainState *state, const BtlEntry *entry);
const ActiveSkillRecord *dataTable40FindById(s32 skillId);
void FUN_0022abe0(const BtlEntry *entry, u16 *skills);

/* Test the active skill and learned passive skills for a zero-based category. */
u32 btlEntryHasSkillCategory(const BtlEntry *entry, s32 category)
{
    struct ActiveSkillCategoryView {
        u8 unk00[0x3C];
        u8 category;
    };
    u32 found = 0;
    BattleEntrySummary summary;
    FUN_00247478(&summary, btlGetMainState(), entry);
    if (summary.skill.skillId) {
        const ActiveSkillRecord *skill = dataTable40FindById(summary.skill.skillId);
        if (skill) {
            u32 value = reinterpret_cast<const ActiveSkillCategoryView *>(skill)->category;
            if (value && (s32)(value - 1) == category) {
                found = 1;
            }
        }
    }
    if (!found) {
        u16 skills[10] = {0};
        FUN_0022abe0(entry, skills);
        for (s32 index = 0; index < 9; ++index) {
            if (skills[index]) {
                const PassiveSkillRecord *skill = passiveSkillLookupRecord(skills[index]);
                if (skill && skill->classification.category &&
                    (s32)(skill->classification.category - 1) == category) {
                    found = 1;
                    break;
                }
            }
        }
    }
    return found;
}
}
