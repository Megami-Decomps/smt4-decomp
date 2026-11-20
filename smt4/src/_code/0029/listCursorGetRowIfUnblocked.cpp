#include "ui/GridNavigation.h"
#include "code/Code0029_VariantB.h"

extern "C" {
u32 listSourceGetFirst(const RowWidget *rows);

u32 listCursorGetRowIfUnblocked(const void *handle)
{
    const GridNavigation *grid = static_cast<const GridNavigation *>(handle);
    if (grid->empty)
        return 0;
    return listSourceGetFirst(&grid->rows);
}
}
