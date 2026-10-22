/* NON_MATCHING: The retail accessors retain repeated getter-shaped loads and frames. */
#include "shard/W6_W6Match2_ScrollList.h"

// Clamps a paired row/column selection to the last available entry.
extern "C" void FUN_00261840(ScrollSelectionOwner* owner)
{
    if (owner->entryCount > 0) {
        s32 rowOffset = owner->primary.offset;
        s32 rowTop = owner->primary.top;
        s32 columns = owner->list.visible;
        s32 column = owner->list.top;
        s32 count = owner->entryCount;
        s32 lastRow = (count - 1) / columns;
        s32 lastColumn = (count - 1) % columns;
        if (count <= (rowOffset + rowTop) * columns + column) {
            scrollListSetSelection(&owner->primary, lastRow);
            scrollListSetSelection(&owner->list, lastColumn);
        }
    }
}
