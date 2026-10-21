/* NON_MATCHING: retail uses mov r5, r0 where the compiled block uses ldr r0, [r0, #0]. */
#include "common.h"

struct ListNode {
    ListNode* next; // 0x00
    u32 unk04;      // 0x04
    void* data;    // 0x08
};

struct ListState {
    ListNode* head; // 0x00
    u32 unk04;      // 0x04
    u32 unk08;      // 0x08
    u32 unk0C;      // 0x0C
};

extern "C" {
void asdOperatorDeleteArray(void* allocation);

void FUN_001326f6(ListState* list)
{
    while (list->head != NULL) {
        ListNode* node = list->head;
        list->head = node->next;
        asdOperatorDeleteArray(node->data);
        asdOperatorDeleteArray(node);
    }

    list->unk04 = 0;
    list->unk08 = 0;
    list->unk0C = 0;
}
}
