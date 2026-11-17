/* NON_MATCHING: retail shares one tail after the last fine-map arm and orders the fine/102 byte-mask computation differently; bounds, index sharing and branch placement otherwise match. */
#include "gamedata/MapSaveBlockA.h"

// True when (x, y) lies inside a width-by-height grid.
static __inline bool cellInGrid(s32 x, s32 y, s32 width, s32 height)
{
    return x >= 0 && x < width && y >= 0 && y < height;
}
extern "C" {
// Mark an area cell discovered and propagate the linked cells of map 101.
void areaDiscoveryMarkCell(s32 map, s32 x, s32 y)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();
    if (map == 101) {
        if (!cellInGrid(x, y, 10, 14))
            return;
        s32 index = x + y * 10;
        flags->fineCells[index / 8] |= 1 << (index % 8);
        if (index == 11)
            flags->fineCells[0] |= 2;
        else if (index == 71)
            flags->explorationCells[1][0] |= 0x40;
        else if (index == 72)
            flags->explorationCells[1][2] |= 2;
        else if (index == 94)
            flags->explorationCells[1][3] |= 0x30;
        else if (index == 85)
            flags->explorationCells[1][3] |= 0x80;
        else if (index == 66)
            flags->explorationCells[1][0] |= 8;
        else if (index == 87)
            flags->explorationCells[1][4] |= 2;
        else if (index == 86)
            flags->explorationCells[1][4] |= 1;
        return;
    }
    s32 index = y * 5 + x;
    if (map == 102) {
        if (cellInGrid(x, y, 5, 7))
            flags->explorationCells[1][index / 8] |= 1 << (index % 8);
    } else if (map == 103) {
        if (cellInGrid(x, y, 5, 7))
            flags->explorationCells[2][index / 8] |= 1 << (index % 8);
    }
}
}
