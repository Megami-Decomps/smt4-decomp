#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/BattleUnitSlot.h"
#include "battle/BtlMainAccess.h"

extern "C" {
void btlQueueKeyedScalarReflectAction(s32, void *, u32, s32, s32, s32, s32);
void btlSlotManagerResetAll(BtlMainState *state);
void FUN_002551ac(s32, void *, BtlActionRecord *, s32, s32, u32, u32, s32, s32,
                  s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u32 g_btlScriptUnit;
BtlEntry *btlMainFindActiveEntry();
s32 scrGetArg(u32 index);

// Queue a health change proportional to the active entry's maximum HP and its accompanying effect.
u32 btlScriptQueuePercentHealthChange()
{
    s32 percent = scrGetArg(0);
    BtlMainState *state = btlGetMainState();
    BtlEntry *entry = btlMainFindActiveEntry();
    s32 amount = entry->data.maxHp * percent / 100;
    void *unit = btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit));
    if (entry->ids[0] >= 0) {
        btlSlotManagerResetAll(state);
        FUN_002551ac(0, unit, &state->actions[entry->ids[0]], 0,
                     amount, 0xffffffff, 0xffffffff, entry->data.hp, entry->data.maxHp,
                     0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1);
        btlQueueKeyedScalarReflectAction(0, unit, 0x10001b5, 0, 0, 0, 0);
    }
    return 1;
}
}
