#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

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
BtlMainStateA *btlGetMainState();
void *btlUnitGet(u32);
void FUN_003ee0c0(BtlMainStateA *);
void FUN_004fb43c(s32, void *, u32, s32, s32, s32, s32);
void FUN_004fc094(s32, void *, s32, ResourceUnit *, s32, s32, s32, s32, s32, s32,
                  s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

// Queue nonlethal HP damage for each eligible party member.
u32 scrBattleDamagePartyNonlethal()
{
    s32 amount = scrGetArg(0);
    s32 mode = scrGetArg(1);
    void *source = btlUnitGet(g_btlScriptUnit);
    for (s32 slot = 0; slot < 4; ++slot) {
        BtlMainStateA *battle = btlGetMainState();
        BtlCombatantEntryA *target = &battle->entries[slot];
        if ((target->flags & g_btlMessageFlagMasks.active) &&
            !(target->flags & g_btlMessageFlagMasks.excluded) && target->unitIndex >= 0) {
            s32 damage = 0;
            switch (mode) {
            case 0: damage = target->maxHp * amount / 100; break;
            case 1: damage = target->hp * amount / 100; break;
            case 2: damage = amount; break;
            }
            if (damage >= target->hp)
                damage = target->hp - 1;
            FUN_003ee0c0(btlGetMainState());
            battle = btlGetMainState();
            ResourceUnit *unit = &((ResourceUnit *)battle->unk1ED4)[target->unitIndex];
            FUN_004fc094(0, source, 0, unit, 0, damage, -1,
                          -1, target->hp, target->maxHp, 0, 0, 0, 0, 1, 0,
                          slot << 3, slot << 3, slot << 3, slot << 3, 1, 0, 1, 1, 0, 1);
            FUN_004fb43c(0, source, 0x1000223, 0, 0, 0, 0);
        }
    }
    return 1;
}
}
