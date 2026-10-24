#include "shard/W6_W6Match2_ScrollList.h"

extern "C" {

s32 scrollListGetTop(const ScrollList *list);
s32 scrollListGetOffset(const ScrollList *list);

// Select an entry when unlocked and mark a changed selection for refresh.
void scrollOwnerSelectIndex(ScrollSelectionOwner *owner, s32 index)
{
    if (owner->locked != 0) {
        return;
    }
    if (scrollListGetTop(&owner->list) + scrollListGetOffset(&owner->list) != index) {
        owner->changed = 1;
    }
    scrollListSetSelection(&owner->list, index);
}

} /* extern "C" */
