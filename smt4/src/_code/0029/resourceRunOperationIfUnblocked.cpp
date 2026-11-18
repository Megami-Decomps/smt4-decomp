#include "ui/GridNavigation.h"

extern "C" {
u32 FUN_002d5720(const RowWidget *rows);

// An empty grid has no selection index.
u32 resourceRunOperationIfUnblocked(const GridNavigation *grid)
{
    if (grid->empty)
        return 0;
    return FUN_002d5720(&grid->rows);
}
}
