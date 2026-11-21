/* NON_MATCHING: registers only: retail keeps the masks pointer in r6 and the unit id in sl, and pairs the later masks'
   loads into ldrd (r8:r9) where armcc uses ldm. */
#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "script/ScriptArgs.h"

// The value at 0x160 lies inside an unaligned padding union in the shared combatant view.
struct ScriptCombatantValueView {
    u64 flags; // 0x000
    u8 unk008[0x158];
    u32 value; // 0x160
};

// Set a script-controlled value on the first eligible enemy with the requested unit id.
extern "C" u32 FUN_003a98c4()
{
    u32 unitId = scrGetArg(0);
    u32 value = scrGetArg(1);
    BtlMainStateA *battle = btlGetMainState();
    const BattleMaskPresets *masks = &g_battleMaskPresets;
    for (s32 i = 4; i < 54; ++i) {
        BtlCombatantEntryA *entry = &battle->entries[i];
        u64 flags = entry->flags;
        if ((flags & masks->eligibility.active) &&
            !(flags & masks->eligibility.excluded) &&
            (flags & masks->eligibility.required) && entry->data.id == unitId) {
            ((ScriptCombatantValueView *)entry)->value = value;
            break;
        }
    }
    return 1;
}
