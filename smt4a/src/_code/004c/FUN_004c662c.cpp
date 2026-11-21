/* NON_MATCHING: the mask tests now load and pair like retail (each field read per test); remaining: the chance comparison keeps the sum in r1 and compares it against the roll (retail: roll against the sum in r2, chance bonus pooled before the forced test), and the chosen id is kept in r5 instead of being returned in r0. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/BattleSkillResponseMasks.h"

extern "C" {
u32 lcgRandomRange(s32 limit);
u16 FUN_004bc420(u32, u32, s32);

u32 FUN_004c662c()
{
    BtlMainStateA *battle = btlGetMainState();
    if (battle->markerMasks.bits & g_btlSkillResponseMasks.restart) {
        if (battle->reinforcementState.state >= 13)
            battle->reinforcementState.state = 2;
        return 1;
    }
    if ((g_btlSkillResponseMasks.assistActive & battle->stateFlags64.bits) ||
        (g_btlSkillResponseMasks.alwaysProc & battle->stateFlags64.bits) ||
        (g_btlSkillResponseMasks.stateBlocked & battle->stateFlags64.bits) ||
        (battle->encounterSelection.id >= 0 && battle->encounterGate.disabled >= 3))
        return 0;
    u32 id = battle->reinforcement.id;
    if (battle->encounterSelection.id >= 0 && battle->encounterGate.disabled)
        id = battle->reinforcement.alternateId;
    u16 chance = battle->reinforcement.chance;
    if (battle->encounterGate.disabled)
        chance = battle->reinforcement.alternateChance;
    if (!(battle->markerMasks.bits & g_btlSkillResponseMasks.reinforceForced) && !chance)
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
