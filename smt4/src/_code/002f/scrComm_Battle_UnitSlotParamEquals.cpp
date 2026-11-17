#include "battle/btlUnit.h"
#include "battle/BattleUnitSlot.h"
#include "battle/BtlEntry.h"
#include "script/ScriptArgs.h"

extern "C" {

s32 scrGetArg(s32 arg);

extern u32 g_btlScriptUnit;

/* Script command: compares the unit's parameter for the given slot with a second argument. */
s32 scrComm_Battle_UnitSlotParamEquals(void)
{
    s32 slot = scrGetArg(0);
    s32 index = 0;
    s32 value;
    BtlUnit *unit;
    s16 *stat;

    if (slot == 0) {
        index = 7;
    } else if (slot == 1) {
        index = 10;
    } else if (slot == 2) {
        index = 0xB;
    }
    value = scrGetArg(1);
    unit = btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit));
    /* entry->stat[index], addressed as retail does: the halfword pointer moved by index first. */
    stat = reinterpret_cast<s16 *>(unit->entry) + index;
    scrSetResult(stat[offsetof(BtlEntry, stat) / sizeof(s16)] == value);
    return 1;
}

} /* extern "C" */
