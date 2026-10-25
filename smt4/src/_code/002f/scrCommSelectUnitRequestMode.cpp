#include "battle/btlUnit.h"

#include "battle/BattleUnitSlot.h"
struct UnitSummary {
    u16 unk00;
    u16 kind; // 0x02
    u8 unk04[0x1e];
};
// The request mode follows the currently decoded BtlUnitData prefix.
struct UnitRequestView {
    u8 unk000[0x14c];
    u16 active; // 0x14c
    u16 mode; // 0x14e
};

extern "C" {
extern u32 g_btlScriptUnit;
BtlMainState *btlGetMainState();
void FUN_00247478(UnitSummary *out, BtlMainState *state, const s16 *params);

u32 scrCommSelectUnitRequestMode()
{
    UnitRequestView *request = (UnitRequestView *)reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)))->data;
    request->active = 1;
    const s16 *params = reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)))->params;
    BtlMainState *state = btlGetMainState();
    UnitSummary summary;
    FUN_00247478(&summary, state, params);
    if (summary.kind == 1) {
        request->mode = 2;
    }
    else {
        request->mode = 1;
    }
    return 1;
}
}
