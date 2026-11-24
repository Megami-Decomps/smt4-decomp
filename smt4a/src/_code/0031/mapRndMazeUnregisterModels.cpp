#include "map/mapRndMaze.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriModelManager.h"

/* Unregisters maze models, preserving each set's reserved zero slot. */
extern "C" void mapRndMazeUnregisterModels(void)
{
    g_mapRndMaze.hidden = 0;
    for (s32 set = 0; set < MAZE_MODEL_SET_COUNT; ++set) {
        for (s32 slot = 1; slot < MAZE_MODEL_SET_CAPACITY; ++slot) {
            if (g_mapRndMaze.models[set][slot] != NULL && g_mapRndMaze.models[set][slot]->body != NULL) {
                ptrListRemoveClearOwner(g_handleRegistry, g_mapRndMaze.models[set][slot]->body);
            }
        }
        if (g_mapRndMaze.roots[set] != NULL && g_mapRndMaze.roots[set]->body != NULL) {
            ptrListRemoveClearOwner(g_handleRegistry, g_mapRndMaze.roots[set]->body);
        }
    }
    if (g_mapRndMaze.marker != NULL && g_mapRndMaze.marker->body != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, g_mapRndMaze.marker->body);
    }
    if (g_mapRndMaze.scriptedFirstMarkerA != NULL && g_mapRndMaze.scriptedFirstMarkerA->body != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, g_mapRndMaze.scriptedFirstMarkerA->body);
    }
    if (g_mapRndMaze.scriptedSecondMarker != NULL && g_mapRndMaze.scriptedSecondMarker->body != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, g_mapRndMaze.scriptedSecondMarker->body);
    }
    if (g_mapRndMaze.scriptedFirstMarkerB != NULL && g_mapRndMaze.scriptedFirstMarkerB->body != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, g_mapRndMaze.scriptedFirstMarkerB->body);
    }
}
