/* NON_MATCHING: retail uses mov r4, r0 where the compiled block uses mov r4, r1. */
#include "common.h"

struct ListNode {
    ListNode* next; // 0x00
    ListNode* previous; // 0x04
};

struct NodeList {
    u32 unk00; // 0x00
    ListNode* freeHead; // 0x04
    u32 unk08; // 0x08
    u32 unk0C; // 0x0C
    ListNode* end; // 0x10
    u32 count; // 0x14
};

extern "C" {
s32 wordRefsEqual_00132192(ListNode** position, ListNode** end);

void FUN_00132dac(ListNode** result, NodeList* list, ListNode** position)
{
    ListNode* end = list->end;
    if (wordRefsEqual_00132192(position, &end) == 0) {
        ListNode* successor = (*position)->next;
        (*position)->previous->next = successor;
        (*position)->next->previous = (*position)->previous;
        --list->count;

        ListNode* removed = *position;
        removed->next = list->freeHead;
        list->freeHead = removed;
        *result = successor;
    } else {
        *result = list->end;
    }
}
}
