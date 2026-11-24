#include "battle/BtlMainAccess.h"
#include "battle/BtlScriptProperty.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Reports whether eligible copies of the unit exist and all have a negative value in the selected counter. */
u32 btlScriptAllEligibleCopiesHaveNegativeCounter()
{
    u32 id = scrGetArg(0);
    s32 kind = scrGetArg(1);
    s32 property = btlScriptPropertyColumn(kind);
    u8 found = 0;
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 && entry->data.id == id) {
            found = 1;
            if (entry->properties[property] > -1) {
                scrSetResult(0);
                return 1;
            }
        }
    }
    scrSetResult(found != 0);
    return 1;
}
} /* extern "C" */
