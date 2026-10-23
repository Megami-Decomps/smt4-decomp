/* NON_MATCHING: speed fields use absolute unit offsets rather than a shared stats base; loop/register allocation differs. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W4_W4Match2_BtlUnits.h"

// currentTurn lies immediately beyond the shared TurnOrderState's recovered order array.
struct CurrentTurnIndexViewIV {
    u8 unk0000[0x2F1E];
    s16 currentTurn;
};
typedef char CurrentTurnIndexOffsetCheck[offsetof(CurrentTurnIndexViewIV, currentTurn) == 0x2F1E ? 1 : -1];

extern "C" {
extern void *g_btlUiBlock;
BtlUnitEntry *btlMainFindEntryByListedId(BtlMainState *battle, s32 listedId);
void btlUiRefreshSlotRanks(void *ui);

// Append an eligible unit to the unprocessed turn slots and sort that suffix by speed and stable unit index.
void FUN_0033b1ac(BtlMainState *battle, s32 listedId)
{
    u32 status = battle->actions[listedId].status;
    if (!(status & 1))
        return;
    if (!(status & 0x80))
        return;
    s16 selectionIndex = btlMainFindEntryByListedId(battle, listedId)->selectionIndex;
    TurnOrderState *turns = (TurnOrderState *)battle;
    s32 start = ((CurrentTurnIndexViewIV *)battle)->currentTurn + 1;
    for (s32 slot = start; slot < 12; ++slot) {
        if (turns->order[slot] < 0) {
            turns->order[slot] = selectionIndex;
            for (s32 first = start; first < 11; ++first) {
                if (turns->order[first] < 0)
                    continue;
                for (s32 second = first + 1; second < 12; ++second) {
                    s16 secondId = turns->order[second];
                    if (secondId < 0)
                        continue;
                    s16 firstId = turns->order[first];
                    const TurnOrderUnit *firstUnit = &turns->units[firstId];
                    const TurnOrderUnit *secondUnit = &turns->units[secondId];
                    s16 firstSpeed = firstUnit->speed + firstUnit->speedBonus;
                    s16 secondSpeed = secondUnit->speed + secondUnit->speedBonus;
                    if (firstSpeed < secondSpeed ||
                        (firstSpeed == secondSpeed && secondUnit->tieIndex < firstUnit->tieIndex)) {
                        turns->order[first] = secondId;
                        turns->order[second] = firstId;
                    }
                }
            }
            break;
        }
    }
    btlUiRefreshSlotRanks(g_btlUiBlock);
}
}
