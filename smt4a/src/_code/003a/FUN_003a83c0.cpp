#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

/* FUN_0039cd78's body, which retail inlines whole into this command (one source file in the original). */
static __inline s32 scriptAllEntriesHaveStatusBit(void)
{
    s32 status = scrGetArg(0);
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 && (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 && !(entry->data.statusFlags & (1u << status))) {
            scrSetResult(0);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}

/* Script check: report whether every candidate battle entry has the status bit from argument 0 (FUN_0039cd78). */
u32 FUN_003a83c0(void)
{
    return scriptAllEntriesHaveStatusBit();
}
}
