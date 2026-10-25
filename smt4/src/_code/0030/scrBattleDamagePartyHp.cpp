/* NON_MATCHING: final unit lookup adds one register move and changes call scheduling; -O2 candidate. */
#include "common.h"

struct DamageTarget {
    u32 flags; // 0x000
    u8 unk004[4];
    s16 unitIndex; // 0x008
    u8 unk00a[0x1aa];
    s16 hp; // 0x1b4
    s16 maxHp; // 0x1b6
    u8 unk1b8[0xd0];
};
struct DamageUnit {
    u8 unk000[0x114];
};
struct DamageBattleState {
    u8 unk0000[0x1e98];
    DamageUnit *units; // 0x1e98
    u8 unk1e9c[0x124];
    DamageTarget *targets; // 0x1fc0
};
struct SlotManager;
extern "C" {
extern u32 g_btlScriptUnit;
s32 scrGetArg(u32 index);
void *btlUnitGet(u32 index);
DamageBattleState *btlGetMainState();
void FUN_00250720(SlotManager *manager);
void FUN_002505c0(s32, void *, u32, s32, s32, s32, s32);
void FUN_002551ac(s32, void *, DamageUnit *, s32, s32, s32, s32, s32, s32,
                  s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

// Apply scripted party damage without reducing an eligible target below one HP.
u32 scrBattleDamagePartyHp()
{
    s32 amount = scrGetArg(0);
    s32 mode = scrGetArg(1);
    void *source = btlUnitGet(g_btlScriptUnit);
    for (s32 slot = 0; slot < 4; ++slot) {
        DamageTarget *target = &btlGetMainState()->targets[slot];
        if ((target->flags & 1) && !(target->flags & 0x40) && target->unitIndex >= 0) {
            s32 damage = 0;
            switch (mode) {
            case 0: damage = target->maxHp * amount / 100; break;
            case 1: damage = target->hp * amount / 100; break;
            case 2: damage = amount; break;
            }
            if (target->hp <= damage)
                damage = target->hp - 1;
            FUN_00250720(reinterpret_cast<SlotManager *>(btlGetMainState()));
            DamageUnit *unit = &btlGetMainState()->units[target->unitIndex];
            s32 slotMask = slot << 3;
            FUN_002551ac(0, source, unit, 0, damage, -1, -1, target->hp, target->maxHp,
                          0, 0, 0, 0, 1, 0, slotMask, slotMask, slotMask, slotMask, 1, 0, 1, 1, 0, 1);
            FUN_002505c0(0, source, 0x1000185, 0, 0, 0, 0);
        }
    }
    return 1;
}
}
