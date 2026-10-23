/* NON_MATCHING: mask loads are hoisted across the combatant scan, changing saved registers and roster-holder addressing. */
#include "battle/btlMain.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
extern BattleMaskPresets g_battleMaskPresets;
s32 scrGetArg(s32 index);
void FUN_004d888c(u32 holder, u32 animation, s32 enabled, f32 duration);

// Set an animation on the first marked enemy matching the requested demon ID.
u32 FUN_0039e768()
{
    u32 id = scrGetArg(0);
    u32 animation = scrGetArg(1);
    f32 duration = (f32)scrGetArg(2);
    s32 enabled = scrGetArg(3);
    BtlMainStateA *state = reinterpret_cast<BtlMainStateA *>(btlGetMainState());
    for (s32 index = 4; index < 54; ++index) {
        BtlCombatantEntryA *entry = &state->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_battleMaskPresets.eligibility.active) &&
            !(flags & g_battleMaskPresets.eligibility.excluded) &&
            (flags & g_battleMaskPresets.eligibility.required) &&
            entry->selection.marked && entry->id == id) {
            FUN_004d888c(state->roster[index].script.holder, animation, enabled != 0, duration);
            break;
        }
    }
    return 1;
}
}
