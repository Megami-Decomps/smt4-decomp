/* NON_MATCHING: 64-bit side-mask tests and switch tail merging differ; -O2 candidate. */
#include "common.h"
#include "gamedata/Table04Record.h"

struct TargetSkill {
    u8 unk00[0x28];
    u32 unk28low : 5; // 0x28
    u32 targetMode : 4;
    u32 unk28high : 23;
};
struct TargetUnit { u64 flags; };
struct TargetActionGlobals {
    u8 unk00[0x30];
    u64 enemySideMask; // 0x30
};
extern "C" {
extern TargetActionGlobals g_btlAction;

// Derive the side and selection scope encoded by the skill's target mode.
void btlActionClassifyTargetSide(u32 unused, const TargetUnit *unit, u32 skillId, u32 *side, u32 *scope)
{
    const TargetSkill *skill = (const TargetSkill *)dataTable04FindById(skillId);
    if (skill == NULL)
        return;
    switch (skill->targetMode) {
    case 0:
        *side = !(unit->flags & g_btlAction.enemySideMask);
        *scope = 0;
        break;
    case 1:
        *side = !(g_btlAction.enemySideMask & unit->flags);
        *scope = 1;
        break;
    case 2:
        *side = (unit->flags & g_btlAction.enemySideMask) != 0;
        *scope = 0;
        break;
    case 3:
        *side = (unit->flags & g_btlAction.enemySideMask) != 0;
        *scope = 1;
        break;
    case 4:
        *side = (unit->flags & g_btlAction.enemySideMask) != 0;
        *scope = 0;
        break;
    case 5:
        *scope = 2;
        break;
    case 6:
        *side = !(unit->flags & g_btlAction.enemySideMask);
        *scope = 1;
        break;
    case 7:
        *side = (unit->flags & g_btlAction.enemySideMask) != 0;
        *scope = 0;
        break;
    case 8:
        *side = (unit->flags & g_btlAction.enemySideMask) != 0;
        *scope = 1;
        break;
    }
}
}
