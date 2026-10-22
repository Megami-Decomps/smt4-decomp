/* NON_MATCHING: percentage command uses a different saved-register set and stack-argument stores. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlAction.h"

struct BattleActionView {
    u8 prefix[0x1E98];
    BtlActionRecord *actions;
};
extern "C" {
s32 scrGetArg(u32);
u32 btlUnitGet(u32);
BtlMainState *btlGetMainState(void);
BtlEntry *btlMainFindEntryByListedId(BtlMainState *, s32);
void FUN_0027df30(s32, u32, BtlActionRecord *, s32, s32, s32, s32, u32,
                 s32, s32, s32, s32, s32);
void FUN_002505c0(s32, u32, u32, s32, s32, s32, s32);
extern u32 g_btlScriptUnit;
}

extern "C" u32 FUN_002f7794(void)
{
    s32 targetId = scrGetArg(0);
    s32 percent = scrGetArg(1);
    u32 unit = btlUnitGet(g_btlScriptUnit);
    BtlEntry *target = btlMainFindEntryByListedId(btlGetMainState(), targetId);
    s32 amount = target->maxHp * percent / 100;
    if (amount == 0) {
        amount = -1;
    }
    BattleActionView *state = reinterpret_cast<BattleActionView *>(btlGetMainState());
    FUN_0027df30(0, unit, &state->actions[targetId], 0, amount, -1, -1, 0x3E0,
                 0, 0, 9, 0, 0);
    FUN_002505c0(0, unit, 0x10001C1, 0, 0, 0, 0);
    return 1;
}
