#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {

/* Auto-tile index of a wall cell by its walkable-neighbour mask (west 1, east 2, north 4, south 8). */
static const u8 mapAutoTileNeighbors[16] = {0x00, 0x13, 0x11, 0x21, 0x10, 0x30, 0x31, 0x40, 0x12, 0x33, 0x32, 0x42, 0x20, 0x43, 0x41, 0x00};
/* Wall variant of a wall cell by the same mask. */
static const u8 mapAutoTileVariants[16] = {0x00, 0x01, 0x02, 0x01, 0x03, 0x03, 0x02, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x01, 0x02, 0x00};

// Rebuild interior wall tiles from the four adjacent walkable cells.
void FUN_002c5468(void)
{
    FlagWorkBanks *work = gameFlagsGetBlock();
    for (s32 row = 1; row < work->gridSize.height - 1; ++row) {
        for (s32 column = 1; column < work->gridSize.width - 1; ++column) {
            if (work->mapCells.grid.cells[row][column].state == 2) {
                u32 mask = 0;
                if (work->mapCells.grid.cells[row][column - 1].state == 1) mask |= 1;
                if (work->mapCells.grid.cells[row][column + 1].state == 1) mask |= 2;
                if (work->mapCells.grid.cells[row - 1][column].state == 1) mask |= 4;
                if (work->mapCells.grid.cells[row + 1][column].state == 1) mask |= 8;
                work->mapCells.grid.cells[row][column].autoTile.neighbors = mapAutoTileNeighbors[mask];
                work->mapCells.grid.cells[row][column].autoTile.variant = mapAutoTileVariants[mask];
            } else {
                work->mapCells.grid.cells[row][column].autoTile.neighbors = 0;
            }
        }
    }
}

}
