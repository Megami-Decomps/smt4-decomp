/* NON_MATCHING: retail uses mov r2, r0 where the compiled block uses ldrd r2, [r1]. */
#include "common.h"

struct ListNode {
    ListNode* next; // 0x00
    ListNode* prev; // 0x04
};

struct ListState {
    u32 count; // 0x00
};

extern "C" void FUN_001b6668(ListState* list, ListNode* node)
{
    ListNode* next = node->next;
    ListNode* prev = node->prev;

    next->prev = prev;
    prev->next = next;
    list->count -= 1;
    node->next = NULL;
    node->prev = NULL;
}
