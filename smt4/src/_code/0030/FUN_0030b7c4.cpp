#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W5_W5Match7_ScriptUnit.h"


extern "C" {
void btlReflectCreateKind2d(u32 kind, ScriptUnit* unit, BtlActionRecord* record, u32 flags);

/* The battle state as this command sees it: only the action table pointer. */
struct ActionTableView {
    /* 0x0000 */ u8 unk0000[0x1E98];
    /* 0x1E98 */ BtlActionRecord *actions;
};

// Dispatches the script-selected action record for the current battle unit.
u32 FUN_0030b7c4(void)
{
    s32 index = scrGetArg(0);
    ScriptUnit* unit = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
    btlReflectCreateKind2d(0, unit, &reinterpret_cast<ActionTableView *>(btlGetMainState())->actions[index], 1);
    return 1;
}
}
