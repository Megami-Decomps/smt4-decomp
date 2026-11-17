#include "map/mapDepart.h"
#include "game/GameStateA.h"

extern "C" {

s32 dataTable23Type0FindIndexById(s32 id);
void dataTable23MarkEntrySeen(s32 index);
void mapIfClearGroupRecordStates(s32 id);

/* Clears the map interface records of both pending groups and resets the clear flags. */
void mapClearPendingGroups(void)
{
    s32 index;

    if (g_gameState.groupA != 0) {
        index = dataTable23Type0FindIndexById(g_gameState.groupA);
        if (index != -1) {
            dataTable23MarkEntrySeen(index);
            mapIfClearGroupRecordStates(g_gameState.groupA);
        }
    }
    if (g_gameState.groupB != 0) {
        index = dataTable23Type0FindIndexById(g_gameState.groupB);
        if (index != -1) {
            dataTable23MarkEntrySeen(index);
            mapIfClearGroupRecordStates(g_gameState.groupB);
        }
        g_gameState.groupB = 0;
    }
    g_gameState.destinationSet = 0;
    g_gameState.dialogRequested = 0;
    g_gameState.unk263 = 0;
    g_gameState.unk264 = 0;
    g_gameState.unk268 = 0;
    g_gameState.unk280 = 0;
}

} /* extern "C" */
