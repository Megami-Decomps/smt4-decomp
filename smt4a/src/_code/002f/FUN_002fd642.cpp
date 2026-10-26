#include "common.h"

struct ListValue;
struct ListValueVtable {
    void (*destroy)(ListValue *);
};
struct ListValue {
    ListValueVtable *vtable; // 0x00
};
struct ListNode {
    ListNode *next; // 0x00
    ListNode *previous; // 0x04
    ListValue value; // 0x08
};
struct PooledList {
    u32 unk00;
    ListNode *freeNodes; // 0x04
    u32 unk08[2];
    ListNode *sentinel; // 0x10
    u32 count; // 0x14
};

struct ListIterator {
    ListNode *node;
    explicit ListIterator(ListNode *value) : node(value) {}
    ListIterator(const ListIterator &other) : node(other.node) {}
};

// Unlink an element, destroy its value, and return the following iterator.
extern "C" ListIterator FUN_002fd642(PooledList *list, const ListIterator &position)
{
    ListNode *sentinel = list->sentinel;
    if (position.node == sentinel) {
        ListIterator end(sentinel);
        return end;
    }
    ListIterator next(position.node->next);
    position.node->previous->next = position.node->next;
    position.node->next->previous = position.node->previous;
    --list->count;
    ListValue *value = &position.node->value;
    value->vtable->destroy(value);
    ListNode *node = position.node;
    node->next = list->freeNodes;
    list->freeNodes = node;
    return next;
}
