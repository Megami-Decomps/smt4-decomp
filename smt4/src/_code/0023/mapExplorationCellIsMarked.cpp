#include "gamedata/MapSaveBlock.h"

static __inline s32 cellInBounds(s32 x, s32 y)
{
    if (x < 0)
        return 0;
    if (x >= 5)
        return 0;
    if (y < 0)
        return 0;
    if (y >= 7)
        return 0;
    return 1;
}

/* Test one cell of the selected five-by-seven exploration grid. */
extern "C" bool mapExplorationCellIsMarked(s32 region, s32 x, s32 y)
{
    MapSaveBlock *flags = gameGetMapBlock();
    s32 cell = y * 5 + x;
    if (region == 101) {
        if (!cellInBounds(x, y)) {
            return false;
        }
        return (flags->explorationCells[0][cell / 8] & (1 << (u8)(cell % 8))) != 0;
    }
    if (region == 102) {
        if (!cellInBounds(x, y)) {
            return false;
        }
        return (flags->explorationCells[1][cell / 8] & (1 << (u8)(cell % 8))) != 0;
    }
    if (region == 103) {
        if (!cellInBounds(x, y)) {
            return false;
        }
        return (flags->explorationCells[2][cell / 8] & (1 << (u8)(cell % 8))) != 0;
    }
    return false;
}
