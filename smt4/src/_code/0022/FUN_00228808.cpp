/* NON_MATCHING: initial guaranteed flag, saved unit/flags registers and final boolean branch layout differ. */
#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"

/* The packed BtlState padding has an odd extent; use a local flags view rather than realign it. */
struct BattleChanceStateView {
    u8 unk0000[0x44ac];
    u32 flags;
};
struct BattleChanceModifiersView {
    u8 unk00[0x14];
    f32 partyMultiplier;
    f32 enemyMultiplier;
};

extern "C" {
BtlUnitEntry *btlMainFindEntryByListedId(BtlState *, s32);
BattleChanceModifiersView *FUN_0023ea94();
s32 randRange(u32);

/* Roll a unit-dependent chance, increasing it for enemies below forty percent HP. */
u32 FUN_00228808(s32 listedId, u32 unused, s32 mode)
{
    BtlState *state = reinterpret_cast<BtlState *>(btlGetMainState());
    if (reinterpret_cast<BattleChanceStateView *>(state)->flags & 1)
        return 1;
    s32 chance = 40;
    BtlUnitEntry *unit = btlMainFindEntryByListedId(state, listedId);
    if (unit != NULL) {
        u32 flags = unit->flags;
        if (flags & 10) {
            chance = 30;
            if (mode == 1)
                chance = 85;
        } else if (!(flags & 0x20) && (flags & 0x10)) {
            if ((unit->values[10] >> 10) == 1)
                return 0;
            if (mode == 1)
                chance = 85;
        }
        if ((flags & 0x10) && unit->hp * 100 / unit->hpMax <= 40 && chance < 70)
            chance = 70;
        if (flags & 10)
            chance = static_cast<s32>(FUN_0023ea94()->partyMultiplier * static_cast<f32>(chance));
        if (unit->flags & 0x10)
            chance = static_cast<s32>(FUN_0023ea94()->enemyMultiplier * static_cast<f32>(chance));
    }
    return randRange(99) < chance;
}
}
