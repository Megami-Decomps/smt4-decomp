#include "battle/BtlMainAccess.h"
#include "battle/btlUnit.h"

#include "battle/BattleUnitSlot.h"
struct UnitSummary {
    u16 unk00;
    u16 kind; // 0x02
    u8 unk04[0x1e];
};

extern "C" {
extern u32 g_btlScriptUnit;
void btlEntryBuildSummary(UnitSummary *out, BtlMainState *state, const BtlEntry *entry);

u32 scrCommSelectUnitRequestMode()
{
    BtlUnitData *request = btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit))->data;
    request->actionKind = 1;
    const BtlEntry *entry = btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit))->entry;
    BtlMainState *state = btlGetMainState();
    UnitSummary summary;
    btlEntryBuildSummary(&summary, state, entry);
    if (summary.kind == 1) {
        request->actionArg = 2;
    }
    else {
        request->actionArg = 1;
    }
    return 1;
}
}
