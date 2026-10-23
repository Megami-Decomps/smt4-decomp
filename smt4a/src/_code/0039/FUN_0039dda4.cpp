/* NON_MATCHING: effect calls and arguments match; compiler orders the shared return and exceptional-effect blocks differently. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
s32 scrGetArg(s32 index);
u32 btlUnitGet(u32 unitId);
BtlMainStateA *btlGetMainState(void);
extern u32 g_btlScriptUnit;
void FUN_004fb43c(s32 kind, u32 unit, u32 effect, s32, s32, s32, s32);
void FUN_004fcffc(s32 kind, u32 unit, BattleRosterRecordA *record, u32 mask);
void FUN_004fdb18(s32 kind, u32 unit, BattleRosterRecordA *record, u32 mask, s32 enabled);

// Apply or remove a roster effect selected by a battle script argument.
u32 FUN_0039dda4(void)
{
    s32 rosterIndex = scrGetArg(0);
    s32 effectIndex = scrGetArg(1);
    s32 enabled = scrGetArg(2);
    u32 unit = btlUnitGet(g_btlScriptUnit);
    if (enabled != 0) {
        FUN_004fdb18(0, unit, &btlGetMainState()->roster[rosterIndex], 1 << effectIndex, 1);
        if (effectIndex != 4) {
            FUN_004fb43c(0, unit, 0x100025F, 0, 0, 0, 0);
        } else {
            FUN_004fb43c(0, unit, 0x1000275, 0, 0, 0, 0);
        }
    } else {
        FUN_004fcffc(0, unit, &btlGetMainState()->roster[rosterIndex], 1 << effectIndex);
    }
    return 1;
}
}
