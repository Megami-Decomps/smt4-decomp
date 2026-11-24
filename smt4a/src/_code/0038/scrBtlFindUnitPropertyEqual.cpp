#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"
extern "C" {

/* Test whether an eligible combatant has the requested ID and property value. */
u32 scrBtlFindUnitPropertyEqual(void)
{
    u32 unitId = scrGetArg(0);
    s32 kind = scrGetArg(1);
    s32 property = 0;
    if (kind == 0)
        property = 7;
    else if (kind == 1)
        property = 8;
    else if (kind == 2)
        property = 10;
    else if (kind == 3)
        property = 11;
    u32 value = scrGetArg(2);
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entries = btlGetMainState()->entries;
        BtlCombatantEntryA *entry = &entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (g_btlCandidateMasks.excluded & entry->flags) == 0 &&
            entry->data.id == unitId &&
            static_cast<u32>(entry->properties[property]) == value) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
