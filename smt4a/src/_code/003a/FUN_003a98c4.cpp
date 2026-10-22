/* NON_MATCHING: retail uses fewer saved registers and a differently scheduled eligibility loop with a shared tail return. */
#include "shard/W5_W5Match7_BattleMask.h"

// The value at 0x160 lies inside an unaligned padding union in the shared combatant view.
struct ScriptCombatantValueView {
    u64 flags; // 0x000
    u8 unk008[0x158];
    u32 value; // 0x160
};
extern "C" u32 scrGetArg(u32 index);

// Set a script-controlled value on the first eligible enemy with the requested unit id.
extern "C" u32 FUN_003a98c4()
{
    u32 unitId = scrGetArg(0);
    u32 value = scrGetArg(1);
    BattleMaskState *battle = btlGetMainState();
    for (s32 i = 4; i < 54; ++i) {
        BattleMaskEntry *entry = &battle->entryView.entries[i];
        u64 flags = entry->mask;
        if ((flags & g_battleMaskPresets.eligibility.active) &&
            !(flags & g_battleMaskPresets.eligibility.excluded) &&
            (flags & g_battleMaskPresets.eligibility.required) && entry->unitId == unitId) {
            ((ScriptCombatantValueView *)entry)->value = value;
            break;
        }
    }
    return 1;
}
