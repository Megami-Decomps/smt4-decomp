/* NON_MATCHING: as FUN_003cc4e4: the masks are read through a local pointer, so only the active mask is hoisted and the other two reload in the loop as in retail; remaining: retail loads the active mask as two ldr around the entry base (the build: ldm), the excluded pair into r9/sl, the marked byte test unpredicated (an s8 `marked`, which regresses other users), and adds the handle offset after the roster index. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W5_W5Match7_BattleMask.h"


extern "C" {
u32 scrGetArg(u32 index);
void asdModelStartReferencedAnimation(BattleMotionHandle **model, u32 animation);

/* Starts an animation on the marked, eligible combatant with the requested ID. */
u32 FUN_003c9ff8()
{
    u32 id = scrGetArg(0);
    u32 animation = scrGetArg(1);
    BtlMainStateA *battle = btlGetMainState();
    const BattleMaskPresets *masks = &g_battleMaskPresets;
    for (s32 i = 4; i < 54; ++i) {
        BtlCombatantEntryA *entry = &battle->entries[i];
        if ((entry->flags & masks->eligibility.active) != 0 &&
            (entry->flags & masks->eligibility.excluded) == 0 &&
            (entry->flags & masks->eligibility.required) != 0 &&
            entry->data.marked != 0 && entry->data.id == id) {
            asdModelStartReferencedAnimation(battle->roster[i].motion.handle, animation);
            break;
        }
    }
    return 1;
}
}
