/* NON_MATCHING: the masks are read through a local pointer, so only the active mask is hoisted and the other two reload in the loop as in retail; remaining: retail loads the active mask as two ldr around the entry base (the build: ldm), the excluded pair into r9/sl, the marked byte test unpredicated (an s8 `marked`, which regresses other users), and adds the holder offset after the roster index. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "script/ScriptArgs.h"

extern "C" {
void targetStartIndexWithFlag2(u32, u32);

u32 FUN_003cc4e4(void)
{
    u32 id = scrGetArg(0);
    u32 argument = scrGetArg(1);
    BtlMainStateA *state = btlGetMainState();
    const BattleMaskPresets *masks = &g_battleMaskPresets;
    for (s32 index = 4; index < 54; ++index) {
        BtlCombatantEntryA *entry = &state->entries[index];
        if ((entry->flags & masks->eligibility.active) != 0 &&
            (entry->flags & masks->eligibility.excluded) == 0 &&
            (entry->flags & masks->eligibility.required) != 0 &&
            entry->data.marked != 0 && entry->data.id == id) {
            targetStartIndexWithFlag2(state->roster[index].script.holder, argument);
            break;
        }
    }
    return 1;
}
}
