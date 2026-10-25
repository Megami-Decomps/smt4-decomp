#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
// Find the roster record for the first marked combatant beyond the four party slots.
BattleRosterRecordA *btlFindMarkedReserveRecord(BtlMainStateA *state)
{
    for (s32 index = 4; index < 54; ++index) {
        BtlCombatantEntryA *entry = &state->entries[index];
        if (entry->selection.marked != 0) {
            return &state->roster[entry->unitIndex];
        }
    }
    return NULL;
}
}
