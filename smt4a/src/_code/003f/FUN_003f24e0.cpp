/* NON_MATCHING: pre-push roster address now matches retail (45 vs 45 rows); only the turn-order loop register allocation (r2/r3 vs r0/r2) differs. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"

extern "C" {

void FUN_003f2aec(BtlMainStateA *battle);
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
            FUN_003f2aec(battle);
            break;
        }
    }
    btlUiIdsRefresh(g_btlUiBlock);
}

} /* extern "C" */
