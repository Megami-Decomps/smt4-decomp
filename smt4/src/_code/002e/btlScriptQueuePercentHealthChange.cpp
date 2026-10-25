#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlAction.h"
#include "battle/BattleUnitSlot.h"

extern "C" {
void FUN_002505c0(s32, void *, u32, s32, s32, s32, s32);
void FUN_00250720(BtlMainState *state);
void FUN_002551ac(s32, void *, BtlActionRecord *, s32, s32, u32, u32, s32, s32,
                  s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u32 g_btlScriptUnit;
BtlEntry *btlMainFindActiveEntry();
BtlMainState *btlGetMainState();
s32 scrGetArg(u32 index);

// Queue a health change proportional to the active entry's maximum HP and its accompanying effect.
u32 btlScriptQueuePercentHealthChange()
{
    s32 percent = scrGetArg(0);
    BtlMainState *state = btlGetMainState();
    BtlEntry *entry = btlMainFindActiveEntry();
    s32 amount = entry->maxHp * percent / 100;
    void *unit = btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit));
    if (entry->members.ids[0] >= 0) {
        FUN_00250720(state);
        FUN_002551ac(0, unit, &state->actions.records[entry->members.ids[0]], 0,
                     amount, 0xffffffff, 0xffffffff, entry->value, entry->maxHp,
                     0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1);
        FUN_002505c0(0, unit, 0x10001b5, 0, 0, 0, 0);
    }
    return 1;
}
}
