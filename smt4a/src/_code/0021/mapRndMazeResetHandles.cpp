/* Resets the random-maze handle tables. */
#include "common.h"

struct MapRndMaze {
    u8 unk000[0x3b4];
    void *roots[6];       // 0x3b4 (the per-row handle roots)
    void *groups[6][64];  // 0x3cc (the per-row handle groups)
    s32 tail[4];        // 0x9cc
};

extern "C" {

extern MapRndMaze g_mapRndMaze; /* 0x60fc08 */

// Clear the maze's handle roots, the handle groups and the trailing state words.
void mapRndMazeResetHandles(void)
{
    for (s32 row = 0; row < 6; row++) {
        g_mapRndMaze.roots[row] = NULL;
        for (s32 column = 0; column < 64; column++) {
            g_mapRndMaze.groups[row][column] = NULL;
        }
    }
    g_mapRndMaze.tail[2] = 0;
    g_mapRndMaze.tail[0] = 0;
    g_mapRndMaze.tail[3] = 0;
    g_mapRndMaze.tail[1] = 0;
}

} /* extern "C" */
