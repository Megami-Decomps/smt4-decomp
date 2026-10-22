/* NON_MATCHING: retail loads the action-table pointer through a pooled 0x1e98 offset; typed member access emits two ADDs and changes index-setup scheduling. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W5_W5Match7_ScriptUnit.h"


extern "C" {
BtlMainState* btlGetMainState(void);
void FUN_003de5d0(u32 kind, ScriptUnit* unit, BtlActionRecord* record, u32 flags);

// Dispatches the script-selected action record for the current battle unit.
u32 FUN_0030b7c4(void)
{
    s32 index = scrGetArg(0);
    ScriptUnit* unit = btlUnitGet(g_btlScriptUnit);
    BtlMainState* state = btlGetMainState();
    FUN_003de5d0(0, unit, &state->actions[index], 1);
    return 1;
}
}
