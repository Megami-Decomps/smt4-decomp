#include "shard/RuntimeEntryTable.h"
#include "gamedata/GameDataAccess_VariantE.h"

/* Disables populated entries whose required flag is absent or whose forbidden flag is set. */
extern "C" void mapEffectDisableFlagGatedEntries(void)
{
    s32 index = 0;
    if (DAT_00580c90.count <= 0) {
        return;
    }
    RuntimeEntry *entries = g_recordTable;
    do {
        if (!entries[index].disabled && entries[index].object != NULL &&
            ((entries[index].requiredFlag != 0 && !gameFlagIsSet(entries[index].requiredFlag)) ||
             (entries[index].forbiddenFlag != 0 && gameFlagIsSet(entries[index].forbiddenFlag)))) {
            entries[index].disabled = 1;
        }
    } while (++index < DAT_00580c90.count);
}
