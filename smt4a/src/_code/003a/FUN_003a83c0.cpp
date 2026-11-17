/* NON_MATCHING: the excluded-mask test pairs the halves the other way round (and r1, r1, r0; and r0, r2, ip); everything else matches. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Sets the script result and reports the command as done. */
static s32 commandResult(s32 value)
{
    scrSetResult(value);
    return 1;
}

/* Script check: report whether every candidate battle entry has the status bit from argument 0. */
u32 FUN_003a83c0(void)
{
    u32 bit = scrGetArg(0);

    for (s32 i = 0; i < 0x6d; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((g_btlCandidateMasks.unavailable & entry->flags) && (g_btlCandidateMasks.required & entry->flags) &&
            !(g_btlCandidateMasks.excluded & entry->flags) && !(entry->data.statusFlags & (1 << (u8)bit))) {
            return commandResult(0);
        }
    }
    return commandResult(1);
}
}
