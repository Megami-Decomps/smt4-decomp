#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "battle/BattleUnitSlot.h"
#include "gamedata/FlagBitTests.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
extern u32 g_btlScriptUnit;
s32 scrGetArg(s32 index);
u32 FUN_00246d38(s32 actor, u32 unit, BtlActionRecord *target, u32 mask);
u32 FUN_00246e24(s32 actor, u32 unit, BtlActionRecord *target, u32 mask, s32 clearStatus);
void objectFlagsClear(StatBlock *unit, u16 mask);
void objectFlagSetBit(StatBlock *unit, u16 bit);
void btlQueueKeyedScalarReflectAction(s32 kind, u32 unit, u32 effect, s32, s32, s32, s32);

/* Sets or clears a status bit on a battle target or stored unit, playing the status effect when set. */
u32 btlScriptSetTargetStatus(void)
{
    s32 target = scrGetArg(0);
    u16 bit = scrGetArg(1);
    s32 enabled = scrGetArg(2);
    u32 actor = (u32)btlUnitGet((BtlMainState *const *)g_btlScriptUnit);
    if (target < 109) {
        BtlActionRecord *record = &btlGetMainState()->actions[target];
        if (enabled != 0) {
            FUN_00246e24(0, actor, record, 1 << bit, 1);
            btlQueueKeyedScalarReflectAction(0, actor, 0x10001BD, 0, 0, 0, 0);
        } else {
            FUN_00246d38(0, actor, record, 1 << bit);
        }
    } else {
        StatBlock *unit = gameGetUnitRecord(target - 109);
        if (enabled != 0) {
            objectFlagSetBit(unit, bit);
            if (bit != 4 && flagWordTestBit(unit, 4)) {
                objectFlagsClear(unit, 16);
            }
            btlQueueKeyedScalarReflectAction(0, actor, 0x10001BD, 0, 0, 0, 0);
        } else {
            objectFlagsClear(unit, (u16)(1 << bit));
        }
    }
    return 1;
}
}
