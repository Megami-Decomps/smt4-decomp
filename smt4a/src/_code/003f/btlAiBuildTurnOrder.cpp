/* NON_MATCHING: 36 lines (174 vs 174 rows). The 64-bit mask loads and tests use different scratch registers;
 * retail loads the first party-target mask with LDM and the full-roster mask with separate LDR instructions. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

extern "C" {

void btlSelectSingleRandomTarget(BtlMainStateA *state);
void FUN_003efc40(BtlMainStateExtA *state);
void battleSortTurnOrder(BtlMainStateA *state, s32 firstSlot);
s16 FUN_0034ef58(s32 minimum, s32 maximum);

/* Picks the AI's candidate targets for the current turn and the one it acts on first. */
void btlAiBuildTurnOrder(BtlMainStateExtA *state)
{
    for (s32 i = 0; i < 12; i++) {
        state->turnOrder.indices[i] = -1;
    }
    state->turnOrder.position = -1;
    if (state->stateFlags64.bits & g_btlMain.randomTarget.mask) {
        btlSelectSingleRandomTarget(state);
        return;
    }
    if (state->count > 0 && !(state->stateFlags64.bits & g_btlMain.partyTarget.mask) &&
        !(state->stateFlags64.bits & g_btlMain.transition.mask)) {
        FUN_003efc40(state);
        return;
    }
    s32 first;
    s32 count;
    if ((state->stateFlags64.bits & g_btlMain.skillQueue.queuedSkillMask) ||
        (state->stateFlags64.bits & g_btlMain.fullRoster.mask)) {
        first = 54;
        count = 1;
    } else if (state->stateFlags64.bits & g_btlMain.partyTarget.mask) {
        first = 4;
        count = 50;
    } else if (state->stateFlags64.bits & g_btlMain.transition.mask) {
        first = 54;
        count = 1;
    } else {
        first = 0;
        count = 4;
    }
    s32 last = first + count;
    s32 found = 0;
    for (s32 index = first; last > index; index++) {
        if ((state->entries[index].flags & g_btlMain.combatantMasks.required) &&
            !(state->entries[index].flags & g_btlMain.exclusionMask)) {
            state->turnOrder.indices[found] = state->entries[index].selectionIndex;
            state->entries[index].data.speedBonus = 0;
            if (state->entries[index].flags & g_btlMain.actorCategories[0]) {
                state->entries[index].data.speedBonus += 5;
            }
            if (!(state->stateFlags64.bits & g_btlMain.fixedScore.mask)) {
                state->entries[index].data.speedBonus += FUN_0034ef58(-3, 3);
            }
            found++;
        }
    }
    bool hasCandidates = found > 0;
    if (hasCandidates)
        state->turnOrder.position = 0;
    if (hasCandidates) {
        battleSortTurnOrder(state, 0);
        state->commandEntry.selection = state->turnOrder.indices[state->turnOrder.position];
    } else {
        state->turnOrder.position = -1;
        state->commandEntry.selection = -1;
    }
}
}
