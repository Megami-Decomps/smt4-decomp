#include "battle/BtlMainAccess.h"
#include "battle/btlUnit.h"
#include "battle/BtlGlobals.h"

extern "C" {

void btlSlotManagerResetStates(void);
void btlQueueKeyedScalarReflectAction(s32, BtlUnitA *, u32, s32);
void FUN_004fc094(s32, BtlUnitA *, s32, u32, s32, u32, s32, s32, u32, u32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                  s32, s32, s32, s32, s32, s32, s32);

extern u32 g_btlScriptUnit;

/* Script command: calls FUN_004fc094 and btlQueueKeyedScalarReflectAction for the unit with the first skill entry's values. */
s32 scrComm_Battle_StartUnitAction(void)
{
    u32 target = btlGetMainState()->unk1ED4;
    BtlCombatantEntryA *combatant = btlMainFindEntryByListedId(btlGetMainState(), 0);
    BtlUnitA *unit = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit));

    btlGetMainState();
    btlSlotManagerResetStates();
    FUN_004fc094(0, unit, 0, target, 0, combatant->data.maxHp, -1, -1, combatant->data.hp, combatant->data.maxHp, 0, 0, 1, 0, 0, 0, 0, 0,
                 0, 0, 1, 0, 1, 1, 0, 1);
    btlQueueKeyedScalarReflectAction(0x19, unit, target, 0);
    return 1;
}

} /* extern "C" */
