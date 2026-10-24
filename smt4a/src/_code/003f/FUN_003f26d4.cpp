/* NON_MATCHING: retail reads the g_btlMain masks with ldm/ldr word pairs (this build uses ldrd for the u64 members) and orders the loop bound compare as last > index; initial-fill and mask-test scheduling differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

/* The battle state with the field the AI reads beyond BtlMainStateA's known size. */
struct BtlAiState : BtlMainStateA {
    /* 0x4CF0 */ u8 unk4CF0[0x7C];
    /* 0x4D6C */ s32 targetCount;
};

extern "C" {
extern BtlMainGlobalsA g_btlMain;

void btlSelectSingleRandomTarget(BtlAiState *state);
void FUN_003efc40(BtlAiState *state);
void FUN_003f2aec(BtlAiState *state, s32 flag);
s16 FUN_0034ef58(s32 minimum, s32 maximum);

/* Picks the AI's candidate targets for the current turn and the one it acts on first. */
void FUN_003f26d4(BtlAiState *state)
{
    for (s32 i = 0; i < 12; i++) {
        state->turnOrder.indices[i] = -1;
    }
    state->turnOrder.position = -1;
    u64 stateFlags = state->stateFlags64.bits;
    if (stateFlags & g_btlMain.randomTarget.mask) {
        btlSelectSingleRandomTarget(state);
        return;
    }
    if (state->targetCount > 0 && !(stateFlags & g_btlMain.partyTarget.mask) &&
        !(stateFlags & g_btlMain.transition.mask)) {
        FUN_003efc40(state);
        return;
    }
    s32 first;
    s32 count;
    if (!(stateFlags & g_btlMain.skillQueue.queuedSkillMask) && !(stateFlags & g_btlMain.fullRoster.mask)) {
        if (stateFlags & g_btlMain.partyTarget.mask) {
            first = 4;
            count = 50;
        } else if (!(stateFlags & g_btlMain.transition.mask)) {
            first = 0;
            count = 4;
        } else {
            first = 54;
            count = 1;
        }
    } else {
        first = 54;
        count = 1;
    }
    s32 last = first + count;
    s32 found = 0;
    for (s32 index = first; index < last; index++) {
        BtlCombatantEntryA *entry = &state->entries[index];
        if ((entry->flags & g_btlMain.combatantMasks.required) && !(entry->flags & g_btlMain.exclusionMask)) {
            state->turnOrder.indices[found] = entry->indexView.selectionIndex;
            state->entries[index].sortBonus.value = 0;
            if (state->entries[index].flags & g_btlMain.actorCategories[0]) {
                state->entries[index].sortBonus.value = 5;
            }
            if (!(state->stateFlags64.bits & g_btlMain.fixedScore.mask)) {
                state->entries[index].sortBonus.value += FUN_0034ef58(-3, 3);
            }
            found++;
        }
    }
    if (found > 0) {
        state->turnOrder.position = 0;
        FUN_003f2aec(state, 0);
        state->commandEntry.selection = state->turnOrder.indices[state->turnOrder.position];
        return;
    }
    state->turnOrder.position = -1;
    state->commandEntry.selection = -1;
}
}
