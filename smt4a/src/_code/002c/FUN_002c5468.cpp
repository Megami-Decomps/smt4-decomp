/* NON_MATCHING: neighbor-table indexing and grid-loop block placement differ. */
#include "shard/W5_W5Match7_FlagBanks.h"

struct MapAutoTileTables {
    u8 neighbors[16];
    u8 variants[16];
};

extern "C" {
extern const MapAutoTileTables DAT_005814a4;

// Rebuild interior wall tiles from the four adjacent walkable cells.
void FUN_002c5468(void)
{
    FlagWorkBanks *work = gameFlagsGetBlock();
    for (s32 row = 1; row < work->gridSize.height - 1; ++row) {
        for (s32 column = 1; column < work->gridSize.width - 1; ++column) {
            MapCell *cell = &work->mapCells.grid.cells[row][column];
            if (cell->state != 2) {
                cell->autoTile.neighbors = 0;
            } else {
                u32 mask = cell[-1].state == 1;
                if (cell[1].state == 1) mask |= 2;
                if (work->mapCells.grid.cells[row - 1][column].state == 1) mask |= 4;
                if (work->mapCells.grid.cells[row + 1][column].state == 1) mask |= 8;
                cell->autoTile.neighbors = DAT_005814a4.neighbors[mask];
                cell->autoTile.variant = DAT_005814a4.variants[mask];
            }
        }
    }
}
}
