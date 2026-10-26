/* NON_MATCHING: range output stack slots and HP-percentage division operand scheduling differ. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "util/SlotRangeSelect.h"
#include "script/ScriptArgs.h"
#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers.h"

extern "C" {
s32 scrGetArg(s32 index);
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);

/* Test whether the requested battle group contains a unit at or below the HP percentage. */
u32 FUN_002dbc94()
{
    s32 percentage = scrGetArg(0);
    u32 group = (u32)btlScriptResolveGroupArg(scrGetArg(1));
    s32 indices[4];
    s32 count;
    FUN_002499fc(group, indices, &count);
    for (s32 index = indices[0]; index < indices[0] + count; ++index) {
        BtlMainState *state = btlGetMainState();
        BtlEntry *entry = &state->entries[index];
        u32 flags = entry->flags;
        if (!(flags & BTL_ENTRY_FLAG_PRESENT) && (flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(flags & BTL_ENTRY_FLAG_BLOCKED) && entry->hp * 100 / entry->maxHp <= percentage) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && entry->hp * 100 / entry->maxHp <= percentage) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
