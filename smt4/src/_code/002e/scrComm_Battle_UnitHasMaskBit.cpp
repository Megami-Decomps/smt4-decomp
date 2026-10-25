#include "battle/btlUnit.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

void scrSetResult(s32 result);
u32 scrGetArg(u32 index);

extern u32 g_btlScriptUnit;

/* Script command: tests one bit of the unit's mask; the script's argument is the bit number. */
s32 scrComm_Battle_UnitHasMaskBit(void)
{
    u32 bit = scrGetArg(0);
    BtlUnit *unit = reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));
    BtlUnitData *data = unit->data;
    scrSetResult((data->unk0FA & (1 << bit)) != 0);
    return 1;
}

} /* extern "C" */
