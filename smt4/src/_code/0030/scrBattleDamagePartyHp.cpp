#include "battle/BattleUnitSlot.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"
#include "script/ScriptArgs.h"

struct SlotManager;
extern "C" {
extern u32 g_btlScriptUnit;
void btlSlotManagerResetAll(SlotManager *manager);
void btlQueueKeyedScalarReflectAction(s32, void *, u32, s32, s32, s32, s32);
void FUN_002551ac(s32, void *, BtlActionRecord *, s32, s32, s32, s32, s32, s32,
                  s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

// Apply scripted party damage without reducing an eligible target below one HP.
u32 scrBattleDamagePartyHp()
{
    s32 amount = scrGetArg(0);
    s32 mode = scrGetArg(1);
    void *source = btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit));
    for (s32 slot = 0; slot < 4; ++slot) {
        BtlMainState *battle = btlGetMainState();
        BtlEntry *target = &battle->entries[slot];
        if ((target->flags & 1) && !(target->flags & 0x40) && target->ids[0] >= 0) {
            s32 damage = 0;
            switch (mode) {
            case 0: damage = target->data.maxHp * amount / 100; break;
            case 1: damage = target->data.hp * amount / 100; break;
            case 2: damage = amount; break;
            }
            if (damage >= target->data.hp)
                damage = target->data.hp - 1;
            btlSlotManagerResetAll(reinterpret_cast<SlotManager *>(btlGetMainState()));
            battle = btlGetMainState();
            BtlActionRecord *unit = &battle->actions[target->ids[0]];
            FUN_002551ac(0, source, unit, 0, damage, -1, -1, target->data.hp, target->data.maxHp,
                          0, 0, 0, 0, 1, 0, slot << 3, slot << 3, slot << 3, slot << 3, 1, 0, 1, 1, 0, 1);
            btlQueueKeyedScalarReflectAction(0, source, 0x1000185, 0, 0, 0, 0);
        }
    }
    return 1;
}
}
