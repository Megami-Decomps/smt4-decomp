/* NON_MATCHING: mask loads are reordered and the unit flags use LDM instead of LDRD. */
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

// Return a selected unit value, suppressing it for the masked special unit.
extern "C" u32 FUN_0035efe0(void)
{
    s32 index = scrGetArg(0);
    ScriptUnitEntry *entry = btlUnitGet(g_btlScriptUnit)->entryView.entry;
    u32 value = entry->values[index];
    ScriptUnitData *data = btlUnitGet(g_btlScriptUnit)->data;
    if ((g_btlCandidateMasks.unavailable & entry->flags) != 0 && data->id == 0x3b7) {
        scrSetResult(0);
        return 1;
    }
    scrSetResult(value);
    return 1;
}
