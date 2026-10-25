/* NON_MATCHING: compiler merges pending-action flag tests and uses different saved registers. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/BattleUnitSlot.h"

// Keep the unit prefix local: btlUnit.h imports a conflicting, shorter BtlMainState definition.
struct ScriptCommandDataView {
    u8 unk000[0x14c];
    u16 command; // 0x14c
};
struct ScriptCommandUnitView {
    u8 unk00[0x28];
    ScriptCommandDataView *data; // 0x28
    u8 unk2c[0xc];
    s8 targets[109]; // 0x38
};

static inline bool battleEntryCanBeTarget(u32 flags)
{
    if (flags & 1)
        return false;
    if (flags & 0x40)
        return false;
    return true;
}
extern "C" {
extern u32 g_btlScriptUnit;
u32 scrGetArg(u32 argument);
BtlMainState *btlGetMainState();

// Install the two scripted actions and mark up to two available enemy entries as targets.
u32 FUN_002f6c24()
{
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    reinterpret_cast<ScriptCommandUnitView *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)))->data->command = 12;
    btlGetMainState()->pendingAction = (s32)(first | 0x20000);
    btlGetMainState()->secondaryPendingAction = (s32)(second | 0x40000);
    s8 count = 0;
    for (s32 i = 4; i < 54; ++i) {
        u32 flags = btlGetMainState()->entries[i].flags;
        if (battleEntryCanBeTarget(flags)) {
            reinterpret_cast<ScriptCommandUnitView *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)))->targets[i] = (s8)i;
            if (++count >= 2)
                return 1;
        }
    }
    return 1;
}
}
