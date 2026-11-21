/* NON_MATCHING: the inlined sort lays its swap out as retail does, but the temp-swap form that makes
 * battleSortTurnOrder IDENTICAL scores worse here (105 against 68); the slot search before it and the sort's
 * index registers schedule differently. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"

// currentTurn lies immediately beyond the shared BtlMainState's recovered order array.
struct CurrentTurnIndexViewIV {
    u8 unk0000[0x2F1E];
    s16 currentTurn;
};
typedef char CurrentTurnIndexOffsetCheck[offsetof(CurrentTurnIndexViewIV, currentTurn) == 0x2F1E ? 1 : -1];

extern "C" {
void btlUiRefreshSlotRanks(BtlUi *ui);

/* Sorts populated turn-order slots by descending speed, then ascending unit index: battleSortTurnOrder's body. */
static void sortTurnOrder(BtlMainState *state, s32 start)
{
    if (start >= 11) {
        return;
    }
    for (s32 first = start; first < 11; ++first) {
        if (state->turnOrder.order[first] >= 0) {
            for (s32 second = first + 1; second < 12; ++second) {
                s16 candidate = state->turnOrder.order[second];
                if (candidate < 0)
                    continue;
                s16 current = state->turnOrder.order[first];
                s16 currentSpeed = btlUnitTurnSpeed(&state->entries[current].data);
                s16 candidateSpeed = btlUnitTurnSpeed(&state->entries[candidate].data);
                if (currentSpeed < candidateSpeed) {
                    state->turnOrder.order[first] = candidate;
                    state->turnOrder.order[second] = current;
                } else {
                    if (currentSpeed != candidateSpeed)
                        continue;
                    if (state->entries[current].ids[0] <= state->entries[candidate].ids[0])
                        continue;
                    state->turnOrder.order[first] = candidate;
                    state->turnOrder.order[second] = current;
                }
            }
        }
    }
}

// Append an eligible unit to the unprocessed turn slots and sort that suffix by speed and stable unit index.
void FUN_0033b1ac(BtlMainState *battle, s32 listedId)
{
    u32 status = battle->actions[listedId].status;
    if (!(status & 1))
        return;
    if (!(status & 0x80))
        return;
    s16 selectionIndex = btlMainFindEntryByListedId(battle, listedId)->selectionIndex;
    BtlMainState *turns = (BtlMainState *)battle;
    s32 start = ((CurrentTurnIndexViewIV *)battle)->currentTurn + 1;
    for (s32 slot = start; slot < 12; ++slot) {
        if (turns->turnOrder.order[slot] < 0) {
            turns->turnOrder.order[slot] = selectionIndex;
            sortTurnOrder(turns, start);
            break;
        }
    }
    btlUiRefreshSlotRanks(g_btlUiBlock);
}
}
