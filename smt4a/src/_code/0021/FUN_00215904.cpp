/* NON_MATCHING: armcc turns the cell-clear loop into __aeabi_memclr4; retail keeps a plain store loop (unrolled by two). */
#include "common.h"

struct MapRndMaze {
    u8 unk000[0x3b4];
    s32 rowCounts[6];   // 0x3b4
    s32 cells[6][64];   // 0x3cc
    s32 tail[4];        // 0x9cc
};

extern "C" {

extern MapRndMaze g_mapRndMaze; /* 0x60fc08 */

// Clear the maze's per-row counts, the cell grid and the trailing state words.
void FUN_00215904(void)
{
    for (s32 row = 0; row < 6; row++) {
        g_mapRndMaze.rowCounts[row] = 0;
        for (s32 column = 0; column < 64; column++) {
            g_mapRndMaze.cells[row][column] = 0;
        }
    }
    g_mapRndMaze.tail[2] = 0;
    g_mapRndMaze.tail[0] = 0;
    g_mapRndMaze.tail[3] = 0;
    g_mapRndMaze.tail[1] = 0;
}

} /* extern "C" */
