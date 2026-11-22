/* NON_MATCHING: 141 lines (117 vs 50 rows): retail evaluates the 64-bit enemySideMask test inside each switch arm rather than hoisting it; -O2 candidate. */
#include "common.h"
#include "gamedata/SkillDataRecord.h"

struct TargetSkill {
    u8 unk00[0x28];
    u32 unk28low : 5; /* 0x28 */
    u32 targetMode : 4;
    u32 unk28high : 23;
};
struct TargetUnit { u64 flags; };
struct TargetActionGlobals {
    u8 unk00[0x30];
    u64 enemySideMask; /* 0x30 */
};
extern "C" {
extern TargetActionGlobals g_btlAction;

/* Derive the side and selection scope encoded by the skill's target mode. */
void btlActionClassifyTargetSide(u32 unused, const TargetUnit *unit, u32 skillId, u32 *side, u32 *scope)
{
    const TargetSkill *skill = (const TargetSkill *)skillDataFindById(skillId);
    if (skill == NULL) {
        return;
    }
    bool isEnemy = (unit->flags & g_btlAction.enemySideMask) != 0;
    switch (skill->targetMode) {
    case 0:
        *side = isEnemy ? 0 : 1;
        *scope = 0;
        break;
    case 1:
    case 6:
        *side = isEnemy ? 0 : 1;
        *scope = 1;
        break;
    case 2:
    case 4:
    case 7:
        *side = isEnemy ? 1 : 0;
        *scope = 0;
        break;
    case 3:
    case 8:
        *side = isEnemy ? 1 : 0;
        *scope = 1;
        break;
    case 5:
        *scope = 2;
        break;
    }
}
}
