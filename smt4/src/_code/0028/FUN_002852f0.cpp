/* NON_MATCHING: register allocation only (retail keeps the wall flag in r3, the constant 1 in r7 and the row pointer in r6; here ip/r6/r7). */
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

/* Lays out the maze grid: walls on the border and on even rows/columns, then picks the four exit cells. */
void FUN_002852f0(s32 keepSize)
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
        block->grid.cells[1][(randNextInRange(block->maze.width - 4) + 2) & ~1].state = 1;
        block->grid.cells[block->maze.height - 2][(randNextInRange(block->maze.width - 4) + 2) & ~1].state = 1;
        block->grid.cells[(randNextInRange(block->maze.height - 8) + 4) & ~1][1].state = 1;
        block->grid.cells[(randNextInRange(block->maze.height - 8) + 4) & ~1][block->maze.width - 2].state = 1;
    } else {
        block->grid.cells[1][(randNextInRange(block->maze.width - 8) + 4) & ~1].state = 1;
        block->grid.cells[block->maze.height - 2][(randNextInRange(block->maze.width - 8) + 4) & ~1].state = 1;
        block->grid.cells[(randNextInRange(block->maze.height - 4) + 2) & ~1][1].state = 1;
        block->grid.cells[(randNextInRange(block->maze.height - 4) + 2) & ~1][block->maze.width - 2].state = 1;
    }
}

}
