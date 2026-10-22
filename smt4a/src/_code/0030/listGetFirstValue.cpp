#include "common.h"
extern "C" {
struct Node { u32 unk00; void *value; };
struct List { u32 unk00; Node *first; u32 unk08; Node *last; };
Node *FUN_0030337e(void *head);
/* Returns the first node, or null when the list is empty. */
void *listGetFirstValue(List *list) {
    Node *end = FUN_0030337e(&list->first);
    if (list->last == end) return NULL;
    return end->value;
}
}
