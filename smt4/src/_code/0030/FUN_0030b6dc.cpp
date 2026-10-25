#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W5_W5Match7_ScriptUnit.h"

extern "C" {

BtlMainState *btlGetMainState(void);
void FUN_00246d38(s32 side, ScriptUnit *unit, BtlActionRecord *action, u32 mask);
void FUN_00246e24(s32 side, ScriptUnit *unit, BtlActionRecord *action, u32 mask, s32 arg);
void FUN_002505c0(s32 side, ScriptUnit *unit, u32 message, s32 a3, s32 a4, s32 a5, s32 a6);

/* Script command: applies action record arg0 with bit arg1 to the script unit; arg2 selects the variant that also shows a message. */
s32 FUN_0030b6dc(void)
{
    s32 action = scrGetArg(0);
    s32 bit = scrGetArg(1);
    s32 announce = scrGetArg(2);
    ScriptUnit *unit = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));

    if (announce == 0) {
        FUN_00246d38(0, unit, &btlGetMainState()->actions[action], 1 << bit);
    } else {
        FUN_00246e24(0, unit, &btlGetMainState()->actions[action], 1 << bit, 1);
        FUN_002505c0(0, unit, 0x10001bd, 0, 0, 0, 0);
    }
    return 1;
}

} /* extern "C" */
