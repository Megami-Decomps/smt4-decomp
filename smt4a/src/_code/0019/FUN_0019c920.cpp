#include "common.h"

struct SortedNodeView {
    u32 key;                         // 0x00
    u8 unk04[8];                     // 0x04
    SortedNodeView* previous;        // 0x0C
    SortedNodeView* next;            // 0x10
};

struct SortedListView {
    SortedNodeView* head;            // 0x00
    SortedNodeView* tail;            // 0x04
    u32 count;                       // 0x08
};

// Insert in ascending unsigned-key order, ahead of existing equal-key nodes.
extern "C" void FUN_0019c920(SortedListView* list, SortedNodeView* node)
{
    SortedNodeView* cursor = list->tail;
    if (cursor == 0) {
        list->head = node;
        list->tail = node;
        node->previous = 0;
        node->next = 0;
    } else {
        do {
            if (node->key > cursor->key) {
                break;
            }
            cursor = cursor->previous;
        } while (cursor != 0);

        if (cursor == 0) {
            node->previous = 0;
            node->next = list->head;
            list->head = node;
            node->next->previous = node;
        } else {
            SortedNodeView* successor = cursor->next;
            cursor->next = node;
            node->previous = cursor;
            node->next = successor;
            if (successor == 0) {
                list->tail = node;
            } else {
                successor->previous = node;
            }
        }
    }
    ++list->count;
}
