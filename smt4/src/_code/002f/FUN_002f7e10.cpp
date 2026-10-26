/* NON_MATCHING: effect/zero constants are not hoisted into saved registers, and the effect path has a separate return epilogue. */
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
void objectFlagsClear(GameUnitSortRecord *unit, u16 mask);
void objectFlagSetBit(GameUnitSortRecord *unit, u16 bit);
void FUN_002505c0(s32 kind, u32 unit, u32 effect, s32, s32, s32, s32);

// Set or clear a status bit on a battle target or stored unit, playing the status effect when set.
u32 FUN_002f7e10(void)
{
    s32 target = scrGetArg(0);
    u16 bit = scrGetArg(1);
    s32 enabled = scrGetArg(2);
    u32 actor = reinterpret_cast<u32>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
    if (target < 109) {
        BtlActionRecord *record = &btlGetMainState()->actions[target];
        if (enabled != 0)
            FUN_00246e24(0, actor, record, 1 << bit, 1);
        else
            FUN_00246d38(0, actor, record, 1 << bit);
    } else {
        GameUnitSortRecord *unit = static_cast<GameUnitSortRecord *>(gameGetUnitRecord(target - 109));
        if (enabled != 0) {
            objectFlagSetBit(unit, bit);
            if (bit != 4 && flagWordTestBit(unit, 4))
                objectFlagsClear(unit, 16);
        } else {
            objectFlagsClear(unit, (u16)(1 << bit));
        }
    }
    if (enabled != 0)
        FUN_002505c0(0, actor, 0x10001BD, 0, 0, 0, 0);
    return 1;
}
}
