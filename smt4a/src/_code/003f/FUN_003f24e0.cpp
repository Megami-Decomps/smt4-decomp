/* NON_MATCHING: the sort call passes the start slot as retail does (r1 at the call; the one-argument form scored 30
 * but dropped it); the build copies the entry pointer to r2 and walks the slots in r0, where retail walks them in r2. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"

extern "C" {

/* Re-sorts the turn order from slot `firstSlot` on. */
void battleSortTurnOrder(BtlMainStateA *battle, s32 firstSlot);
void btlUiIdsRefresh(BtlUiA *block);

/* Queues roster `group`'s combatant into the first free turn-order slot after the acting one, when the group is active. */
void FUN_003f24e0(BtlMainStateA *battle, s32 group)
{
    if ((battle->roster[group].liveFlags.unk50 & 1) == 0) {
        return;
    }
    if ((battle->roster[group].liveFlags.unk50 & 0x80) == 0) {
        return;
    }
    s16 selectionIndex = btlMainFindEntryByListedId(battle, group)->selectionIndex;
    s32 start = battle->turnOrder.position + 1;
    for (s32 slot = start; slot < 12; ++slot) {
        if (battle->turnOrder.indices[slot] < 0) {
            battle->turnOrder.indices[slot] = selectionIndex;
            battleSortTurnOrder(battle, start);
            break;
        }
    }
    btlUiIdsRefresh(g_btlUiBlock);
}

} /* extern "C" */
