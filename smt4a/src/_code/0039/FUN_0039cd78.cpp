/* NON_MATCHING: the excluded-mask test's high-word AND takes its operands in the other order (and r0, r1, ip vs and r0, ip, r1). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);

/* Script command: result 1 when every candidate combatant has status bit `arg0`, else 0. */
s32 FUN_0039cd78(void)
{
    u32 bit = 1 << scrGetArg(0);
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) != 0 && (flags & g_btlCandidateMasks.required) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 && (entry->statusFlags & bit) == 0) {
            scrSetResult(0);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}

} /* extern "C" */
