#include "battle/BtlMainAccess.h"
#include "battle/btlUnit.h"

extern "C" {

void btlSlotManagerResetStates(void);
BtlSkillA *btlMainFindEntryByListedId(BtlMainStateA *main, s32 index);
void btlQueueKeyedScalarReflectAction(s32, BtlUnitA *, u32, s32);
void FUN_004fc094(s32, BtlUnitA *, s32, u32, s32, u32, s32, s32, u32, u32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                  s32, s32, s32, s32, s32, s32, s32);
BtlUnitA *btlUnitGet(u32 unit);

extern u32 g_btlScriptUnit;

/* Script command: calls FUN_004fc094 and btlQueueKeyedScalarReflectAction for the unit with the first skill entry's values. */
s32 scrComm_Battle_StartUnitAction(void)
{
    u32 target = btlGetMainState()->unk1ED4;
    BtlSkillA *skill = btlMainFindEntryByListedId(btlGetMainState(), 0);
    BtlUnitA *unit = btlUnitGet(g_btlScriptUnit);

    btlGetMainState();
    btlSlotManagerResetStates();
    FUN_004fc094(0, unit, 0, target, 0, skill->unk25C, -1, -1, skill->unk258, skill->unk25C, 0, 0, 1, 0, 0, 0, 0, 0,
                 0, 0, 1, 0, 1, 1, 0, 1);
    btlQueueKeyedScalarReflectAction(0x19, unit, target, 0);
    return 1;
}

} /* extern "C" */
