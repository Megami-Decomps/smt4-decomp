#include "camp/CampMenuEntry.h"
#include "ui/GridNavigation.h"

extern "C" {
s32 listSourceGetFirst(u8 *part);

// The selected entry of the grid's active list, or zero for an empty grid.
s32 objectPartRunUnlessLocked(GridNavigation *grid)
{
    if (grid->empty == 0)
        return listSourceGetFirst(reinterpret_cast<u8 *>(&grid->columns));
    return 0;
}
}
