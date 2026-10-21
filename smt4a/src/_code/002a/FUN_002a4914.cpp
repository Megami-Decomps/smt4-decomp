/* NON_MATCHING: retail keeps a call frame and evaluates top/offset through separate getter-shaped loads. */
#include "shard/W6_W6Match2_ScrollList.h"

// Select an entry when unlocked and mark a changed selection for refresh.
extern "C" void FUN_002a4914(ScrollSelectionOwner* owner, s32 index)
{
    if (owner->locked != 0) {
        return;
    }
    if (owner->list.top + owner->list.offset != index) {
        owner->changed = 1;
    }
    scrollListSetSelection(&owner->list, index);
}
