/* NON_MATCHING: typed grid indexing folds neighbor arithmetic that retail recomputes. */
#include "shard/SaveWork.h"

extern "C" SaveWork *gameGetMapBlock();

extern "C" void FUN_002486a8(s32 x, s32 y)
{
    MapCellGrid *grid = &gameGetMapBlock()->mapCells.grid;
    if (grid->cells[y][x].state == 2) {
        grid->cells[y][x].marked = 1;
    }
    if (grid->cells[y][x - 1].state == 2) {
        grid->cells[y][x - 1].marked = 1;
    }
    if (grid->cells[y][x + 1].state == 2) {
        grid->cells[y][x + 1].marked = 1;
    }
    if (grid->cells[y - 1][x].state == 2) {
        grid->cells[y - 1][x].marked = 1;
    }
    if (grid->cells[y + 1][x].state == 2) {
        grid->cells[y + 1][x].marked = 1;
    }
}
