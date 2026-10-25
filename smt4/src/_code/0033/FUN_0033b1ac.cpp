/* NON_MATCHING: speed fields use absolute unit offsets rather than a shared stats base; loop/register allocation differs. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W4_W4Match2_BtlUnits.h"

// currentTurn lies immediately beyond the shared BtlMainState's recovered order array.
struct CurrentTurnIndexViewIV {
    u8 unk0000[0x2F1E];
    s16 currentTurn;
};
typedef char CurrentTurnIndexOffsetCheck[offsetof(CurrentTurnIndexViewIV, currentTurn) == 0x2F1E ? 1 : -1];

extern "C" {
extern void *g_btlUiBlock;
BtlEntry *btlMainFindEntryByListedId(BtlMainState *battle, s32 listedId);
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
    BtlMainState *turns = (BtlMainState *)battle;
    s32 start = ((CurrentTurnIndexViewIV *)battle)->currentTurn + 1;
    for (s32 slot = start; slot < 12; ++slot) {
        if (turns->turnOrder.order[slot] < 0) {
            turns->turnOrder.order[slot] = selectionIndex;
            for (s32 first = start; first < 11; ++first) {
                if (turns->turnOrder.order[first] < 0)
                    continue;
                for (s32 second = first + 1; second < 12; ++second) {
                    s16 secondId = turns->turnOrder.order[second];
                    if (secondId < 0)
                        continue;
                    s16 firstId = turns->turnOrder.order[first];
                    const BtlEntry *firstUnit = &turns->entries[firstId];
                    const BtlEntry *secondUnit = &turns->entries[secondId];
                    s16 firstSpeed = firstUnit->speed + firstUnit->speedBonus;
                    s16 secondSpeed = secondUnit->speed + secondUnit->speedBonus;
                    if (firstSpeed < secondSpeed ||
                        (firstSpeed == secondSpeed && secondUnit->members.ids[0] < firstUnit->members.ids[0])) {
                        turns->turnOrder.order[first] = secondId;
                        turns->turnOrder.order[second] = firstId;
                    }
                }
            }
            break;
        }
    }
    btlUiRefreshSlotRanks(g_btlUiBlock);
}
}
