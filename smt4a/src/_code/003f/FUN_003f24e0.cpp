/* NON_MATCHING: register allocation differs: retail computes the roster address before saving r4 and keeps the loop index in a copy (r2) of the first candidate slot. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
extern void *g_btlUiBlock;

BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *battle, s32 group);
void FUN_003f2aec(BtlMainStateA *battle);
void btlUiIdsRefresh(void *block);

/* Queues roster `group`'s combatant into the first free turn-order slot after the acting one, when the group is active. */
void FUN_003f24e0(BtlMainStateA *battle, s32 group)
{
    u32 flags = battle->roster[group].liveFlags.unk50;

    if ((flags & 1) != 0 && (flags & 0x80) != 0) {
        s16 selectionIndex = FUN_003f0e20(battle, group)->indexView.selectionIndex;

        for (s32 i = battle->turnOrder.position + 1; i < 12; i++) {
            if (battle->turnOrder.indices[i] < 0) {
                battle->turnOrder.indices[i] = selectionIndex;
                FUN_003f2aec(battle);
                break;
            }
        }
        btlUiIdsRefresh(g_btlUiBlock);
    }
}

} /* extern "C" */
