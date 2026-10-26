#include "shard/W5_W5Match7_FlagBanks.h"

/* Marks the map cell at (x, y) when it is in state 2. */
static void mapCellMarkIfState2(FlagWorkBanks *banks, s32 x, s32 y)
{
    if (banks->mapCells.grid.cells[y][x].state == 2) {
        banks->mapCells.grid.cells[y][x].marked = 1;
    }
}

extern "C" void mapCellMarkNeighborsState2(s32 x, s32 y)
{
    FlagWorkBanks *banks = gameFlagsGetBlock();
    mapCellMarkIfState2(banks, x, y);
    mapCellMarkIfState2(banks, x - 1, y);
    mapCellMarkIfState2(banks, x + 1, y);
    mapCellMarkIfState2(banks, x, y - 1);
    mapCellMarkIfState2(banks, x, y + 1);
}
