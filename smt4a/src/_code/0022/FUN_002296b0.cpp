/* NON_MATCHING: armcc folds the (height - 2) row offset into the store displacement and addresses the start cell fields through a separate base; retail keeps `sub 2` before the row multiply and reads startX/startY directly. */
#include "shard/W5_W5Match7_FlagBanks.h"

namespace {
/* The random-maze generator's state (module global). */
struct RandomMazeState {
    /* 0x000 */ u8 startX;
    /* 0x001 */ u8 startY;
    /* 0x002 */ u8 unk002[0x382];
    /* 0x384 */ u32 active;
    /* 0x388 */ u8 unk388[4];
    /* 0x38c */ u32 unk38c;
    /* 0x390 */ u32 unk390;
    /* 0x394 */ u8 unk394;
    /* 0x395 */ u8 unk395[3];
    /* 0x398 */ u32 unk398;
    /* 0x39c */ u8 unk39c[0x640];
    /* 0x9dc */ u32 unk9dc;
};
}

extern "C" {
extern RandomMazeState g_mapRndMaze;
u32 randRange(u16 max);

/* Starts a new random maze: sizes it (11x11 unless `keepSize`), fills the cell grid with walls on the
   border and every even lattice point, then opens the four border gates at random positions. */
void FUN_002296b0(s32 keepSize)
{
    FlagWorkBanks *flags = gameFlagsGetBlock();
    if (keepSize == 0) {
        flags->gridSize.width = 11;
        flags->gridSize.height = 11;
    }
    flags->gridSetup.startX = 5;
    flags->gridSetup.startY = 5;
    g_mapRndMaze.unk38c = 0;
    g_mapRndMaze.unk390 = 0;
    g_mapRndMaze.unk398 = 0;
    g_mapRndMaze.unk394 = 0;
    flags->gridSetup.specialCount = 0;
    flags->gridSetup.ready = 0;
    flags->gridSetup.displayX = 0;
    flags->gridSetup.displayY = 0;
    g_mapRndMaze.unk9dc = 0;
    g_mapRndMaze.startX = flags->gridSetup.startX;
    g_mapRndMaze.startY = flags->gridSetup.startY;
    g_mapRndMaze.active = 1;
    for (s32 y = 0; y < flags->gridSize.height; y++) {
        for (s32 x = 0; x < flags->gridSize.width; x++) {
            u8 wall = 0;
            if (y == 0 || y == flags->gridSize.height - 1 || x == 0 || x == flags->gridSize.width - 1 ||
                ((y | x) & 1) == 0) {
                wall = 1;
            }
            MapCell *cell = &flags->mapCells.grid.cells[y][x];
            cell->state = wall;
            cell->unk01[0] = 0;
            cell->markers.first = 0;
            cell->markers.second = 0;
            cell->autoTile.neighbors = 0;
        }
    }
    if (randRange(100) < 50) {
        flags->mapCells.grid.cells[1][(randRange(flags->gridSize.width - 4) + 2) & 0xfffefffe].state = 1;
        flags->mapCells.grid.cells[flags->gridSize.height - 2][(randRange(flags->gridSize.width - 4) + 2) & 0xfffefffe].state = 1;
        flags->mapCells.grid.cells[(randRange(flags->gridSize.height - 8) + 4) & 0xfffefffe][1].state = 1;
        flags->mapCells.grid.cells[(randRange(flags->gridSize.height - 8) + 4) & 0xfffefffe][flags->gridSize.width - 2].state = 1;
    } else {
        flags->mapCells.grid.cells[1][(randRange(flags->gridSize.width - 8) + 4) & 0xfffefffe].state = 1;
        flags->mapCells.grid.cells[flags->gridSize.height - 2][(randRange(flags->gridSize.width - 8) + 4) & 0xfffefffe].state = 1;
        flags->mapCells.grid.cells[(randRange(flags->gridSize.height - 4) + 2) & 0xfffefffe][1].state = 1;
        flags->mapCells.grid.cells[(randRange(flags->gridSize.height - 4) + 2) & 0xfffefffe][flags->gridSize.width - 2].state = 1;
    }
}

} /* extern "C" */
