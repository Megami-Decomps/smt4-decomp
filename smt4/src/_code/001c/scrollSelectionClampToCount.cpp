#include "shard/W6_W6Match2_ScrollList.h"

extern "C" {
s32 scrollListGetTop(const ScrollList *list);
s32 scrollListGetOffset(const ScrollList *list);
s32 FUN_002fc240(const ScrollList *list);
}

// Clamps a paired row/column selection to the last available entry.
extern "C" void scrollSelectionClampToCount(ScrollSelectionOwner* owner)
{
    if (owner->entryCount > 0) {
        s32 rowTop;
        s32 rowOffset;
        s32 columns;
        s32 column;
        s32 count;
        s32 lastColumn;
        s32 lastRow;

        rowOffset = scrollListGetTop(&owner->primary);
        rowTop = scrollListGetOffset(&owner->primary);
        columns = FUN_002fc240(&owner->list);
        column = scrollListGetOffset(&owner->list);
        count = owner->entryCount;
        lastColumn = (count - 1) % columns;
        lastRow = (count - 1) / columns;
        if (count <= (rowOffset + rowTop) * columns + column) {
            scrollListSetSelection(&owner->primary, lastRow);
            scrollListSetSelection(&owner->list, lastColumn);
        }
    }
}
