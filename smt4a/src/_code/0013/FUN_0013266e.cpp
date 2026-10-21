/* NON_MATCHING: retail uses mov r4, r0 where the compiled block uses mov r4, r1. */
#include "common.h"

struct ListNode {
    ListNode* next;       // 0x00
    ListNode* previous;   // 0x04
    u8 payload[1];        // 0x08 (remaining payload size unknown)
};

struct ListState {
    u32 unk00;           // 0x00
    ListNode* freeHead;   // 0x04
    u8 unk08[8];         // 0x08
    ListNode* sentinel;   // 0x10
    u32 count;           // 0x14
};

struct ListIterator {
    ListNode* node;       // 0x00
};

extern "C" {

void FUN_002fffbe(void* payload);

void FUN_0013266e(ListIterator* result, ListState* list,
                  ListIterator* position)
{
    if (list->sentinel == position->node) {
        result->node = list->sentinel;
        return;
    }

    ListNode* next = position->node->next;
    position->node->previous->next = position->node->next;
    position->node->next->previous = position->node->previous;
    --list->count;

    FUN_002fffbe(position->node->payload);

    ListNode* removed = position->node;
    removed->next = list->freeHead;
    list->freeHead = removed;
    result->node = next;
}

} // extern "C"
