/* NON_MATCHING: paired mask loads, chance comparison registers and chosen-ID lifetime differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/BattleSkillResponseMasks.h"

extern "C" {
u32 lcgRandomRange(s32 limit);
u16 FUN_004bc420(u32, u32, s32);

u32 FUN_004c662c()
{
    BtlMainStateA *battle = btlGetMainState();
    u64 markers = battle->markerMasks.bits;
    if (markers & g_btlSkillResponseMasks.restart) {
        if (battle->reinforcementState.state >= 13)
            battle->reinforcementState.state = 2;
        return 1;
    }
    u64 flags = battle->stateFlags64.bits;
    if ((flags & g_btlSkillResponseMasks.assistActive) || (flags & g_btlSkillResponseMasks.alwaysProc) ||
        (flags & g_btlSkillResponseMasks.stateBlocked) ||
        (battle->encounterSelection.id >= 0 && battle->encounterGate.disabled >= 3))
        return 0;
    u32 id = battle->reinforcement.id;
    if (battle->encounterSelection.id >= 0 && battle->encounterGate.disabled)
        id = battle->reinforcement.alternateId;
    u16 chance = battle->reinforcement.chance;
    if (battle->encounterGate.disabled)
        chance = battle->reinforcement.alternateChance;
    if (!(markers & g_btlSkillResponseMasks.reinforceForced) && !chance)
        return 0;
    s32 random = lcgRandomRange(99);
    if (battle->markerMasks.bits & g_btlSkillResponseMasks.reinforceForced)
        random = -1;
    if (static_cast<s32>(battle->reinforcementChance.chanceBonus + chance) <= random)
        return 0;
    if (!id) {
        id = FUN_004bc420(battle->reinforcement.group, battle->reinforcement.variant, 1);
        if (!id)
            return 0;
    }
    if (battle->encounterSelection.id >= 0)
        battle->encounterSelection.id = id;
    else if (battle->reinforcement.secondaryId >= 0)
        battle->reinforcement.secondaryId = id;
    else
        return 0;
    return 1;
}
}
