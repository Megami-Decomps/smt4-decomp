/* NON_MATCHING: 68 lines. The exits are mazeSetWall(x, y) calls (the column evaluated before the row, as retail does)
 * of random even u16 indices (retail's two bics); retail still folds row 1 into the store offset,
 * converts the width-2/height-2 indices without uxth, and the grid loop's wall flag and row pointer get other
 * registers. */
#include "gamedata/MapSaveBlock.h"

struct MazeGenState {
    /* 0x000 */ u8 startX;
    /* 0x001 */ u8 startY;
    /* 0x002 */ u8 unk002[0x242];
    /* 0x244 */ u32 active;
    /* 0x248 */ u32 unk248;
    /* 0x24C */ u32 floor;
    /* 0x250 */ u8 mode;
};

extern "C" {
extern MazeGenState g_asdMdlBankSet;
u16 randNextInRange(u16 range);

/* Walls in one cell of the maze. */
static __inline void mazeSetWall(MapSaveBlock *block, u16 x, u16 y)
{
    block->grid.cells[y][x].state = 1;
}

/* Lays out the maze grid: walls on the border and on even rows/columns, then picks the four exit cells. */
void mazeLayoutGrid(s32 keepSize)
{
    MapSaveBlock *block = gameGetMapBlock();

    if (keepSize == 0) {
        block->maze.width = 11;
        block->maze.height = 11;
    }
    block->maze.startX = 5;
    block->maze.startY = 5;
    g_asdMdlBankSet.floor = 0;
    g_asdMdlBankSet.mode = 0;
    block->maze.specialCount = 0;
    block->maze.ready = 0;
    block->maze.displayX = 0;
    block->maze.displayY = 0;
    g_asdMdlBankSet.startX = 5;
    g_asdMdlBankSet.startY = 5;
    g_asdMdlBankSet.active = 1;

    for (s32 y = 0; y < block->maze.height; y++) {
        for (s32 x = 0; x < block->maze.width; x++) {
            u8 wall = 0;
            if (y == 0 || y == block->maze.height - 1 || x == 0 || x == block->maze.width - 1 || ((y | x) & 1) == 0) {
                wall = 1;
            }
            MapCell *cell = &block->grid.cells[y][x];
            cell->state = wall;
            cell->unk01[0] = 0;
            cell->markers.first = 0;
            cell->markers.second = 0;
            cell->autoTile.neighbors = 0;
        }
    }

    if (randNextInRange(100) < 50) {
        mazeSetWall(block, (randNextInRange(block->maze.width - 4) + 2) & ~1, 1);
        mazeSetWall(block, (randNextInRange(block->maze.width - 4) + 2) & ~1, block->maze.height - 2);
        mazeSetWall(block, 1, (randNextInRange(block->maze.height - 8) + 4) & ~1);
        mazeSetWall(block, block->maze.width - 2, (randNextInRange(block->maze.height - 8) + 4) & ~1);
    } else {
        mazeSetWall(block, (randNextInRange(block->maze.width - 8) + 4) & ~1, 1);
        mazeSetWall(block, (randNextInRange(block->maze.width - 8) + 4) & ~1, block->maze.height - 2);
        mazeSetWall(block, 1, (randNextInRange(block->maze.height - 4) + 2) & ~1);
        mazeSetWall(block, block->maze.width - 2, (randNextInRange(block->maze.height - 4) + 2) & ~1);
    }
}

}
