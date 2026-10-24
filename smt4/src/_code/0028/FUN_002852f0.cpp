/* NON_MATCHING: register allocation only (retail keeps the wall flag in r3, the constant 1 in r7 and the row pointer in r6; here ip/r6/r7). */
#include "common.h"

/* One grid cell of the generated maze layout. */
struct MazeCell {
    /* 0x00 */ u8 wall;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u8 marked;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u8 pad06[2];
};

struct MazeRow {
    MazeCell cells[15];
};

/* The map block's maze section: cell grid at 0x3C and the grid size at 0xDD0. */
struct MazeBlock {
    /* 0x000 */ u8 unk000[0x3C];
    /* 0x03C */ MazeRow rows[15];
    /* 0x744 */ u8 unk744[0x68C];
    /* 0xDD0 */ s8 width;
    /* 0xDD1 */ s8 height;
    /* 0xDD2 */ u8 startX;
    /* 0xDD3 */ u8 startY;
    /* 0xDD4 */ u8 unkDD4[4];
};

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
MazeBlock *gameGetMapBlock(void);
u16 randNextInRange(u16 range);
extern MazeGenState DAT_004bce8c;

/* Lays out the maze grid: walls on the border and on even rows/columns, then picks the four exit cells. */
void FUN_002852f0(s32 keepSize)
{
    MazeBlock *maze = gameGetMapBlock();

    if (keepSize == 0) {
        maze->width = 11;
        maze->height = 11;
    }
    maze->startX = 5;
    maze->startY = 5;
    DAT_004bce8c.floor = 0;
    DAT_004bce8c.mode = 0;
    maze->unkDD4[0] = 0;
    maze->unkDD4[1] = 0;
    maze->unkDD4[2] = 0;
    maze->unkDD4[3] = 0;
    DAT_004bce8c.startX = 5;
    DAT_004bce8c.startY = 5;
    DAT_004bce8c.active = 1;

    for (s32 y = 0; y < maze->height; y++) {
        for (s32 x = 0; x < maze->width; x++) {
            u8 wall = 0;
            if (y == 0 || y == maze->height - 1 || x == 0 || x == maze->width - 1 || ((y | x) & 1) == 0) {
                wall = 1;
            }
            MazeCell *cell = &maze->rows[y].cells[x];
            cell->wall = wall;
            cell->unk01 = 0;
            cell->unk02 = 0;
            cell->unk03 = 0;
            cell->unk05 = 0;
        }
    }

    if (randNextInRange(100) < 50) {
        maze->rows[1].cells[(randNextInRange(maze->width - 4) + 2) & ~1].wall = 1;
        maze->rows[maze->height - 2].cells[(randNextInRange(maze->width - 4) + 2) & ~1].wall = 1;
        maze->rows[(randNextInRange(maze->height - 8) + 4) & ~1].cells[1].wall = 1;
        maze->rows[(randNextInRange(maze->height - 8) + 4) & ~1].cells[maze->width - 2].wall = 1;
    } else {
        maze->rows[1].cells[(randNextInRange(maze->width - 8) + 4) & ~1].wall = 1;
        maze->rows[maze->height - 2].cells[(randNextInRange(maze->width - 8) + 4) & ~1].wall = 1;
        maze->rows[(randNextInRange(maze->height - 4) + 2) & ~1].cells[1].wall = 1;
        maze->rows[(randNextInRange(maze->height - 4) + 2) & ~1].cells[maze->width - 2].wall = 1;
    }
}

}
