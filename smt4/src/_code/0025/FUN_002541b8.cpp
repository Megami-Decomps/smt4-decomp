#include "map/MapEffectReservation.h"

extern "C" {
/* Sets the flag prerequisites for the first matching map effect and clears its disabled marker. */
void FUN_002541b8(u32 resource, u16 requiredFlag, u16 forbiddenFlag)
{
    for (s32 i = 0; i < g_entryTableInfo.count; i++) {
        if (g_namedEntryTable[i].resource == resource) {
            g_namedEntryTable[i].state.requiredFlag = requiredFlag;
            g_namedEntryTable[i].state.forbiddenFlag = forbiddenFlag;
            g_namedEntryTable[i].state.disabled = 0;
            return;
        }
    }
}

} /* extern "C" */
