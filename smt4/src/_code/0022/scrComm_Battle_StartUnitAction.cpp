#include "battle/BtlMainAccess.h"
#include "battle/btlUnit.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

BtlSkill *btlMainFindEntryByListedId(BtlMainState *main, s32 index);
void FUN_00250680(s32, BtlUnit *, u32, s32);
void FUN_00250720(void);
void FUN_002505c0(s32, BtlUnit *, s32, s32, s32, s32, s32);
void FUN_002551ac(s32, BtlUnit *, u32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                  s32, s32, s32, s32, s32, s32);

extern u32 g_btlScriptUnit;

/* Script command: calls FUN_002551ac, FUN_002505c0 and FUN_00250680 for the unit with the first skill entry's values. */
s32 scrComm_Battle_StartUnitAction(void)
{
    u32 target = btlGetMainState()->unk1E98;
    BtlSkill *skill = btlMainFindEntryByListedId(btlGetMainState(), 0);
    BtlUnit *unit = reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));

    btlGetMainState();
    FUN_00250720();
    FUN_002551ac(0, unit, target, 0, skill->unk1B6, -1, -1, skill->unk1B4, skill->unk1B6, 0, 0, 1, 0, 0, 0, 0, 0, 0,
                 0, 1, 0, 1, 1, 0, 1);
    FUN_002505c0(0, unit, 0x1000178, 0, 0, 0, 0);
    FUN_00250680(0x19, unit, target, 0);
    return 1;
}

} /* extern "C" */
