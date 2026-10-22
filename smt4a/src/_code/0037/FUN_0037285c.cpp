#include "battle/btlScript.h"
#include "battle/btlMain.h"
#include "shard/W4_W4Match6b_BtlUnitWork.h"

struct BattleActionInfo {
    u16 kind;
    u16 targetKind;
    u32 payload[12]; // The query writes thirteen words in total.
};

struct BtlUnitParametersView {
    u8 unk00[0x20];
    BtlCombatantEntryA *parameters;
};

extern "C" {

BtlUnit *btlUnitGet(u32 id);
BtlMainStateA *btlGetMainState(void);
BattleActionInfo FUN_003e8bb0(BtlMainStateA *state, BtlCombatantEntryA *parameters);

// Select the unit command argument from the queried action's target kind.
u32 FUN_0037285c(void)
{
    BtlUnitWork *work = btlUnitGet(g_btlScriptUnit)->work;
    work->command = 1;
    BtlUnit *unit = btlUnitGet(g_btlScriptUnit);
    BtlCombatantEntryA *parameters =
        reinterpret_cast<BtlUnitParametersView *>(unit)->parameters;
    BattleActionInfo info = FUN_003e8bb0(btlGetMainState(), parameters);
    if (info.targetKind == 1)
        work->commandArg = 2;
    else
        work->commandArg = 1;
    return 1;
}
}
