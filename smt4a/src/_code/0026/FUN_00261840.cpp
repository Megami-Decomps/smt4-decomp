/* NON_MATCHING: getter-shaped loads (scrollListGetTop/GetOffset, FUN_00387554) now match retail; only the saved-register assignment of the row offset/top and quotient/remainder differs. */
#include "shard/W6_W6Match2_ScrollList.h"

extern "C" s32 scrollListGetTop(const ScrollList *list);
extern "C" s32 scrollListGetOffset(const ScrollList *list);
extern "C" s32 FUN_00387554(void *list);

// Clamps a paired row/column selection to the last available entry.
extern "C" void FUN_00261840(ScrollSelectionOwner* owner)
{
    if (owner->entryCount > 0) {
        s32 rowOffset = scrollListGetTop(&owner->primary);
        s32 rowTop = scrollListGetOffset(&owner->primary);
        s32 columns = FUN_00387554(&owner->list);
        s32 column = scrollListGetOffset(&owner->list);
        s32 count = owner->entryCount;
        s32 lastColumn = (count - 1) % columns;
        s32 lastRow = (count - 1) / columns;
        if (count <= (rowOffset + rowTop) * columns + column) {
            scrollListSetSelection(&owner->primary, lastRow);
            scrollListSetSelection(&owner->list, lastColumn);
        }
    }
}
