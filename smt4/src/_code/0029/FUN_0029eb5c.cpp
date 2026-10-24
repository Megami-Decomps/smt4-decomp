#include "shard/W6_W6Match3_ScrollSelection.h"

extern "C" {
s32 scrollListGetTop(ScrollSelection *list);
s32 scrollListGetOffset(ScrollSelection *list);
}

// Mark an unlocked list dirty only when its selected entry changes.
extern "C" void FUN_0029eb5c(ScrollSelection* list, s32 index)
{
    if (list->locked != 0) {
        return;
    }
    if (scrollListGetTop(list) + scrollListGetOffset(list) != index) {
        list->changed = 1;
    }
    scrollListSetSelection(list, index);
}
