#include "util/FUN_003ee0c0.h"
/* NON_MATCHING: mode/actor spill allocation, division constant hoisting and event-argument stores differ from retail. */
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/btlMain.h"

struct BtlUnitA;
extern "C" {
extern u32 g_btlScriptUnit;
s32 scrGetArg(s32 index);
BtlUnitA *btlUnitGet(u32 index);
u32 FUN_004fc094(s32 mode, BtlUnitA *actor, s32 option, BattleRosterRecordA *target,
                 s32 value5, s32 damage, s32 value7, u32 value8,
                 u32 hp, u32 maxHp, s32 value11, u32 value12,
                 s32 value13, s32 value14, s32 value15, s32 value16,
                 s32 value17, s32 value18, s32 value19, s32 value20,
                 s32 value21, s16 value22, s32 value23, s32 value24,
                 s32 value25, s32 value26);

u32 FUN_003c23f8(void)
{
    s32 amount = scrGetArg(0);
    s32 mode = scrGetArg(1);
    BtlUnitA *actor = btlUnitGet(g_btlScriptUnit);
    for (s32 index = 0; index < 4; ++index) {
        BattleMaskEntry *entry = &btlGetMainState()->entryView.entries[index];
        if ((entry->mask & g_battleMaskPresets.eligibility.active) != 0 &&
            (entry->mask & g_battleMaskPresets.eligibility.excluded) == 0 &&
            entry->id >= 0) {
            s32 damage = 0;
            if (mode == 0)
                damage = entry->maxHp * amount / 100;
            else if (mode == 1)
                damage = entry->hp * amount / 100;
            else if (mode == 2)
                damage = amount;
            if (damage >= entry->hp)
                damage = entry->hp - 1;
            FUN_003ee0c0(btlGetMainState());
            BattleRosterRecordA *target = &btlGetMainState()->rosterView.roster[entry->id];
            s32 eventFlags = index << 3;
            FUN_004fc094(0, actor, 0, target, 0, damage, -1, ~0u,
                         entry->hp, entry->maxHp, 0, 0, 0, 0, 1, 0,
                         eventFlags, eventFlags, eventFlags, eventFlags,
                         1, 0, 1, 1, 0, 1);
        }
    }
    return 1;
}
}
