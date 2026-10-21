/* NON_MATCHING: retail emits 'mov r4, r0'; compiler emits 'mov r5, r0' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Node { Node *next; Node *previous; };
struct List { u32 reserved; Node *head; u8 unk08[8]; Node *end; u32 count; };
s32 wordRefsEqual_00301734(Node **first, Node **second);
void FUN_00301754(Node **output, List *list, Node **position) {
    Node *end = list->end;
    if (wordRefsEqual_00301734(position, &end)) {
        *output = list->end;
        return;
    }
    Node *node = *position;
    Node *next = node->next;
    node->previous->next = next;
    next->previous = node->previous;
    --list->count;
    node->next = list->head;
    list->head = node;
    *output = next;
}
}
