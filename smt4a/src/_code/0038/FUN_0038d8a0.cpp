#include "battle/BtlMainAccess.h"
#include "code/Code003e.h"
#include "battle/btlUnit.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/btlMain.h"

extern "C" {
extern u32 g_btlScriptUnit;
u32 scrGetArg(u32 index);
BtlUnitA *btlUnitGet(u32 index);
BtlSkillA *btlMainFindEntryByListedId(BtlMainStateA *battle, u32 skill);
void FUN_004fc094(s32, BtlUnitA *, s32, BattleRosterRecordA *,
                  u32, u32, u32, u32, u32, u32, u32, u32, u32,
                  u32, u32, u32, u32, u32, u32, u32, u32, u32,
                  u32, u32, u32, u32);
void btlQueueActionMessage(s32, BtlUnitA *, u32, u32, u32, u32, u32);

/* Start the script-selected skill's roster effect on the current battle unit. */
u32 FUN_0038d8a0(void)
{
    u32 skillId = scrGetArg(0);
    u32 effectValue = scrGetArg(1);
    BtlUnitA *unit = btlUnitGet(g_btlScriptUnit);
    BtlSkillA *skill = btlMainFindEntryByListedId(btlGetMainState(), skillId);
    btlSlotManagerResetStates(btlGetMainState());
    BtlMainStateA *battle = btlGetMainState();
    BattleRosterRecordA *record = &battle->roster[skill->effect.rosterIndex];
    FUN_004fc094(0, unit, 0, record,
        0, effectValue, 0xFFFFFFFF, 0xFFFFFFFF, skill->unk258, skill->unk25C,
        0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1);
    btlQueueActionMessage(0, unit, 0x01000223, 0, 0, 0, 0);
    return 1;
}
}
