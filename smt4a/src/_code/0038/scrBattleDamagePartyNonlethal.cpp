#include "battle/BtlMainAccess.h"
#include "code/Code003e.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

struct ResourceUnit { u8 unk00[0x1d0]; };
struct ResourceFlagMasks {
    u64 unk00;
    u64 active;
    u8 unk10[0x18];
    u64 excluded;
};
extern "C" {
extern ResourceFlagMasks g_btlMessageFlagMasks;
extern u32 g_btlScriptUnit;
s32 scrGetArg(u32);
void btlQueueActionMessage(s32, void *, u32, s32, s32, s32, s32);
void FUN_004fc094(s32, void *, s32, ResourceUnit *, s32, s32, s32, s32, s32, s32,
                  s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

// Queue nonlethal HP damage for each eligible party member.
u32 scrBattleDamagePartyNonlethal()
{
    s32 amount = scrGetArg(0);
    s32 mode = scrGetArg(1);
    void *source = reinterpret_cast<void *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    for (s32 slot = 0; slot < 4; ++slot) {
        BtlMainStateA *battle = btlGetMainState();
        BtlCombatantEntryA *target = &battle->entries[slot];
        if ((target->flags & g_btlMessageFlagMasks.active) &&
            !(target->flags & g_btlMessageFlagMasks.excluded) && target->ids[0] >= 0) {
            s32 damage = 0;
            switch (mode) {
            case 0: damage = target->data.maxHp * amount / 100; break;
            case 1: damage = target->data.hp * amount / 100; break;
            case 2: damage = amount; break;
            }
            if (damage >= target->data.hp)
                damage = target->data.hp - 1;
            btlSlotManagerResetStates(btlGetMainState());
            battle = btlGetMainState();
            ResourceUnit *unit = &((ResourceUnit *)battle->unk1ED4)[target->ids[0]];
            FUN_004fc094(0, source, 0, unit, 0, damage, -1,
                          -1, target->data.hp, target->data.maxHp, 0, 0, 0, 0, 1, 0,
                          slot << 3, slot << 3, slot << 3, slot << 3, 1, 0, 1, 1, 0, 1);
            btlQueueActionMessage(0, source, 0x1000223, 0, 0, 0, 0);
        }
    }
    return 1;
}
}
