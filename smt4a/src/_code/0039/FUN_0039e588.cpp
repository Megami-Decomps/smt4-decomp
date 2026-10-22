/* NON_MATCHING: retail retains an inlined roster-address null test; mask and branch scheduling differ. */
#include "battle/btlUnit.h"
#include "battle/btlScript.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern const u64 g_battleMaskPresets[];
u32 scrGetArg(u32 index);
BtlMainStateA* btlGetMainState(void);
BtlUnitA* btlUnitGet(u32 index);

// Store a script-unit value when the requested marked reserve entry exists.
u32 FUN_0039e588(void)
{
    // This script result lies beyond the shared unit prefix's recovered end.
    struct ScriptUnitValueView {
        u8 unk0000[0x1244];
        u16 targetValue;
    };
    typedef char ScriptUnitValueOffset[
        offsetof(ScriptUnitValueView, targetValue) == 0x1244 ? 1 : -1];
    u32 id = scrGetArg(0);
    u32 value = scrGetArg(1);
    BtlMainStateA* battle = btlGetMainState();
    u64 active = g_battleMaskPresets[0];
    for (s32 i = 4; i < 54; ++i) {
        BtlCombatantEntryA* entry = &battle->entries[i];
        if ((entry->flags & active) != 0 && (entry->flags & g_battleMaskPresets[3]) == 0 &&
            (entry->flags & g_battleMaskPresets[1]) != 0 && entry->selection.marked != 0 &&
            entry->id == id) {
            reinterpret_cast<ScriptUnitValueView*>(btlUnitGet(g_btlScriptUnit))->targetValue = value;
            break;
        }
    }
    return 1;
}
}
