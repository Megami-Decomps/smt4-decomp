/* NON_MATCHING: retail reloads the node link and assigns the saved iterator registers differently. */
#include "common.h"

struct ListValue;
struct ListValueVtable {
    void (*destroy)(ListValue* value);
};

struct ListValue {
    ListValueVtable* vtable; // 0x00
};

struct ListNode {
    ListNode* next;         // 0x00
    ListNode* previous;     // 0x04
    ListValue value;        // 0x08
};

struct Collection {
    u32 unk00;              // 0x00
    ListNode* freeNodes;    // 0x04
    u8 unk08[8];            // 0x08
    ListNode* end;          // 0x10
    u32 count;             // 0x14
};

// Erase an element, destroy its value, and recycle the node.
extern "C" void FUN_001329ec(ListNode** result, Collection* collection, ListNode** current)
{
    ListNode* node = *current;
    if (node == collection->end) {
        *result = collection->end;
        return;
    }

    ListNode* next = node->next;
    node->previous->next = node->next;
    (*current)->next->previous = (*current)->previous;
    --collection->count;
    ListValue* value = &(*current)->value;
    value->vtable->destroy(value);
    node = *current;
    node->next = collection->freeNodes;
    collection->freeNodes = node;
    *result = next;
}
