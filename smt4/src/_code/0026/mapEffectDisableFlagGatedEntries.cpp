#include "map/MapEffectReservation.h"
#include "gamedata/GameDataAccess_VariantE.h"

/* Disables populated entries whose required flag is absent or whose forbidden flag is set. */
extern "C" void mapEffectDisableFlagGatedEntries(void)
{
    s32 index = 0;
    if (g_entryTableInfo.count <= 0) {
        return;
    }
    MapEffectInstance *entries = g_namedEntryTable;
    do {
        if (!entries[index].state.disabled && entries[index].resource != 0 &&
            ((entries[index].state.requiredFlag != 0 && !gameFlagIsSet(entries[index].state.requiredFlag)) ||
             (entries[index].state.forbiddenFlag != 0 && gameFlagIsSet(entries[index].state.forbiddenFlag)))) {
            entries[index].state.disabled = 1;
        }
    } while (++index < g_entryTableInfo.count);
}
