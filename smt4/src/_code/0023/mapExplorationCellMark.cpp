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

/* Mark one cell of a five-by-seven exploration grid in the selected region. */
extern "C" void mapExplorationCellMark(s32 region, s32 x, s32 y)
{
    MapSaveBlock *flags = gameGetMapBlock();
    s32 cell = y * 5 + x;
    switch (region) {
    case 101:
        if (cellInBounds(x, y)) {
            flags->explorationCells[0][cell / 8] |= (u8)(1 << (u8)(cell % 8));
        }
        return;
    case 102:
        if (cellInBounds(x, y)) {
            flags->explorationCells[1][cell / 8] |= (u8)(1 << (u8)(cell % 8));
        }
        return;
    case 103:
        if (cellInBounds(x, y)) {
            flags->explorationCells[2][cell / 8] |= (u8)(1 << (u8)(cell % 8));
        }
        return;
    }
}
