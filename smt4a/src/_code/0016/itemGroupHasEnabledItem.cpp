#include "gfx/MatrixSlots.h"

/* unit-local: a vector-style iterator over the pointer list. */
struct ItemIterator {
    SlotOwnerItem **current;
};
static __inline bool operator!=(const ItemIterator &a, const ItemIterator &b)
{
    return a.current != b.current;
}

extern "C" {
/* Reports whether any item in the selected group is enabled. */
s32 itemGroupHasEnabledItem(SlotOwner *owner, s32 group)
{
    SlotOwnerItemList *items = &owner->groups()[group];
    ItemIterator last = {items->end};
    for (ItemIterator item = {items->begin}; item != last; ++item.current) {
        if ((*item.current)->enabled != 0) {
            return 1;
        }
    }
    return 0;
}
} /* extern "C" */
