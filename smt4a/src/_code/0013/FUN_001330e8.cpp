/* NON_MATCHING: retail uses b.n 2c where the compiled block uses mov r1, r7. */
#include "common.h"

struct ListNode {
    ListNode* next;      // 0x00
    ListNode* previous;  // 0x04
};

struct NodeList {
    u32 unk00;           // 0x00
    ListNode* freeHead;  // 0x04
    u8 unk08[8];         // 0x08
    ListNode* sentinel;  // 0x10
    u32 count;          // 0x14
};

extern "C" s32 wordRefsDiffer_001321c2(ListNode* const* current,
                                      ListNode* const* end);

extern "C" void FUN_001330e8(ListNode** result, NodeList* list,
                              ListNode** current, ListNode* const* end)
{
    while (wordRefsDiffer_001321c2(current, end) != 0) {
        ListNode* node = *current;
        ListNode* next = list->sentinel;
        if (node != next) {
            next = node->next;
            node->previous->next = next;
            node->next->previous = node->previous;
            --list->count;
            node->next = list->freeHead;
            list->freeHead = node;
        }
        *current = next;
    }
    *result = *current;
}
