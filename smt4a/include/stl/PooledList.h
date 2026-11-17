#ifndef STL_POOLED_LIST_H
#define STL_POOLED_LIST_H

#include "common.h"

/* Doubly linked list whose erased nodes go onto a free list instead of being freed. */
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
struct AllocationBlock {
    AllocationBlock *next; // 0x00
    u32 capacity;          // 0x04
    void *data;            // 0x08
};
struct PooledList {
    AllocationBlock *blocks; // 0x00
    ListNode *freeNodes;     // 0x04
    void *begin;             // 0x08
    void *end;               // 0x0C
    ListNode *sentinel;      // 0x10
    u32 count;               // 0x14
};

struct ListIterator {
    ListNode *node;
    explicit ListIterator(ListNode *value) : node(value) {}
    ListIterator(const ListIterator &other) : node(other.node) {}
};

#endif
