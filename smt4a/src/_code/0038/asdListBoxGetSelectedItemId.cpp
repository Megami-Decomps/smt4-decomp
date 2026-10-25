#include "shard/W6_W6Match3_ListBoxSelection.h"

extern "C" {
u32 jobGetWork(u32 job);

u32 asdListBoxGetSelectedItemId(u32 job)
{
    AsdListBoxSelectionWork* work = (AsdListBoxSelectionWork*)jobGetWork(job);
    s32 selectedIndex = work->top + work->offset;
    work = (AsdListBoxSelectionWork*)jobGetWork(job);
    for (AsdListNode* node = work->items.first; node != NULL; node = node->next) {
        u32 row = node->unk00;
        const AsdListBoxItem *item = static_cast<const AsdListBoxItem *>(node->item);
        if (row == (u32)selectedIndex) {
            return item->id;
        }
    }
    return (u32)-1;
}

} /* extern "C" */
