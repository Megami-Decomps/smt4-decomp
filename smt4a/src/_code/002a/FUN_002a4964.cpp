/* NON_MATCHING: retail retains late-inlined top/offset getter calls' register moves and saved registers. */
#include "shard/W6_W6Match3_ScrollSelection.h"

// Mark an unlocked list dirty only when its selected entry changes.
extern "C" void FUN_002a4964(ScrollSelection* list, s32 index)
{
    if (list->locked != 0) {
        return;
    }
    if (list->top + list->offset != index) {
        list->changed = 1;
    }
    scrollListSetSelection(list, index);
}
