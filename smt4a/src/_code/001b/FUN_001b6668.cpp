/* Erases a node from an intrusive list and returns the node that followed it (nw::ut::internal::LinkListImpl::erase). */
#include "common.h"

struct ListNode {
    ListNode* next; // 0x00
    ListNode* prev; // 0x04
};

struct ListState {
    u32 count; // 0x00
};

extern "C" ListNode* FUN_001b6668(ListState* list, ListNode* node)
{
    ListNode* next = node->next;
    ListNode* prev = node->prev;

    next->prev = prev;
    prev->next = next;
    list->count -= 1;
    node->next = NULL;
    node->prev = NULL;
    return next;
}
