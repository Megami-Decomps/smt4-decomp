#include "battle/BtlMainAccess.h"
#include "util/FUN_003ee0c0.h"
/* NON_MATCHING: scripted effect argument scheduling has not matched retail. */
#include "battle/btlUnit.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/btlMain.h"

extern "C" {
extern u32 g_btlScriptUnit;
u32 scrGetArg(u32 index);
BtlUnitA *btlUnitGet(u32 index);
BtlSkillA *FUN_003f0e20(BtlMainStateA *battle, u32 skill);
void FUN_004fc094(s32, BtlUnitA *, s32, BattleRosterRecordA *,
                  u32, u32, u32, u32, u32, u32, u32, u32, u32,
                  u32, u32, u32, u32, u32, u32, u32, u32, u32,
                  u32, u32, u32, u32);
void FUN_004fb43c(s32, BtlUnitA *, u32, u32, u32, u32, u32);

/* Start the script-selected skill's roster effect on the current battle unit. */
u32 FUN_0038d8a0(void)
{
    u32 skillId = scrGetArg(0);
    u32 effectValue = scrGetArg(1);
    BtlUnitA *unit = btlUnitGet(g_btlScriptUnit);
    BtlSkillA *skill = FUN_003f0e20(btlGetMainState(), skillId);
    FUN_003ee0c0(btlGetMainState());
    BtlMainStateA *battle = btlGetMainState();
    FUN_004fc094(0, unit, 0, &battle->roster[skill->effect.rosterIndex],
        0, effectValue, 0xFFFFFFFF, 0xFFFFFFFF, skill->unk258, skill->unk25C,
        0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1);
    FUN_004fb43c(0, unit, 0x01000223, 0, 0, 0, 0);
    return 1;
}
}
