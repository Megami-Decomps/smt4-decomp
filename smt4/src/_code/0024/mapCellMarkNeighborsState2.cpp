#include "gamedata/MapSaveBlock.h"


/* Marks the map cell at (x, y) when it is in state 2. */
static void mapCellMarkIfState2(MapSaveBlock *block, s32 x, s32 y)
{
    if (block->grid.cells[y][x].state == 2) {
        block->grid.cells[y][x].marked = 1;
    }
}

extern "C" void mapCellMarkNeighborsState2(s32 x, s32 y)
{
    MapSaveBlock *block = gameGetMapBlock();
    mapCellMarkIfState2(block, x, y);
    mapCellMarkIfState2(block, x - 1, y);
    mapCellMarkIfState2(block, x + 1, y);
    mapCellMarkIfState2(block, x, y - 1);
    mapCellMarkIfState2(block, x, y + 1);
}
