/* NON_MATCHING: the masks are read through a local pointer (only the active mask hoisted, the others reloaded in the loop as in retail); remaining: saved registers and roster-holder addressing differ. */
#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
extern BattleMaskPresets g_battleMaskPresets;
s32 scrGetArg(s32 index);

// Set an animation on the first marked enemy matching the requested demon ID.
u32 FUN_0039e768()
{
    u32 id = scrGetArg(0);
    u32 animation = scrGetArg(1);
    f32 duration = (f32)scrGetArg(2);
    s32 enabled = scrGetArg(3);
    BtlMainStateA *state = btlGetMainState();
    const BattleMaskPresets *masks = &g_battleMaskPresets;
    for (s32 index = 4; index < 54; ++index) {
        BtlCombatantEntryA *entry = &state->entries[index];
        u64 flags = entry->flags;
        if ((flags & masks->eligibility.active) &&
            !(flags & masks->eligibility.excluded) &&
            (flags & masks->eligibility.required) &&
            entry->data.marked && entry->data.id == id) {
            FUN_004d888c(state->roster[index].motion.handle, animation, duration, enabled != 0);
            break;
        }
    }
    return 1;
}
}
