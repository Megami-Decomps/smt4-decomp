/* NON_MATCHING: retail uses mov r4, r0 where the compiled block uses mov r5, r1. */
#include "common.h"

struct ListValue {
    u32 first;  // +0x0
    u32 second; // +0x4
};

struct ListNode {
    ListNode* next;     // +0x0
    ListNode* previous; // +0x4
    ListValue value;   // +0x8
};

struct ListIterator {
    ListNode* node; // +0x0
};

struct ListState {
    u8 unk00[0x14]; // +0x0
    u32 size;       // +0x14
};

extern "C" ListNode* FUN_002e9f94(ListState* list, u32 mode,
                                  ListIterator* position,
                                  const ListValue* value);

extern "C" void FUN_001324de(ListIterator* result, ListState* list,
                              ListIterator* position, const ListValue* value)
{
    ListNode* node = FUN_002e9f94(list, 0, position, value);
    ListValue copiedValue = *value;
    node->value.second = copiedValue.second;
    node->value.first = copiedValue.first;
    node->next = position->node;
    node->previous = position->node->previous;
    position->node->previous->next = node;
    position->node->previous = node;
    ++list->size;
    result->node = node;
}
