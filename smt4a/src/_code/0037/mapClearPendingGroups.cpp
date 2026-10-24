#include "map/mapDepart.h"

extern "C" {

extern GameStateA g_gameState;

s32 dataTable23Type0FindIndexById(s32 id);
void FUN_002d23f0(s32 index);
void mapIfClearGroupRecordStates(s32 id);

/* Clears the map interface records of both pending groups and resets the clear flags. */
void mapClearPendingGroups(void)
{
    s32 index;

    if (g_gameState.mapGroups.groupA != 0) {
        index = dataTable23Type0FindIndexById(g_gameState.mapGroups.groupA);
        if (index != -1) {
            FUN_002d23f0(index);
            mapIfClearGroupRecordStates(g_gameState.mapGroups.groupA);
        }
    }
    if (g_gameState.mapGroups.groupB != 0) {
        index = dataTable23Type0FindIndexById(g_gameState.mapGroups.groupB);
        if (index != -1) {
            FUN_002d23f0(index);
            mapIfClearGroupRecordStates(g_gameState.mapGroups.groupB);
        }
        g_gameState.mapGroups.groupB = 0;
    }
    g_gameState.clearFlags.flag261 = 0;
    g_gameState.clearFlags.flag262 = 0;
    g_gameState.clearFlags.flag263 = 0;
    g_gameState.clearFlags.value264 = 0;
    g_gameState.clearFlags.value268 = 0;
    g_gameState.clearFlags.flag280 = 0;
}

} /* extern "C" */
