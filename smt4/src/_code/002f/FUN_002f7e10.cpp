/* NON_MATCHING: compiler does not hoist effect/zero constants into saved registers, and clear-status exits duplicate the epilogue. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match5_DevilSort.h"

extern "C" {
extern u32 g_btlScriptUnit;
s32 scrGetArg(s32 index);
u32 btlUnitGet(u32 id);
BtlMainState *btlGetMainState(void);
GameUnitSortRecord *gameGetUnitRecord(s32 slot);
u32 FUN_00246d38(s32 actor, u32 unit, BtlActionRecord *target, u32 mask);
u32 FUN_00246e24(s32 actor, u32 unit, BtlActionRecord *target, u32 mask, s32 clearStatus);
void objectFlagsClear(GameUnitSortRecord *unit, u16 mask);
void objectFlagSetBit(GameUnitSortRecord *unit, u16 bit);
u8 flagWordTestBit(GameUnitSortRecord *unit, u32 bit);
void FUN_002505c0(s32 kind, u32 unit, u32 effect, s32, s32, s32, s32);

// Set or clear a status bit on a battle target or stored unit, playing the status effect when set.
u32 FUN_002f7e10(void)
{
    s32 target = scrGetArg(0);
    u16 bit = scrGetArg(1);
    s32 enabled = scrGetArg(2);
    u32 actor = btlUnitGet(g_btlScriptUnit);
    if (target < 109) {
        BtlActionRecord *record = &btlGetMainState()->actions[target];
        if (enabled == 0) {
            FUN_00246d38(0, actor, record, 1 << bit);
            return 1;
        }
        FUN_00246e24(0, actor, record, 1 << bit, 1);
    } else {
        GameUnitSortRecord *unit = gameGetUnitRecord(target - 109);
        if (enabled == 0) {
            objectFlagsClear(unit, (u16)(1 << bit));
            return 1;
        }
        objectFlagSetBit(unit, bit);
        if (bit != 4 && flagWordTestBit(unit, 4)) {
            objectFlagsClear(unit, 16);
        }
    }
    FUN_002505c0(0, actor, 0x10001BD, 0, 0, 0, 0);
    return 1;
}
}
