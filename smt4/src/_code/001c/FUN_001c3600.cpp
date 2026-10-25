/* NON_MATCHING: only the saved-register numbers of the row offset/top pair (retail sl/r7, built r7/sl) differ. */
#include "shard/W6_W6Match2_ScrollList.h"

extern "C" {
s32 scrollListGetTop(const ScrollList *list);
s32 scrollListGetOffset(const ScrollList *list);
s32 FUN_002fc240(const ScrollList *list);
}

// Clamps a paired row/column selection to the last available entry.
extern "C" void FUN_001c3600(ScrollSelectionOwner* owner)
{
    if (owner->entryCount > 0) {
        s32 rowOffset = scrollListGetTop(&owner->primary);
        s32 rowTop = scrollListGetOffset(&owner->primary);
        s32 columns = FUN_002fc240(&owner->list);
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
