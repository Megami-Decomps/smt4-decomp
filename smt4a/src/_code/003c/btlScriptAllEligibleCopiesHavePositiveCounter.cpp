#include "battle/BtlMainAccess.h"
#include "battle/BtlScriptProperty.h"
#include "common.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Tests whether all eligible copies of a unit have a positive value in the selected counter. */
s32 btlScriptAllEligibleCopiesHavePositiveCounter(void)
{
    u32 id = scrGetArg(0);
    s32 kind = scrGetArg(1);
    s32 column = btlScriptPropertyColumn(kind);
    u8 found = 0;
    s32 index = 0;
    do {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((g_btlCandidateMasks.unavailable & entry->flags) != 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (g_btlCandidateMasks.excluded & entry->flags) == 0 && entry->data.id == id) {
            found = 1;
            if (entry->properties[column] < 1) {
                scrSetResult(0);
                return 1;
            }
        }
    } while (++index < 109);
    scrSetResult(found != 0);
    return 1;
}
} /* extern "C" */
