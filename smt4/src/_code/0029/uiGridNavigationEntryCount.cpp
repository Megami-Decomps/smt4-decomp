#include "camp/CampMenuEntry.h"
#include "ui/GridNavigation.h"

extern "C" {
u32 FUN_002d5718(const void *part);

// The number of entries in the grid's active list, or zero for an empty grid.
u32 uiGridNavigationEntryCount(const GridNavigation *grid)
{
    if (grid->empty != 0)
        return 0;
    return FUN_002d5718(&grid->columns);
}
}
