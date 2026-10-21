/* NON_MATCHING: retail emits 'mov r5, r1'; compiler emits 'mov r6, r1' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Address { u8 storage[32]; u32 first, second, third, fourth; };
struct Node { Node *next; Node *previous; Address address; };
struct List { u8 unk00[0x10]; Node *head; u32 count; };
Node *FUN_001325fe(List *list, u32 option);
Address *onlineSockAddrConstruct2(Address *output, const Address *source);
void FUN_002fff82(List *list, const Address *source) {
    Node *head = list->head;
    Node *node = FUN_001325fe(list, 0);
    Address *address = onlineSockAddrConstruct2(&node->address, source);
    address->second = source->second;
    address->first = source->first;
    address->fourth = source->fourth;
    address->third = source->third;
    node->next = head;
    node->previous = head->previous;
    head->previous->next = node;
    head->previous = node;
    ++list->count;
}
}
