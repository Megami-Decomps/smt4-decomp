#include "battle/BtlMainAccess.h"
#include "battle/btlScript.h"
#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"

struct BattleActionInfo {
    u16 kind;
    u16 targetKind;
    u32 payload[12]; // The query writes thirteen words in total.
};

extern "C" {

BattleActionInfo btlEntryBuildSummary(BtlMainStateA *state, BtlCombatantEntryA *parameters);

// Select the unit command argument from the queried action's target kind.
u32 FUN_0037285c(void)
{
    BtlUnitDataA *work = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit))->data;
    work->actionKind = 1;
    BtlCombatantEntryA *parameters = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit))->entry;
    BattleActionInfo info = btlEntryBuildSummary(btlGetMainState(), parameters);
    if (info.targetKind == 1)
        work->actionArg = 2;
    else
        work->actionArg = 1;
    return 1;
}
}
