#include "map/mapRndMaze.h"

extern "C" {

/* Clears all of the random maze's model handles. */
void mapRndMazeResetHandles(void)
{
    for (s32 set = 0; set < MAZE_MODEL_SET_COUNT; ++set) {
        g_mapRndMaze.roots[set] = NULL;
        for (s32 slot = 0; slot < MAZE_MODEL_SET_CAPACITY; ++slot) {
            g_mapRndMaze.models[set][slot] = NULL;
        }
    }
    g_mapRndMaze.marker = NULL;
    g_mapRndMaze.scriptedSecondMarker = NULL;
    g_mapRndMaze.scriptedFirstMarkerB = NULL;
    g_mapRndMaze.scriptedFirstMarkerA = NULL;
}

} /* extern "C" */
