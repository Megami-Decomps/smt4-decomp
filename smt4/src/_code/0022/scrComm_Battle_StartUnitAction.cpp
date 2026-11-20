#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlUnit.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

void btlQueueReflectEntryAction(s32, BtlUnit *, u32, s32);
void btlSlotManagerResetAll(void);
void btlQueueKeyedScalarReflectAction(s32, BtlUnit *, s32, s32, s32, s32, s32);
void FUN_002551ac(s32, BtlUnit *, u32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                  s32, s32, s32, s32, s32, s32);

extern u32 g_btlScriptUnit;

/* Script command: calls FUN_002551ac, btlQueueKeyedScalarReflectAction and btlQueueReflectEntryAction for the unit with the first skill entry's values. */
s32 scrComm_Battle_StartUnitAction(void)
{
    u32 target = reinterpret_cast<u32>(btlGetMainState()->actions);
    BtlEntry *skill = btlMainFindEntryByListedId(btlGetMainState(), 0);
    BtlUnit *unit = reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));

    btlGetMainState();
    btlSlotManagerResetAll();
    FUN_002551ac(0, unit, target, 0, skill->data.maxHp, -1, -1, skill->data.hp, skill->data.maxHp, 0, 0, 1, 0, 0, 0, 0, 0, 0,
                 0, 1, 0, 1, 1, 0, 1);
    btlQueueKeyedScalarReflectAction(0, unit, 0x1000178, 0, 0, 0, 0);
    btlQueueReflectEntryAction(0x19, unit, target, 0);
    return 1;
}

} /* extern "C" */
