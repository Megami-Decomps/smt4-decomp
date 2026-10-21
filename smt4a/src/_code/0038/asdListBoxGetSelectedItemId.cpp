/* NON_MATCHING: retail preloads the node item pointer before comparing its row key; the compiler loads it only on the found branch and uses r1 for the key. */
#include "shard/W6_W6Match3_ListBoxSelection.h"

extern "C" {
u32 jobGetWork(u32 job);

u32 asdListBoxGetSelectedItemId(u32 job)
{
    AsdListBoxSelectionWork* work = (AsdListBoxSelectionWork*)jobGetWork(job);
    s32 selectedIndex = work->top + work->offset;
    work = (AsdListBoxSelectionWork*)jobGetWork(job);
    for (AsdListNode* node = work->items.first; node != NULL; node = node->next) {
        if (node->unk00 == (u32)selectedIndex) {
            return ((AsdListBoxItem*)node->item)->id;
        }
    }
    return (u32)-1;
}

} /* extern "C" */
